#include "SimulinkContentParser.h"
#include "Directory.h"
#include <cstring>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

HError SimulinkContentParser::setInputData(const File fs)
{
  if (!fs.isFile())
  {
    // l.log(Logger::V_ERROR, "Input file  is not valid : ", fs.getFilepath());
    return E_INVALID_ARGUMENT;
  }
  if (~strcmp(fs.getFileExtension(), "slx") == 0)
  {
    // l.log(
      Logger::V_ERROR, "Only slx file extension are supported in this version");
      return E_INVALID_ARGUMENT;
  }
  dataObject = fs;
  return E_OK;
}

HError SimulinkContentParser::parse()
{
  HError init_status = initTempDirectory();
  if (init_status != E_OK)
  {
    return init_status;
  }

  HError unzip_status = unzip();
  if (unzip_status != E_OK)
  {
    return unzip_status;
  }

  HError load_status = loadXmlTargets(tempDirectory.getDirectoryPath());
  if (load_status != E_OK)
  {
    return load_status;
  }

  HError clear_status = clearTempDirectory();
  if (clear_status != E_OK)
  {
    return clear_status;
  }

  return E_OK;
}

HError SimulinkContentParser::initTempDirectory()
{
  /// replace "." with "_" for temporary directory name
  /// to be removed and implemented in Directory class
  std::string tempdirname = dataObject.getFilename();
  size_t pos = tempdirname.find('.');
  if (pos != std::string::npos)
  {
    tempdirname.replace(pos, 1, "_");
  }
  tempdirname += "_tmp";

  const char* tmpdir = Directory::getTemporaryDirectory(tempdirname.c_str());

  if (tmpdir == nullptr)
  {
    // l.log(Logger::V_ERROR,
      "failed to create temporary directory with prefix : ",
      tempdirname.c_str());
      return SLX_EIOERR;
  }

  std::string tempDirectoryPath =
    std::string(Directory::getCurrentDirectory()) + PATH_SEP + std::string(tmpdir);

  if (Directory::isDirectory(tempDirectoryPath))
  {
    tempDirectory = Directory(tempDirectoryPath);
  }
  else
  {
    // l.log(Logger::V_ERROR,
      "temporary directory path is not valid : ", tempDirectoryPath.c_str());
      return SLX_EIOERR;
  }

  return E_OK;
}

HError SimulinkContentParser::unzip()
{
  const char* tmpdir = tempDirectory.getDirectoryPath().c_str();
  std::string tempdirfullpath = tempDirectory.getDirectoryPath();

  HError mv_status = dataObject.copy(tempdirfullpath.c_str());
  if (mv_status != E_OK)
  {
    // l.log(Logger::V_ERROR, "failed to copy slx file to temporary directory :
    // ",
      tempdirfullpath.c_str());
      return mv_status;
  }

  // Build the full path to the temporary copy of the SLX file.
  // Create a new File object using this path as the working baseline,
  // ensuring the original user file remains untouched.
  std::string tempfilefullpath = tempdirfullpath + PATH_SEP + dataObject.getFilename();

  File fileDataObject(tempfilefullpath, File::Read);
  if (!fileDataObject.isFile())
  {
    // l.log(Logger::V_ERROR, "tempfilefullpath is not a valid file ",
      tempfilefullpath);
      return SLX_EIOERR;
  }
  HError status = fileDataObject.setFileExtension("zip");

  if (status != E_OK)
  {
    // l.log(Logger::V_ERROR, "failed to set file extension to zip");
    return status;
  }

  HError unzip_status = fileDataObject.unzip(tmpdir);
  if (unzip_status != E_OK)
  {
    // l.log(Logger::V_ERROR, "failed to unzip ",
      fileDataObject.getFilepath().c_str(), " in directory : ", tmpdir);
      return unzip_status;
  }

  return E_OK;
}

HError SimulinkContentParser::loadXmlTargets(const std::string& tempdirfullpath)
{

  XmlTarget targets[] = { { "/simulink/blockdiagram.xml", &ptr->blockdiagram },
    { "/simulink/modelDictionary.xml", &ptr->modelDictionary },
    { "/simulink/configSetInfo.xml", &ptr->configSetInfo },
    { "/simulink/bddefaults.xml", &ptr->bddefaults },
    { "/simulink/graphicalInterface.xml", &ptr->graphicalInterface },
    { "/metadata/coreProperties.xml", &ptr->coreProperties },
    { "/metadata/mwcoreProperties.xml", &ptr->mwcoreProperties },
    { "/metadata/mwcorePropertiesExtension.xml", &ptr->mwcorePropertiesExtension } };

  for (auto& t : targets)
  {
    std::string fullPath = tempdirfullpath + t.path;
    *t.target = xmlReadFile(fullPath.c_str(), nullptr, 0);
    if (*t.target == nullptr)
    {
      // l.log(Logger::V_ERROR, "failed to read ", fullPath.c_str(),
        " from the slx content");
        return SLX_EIOERR;
    }
  }

  return E_OK;
}

HError SimulinkContentParser::clearTempDirectory()
{
  HError status = tempDirectory.RemoveElement();
  if (status != E_OK)
  {
    // l.log(Logger::V_ERROR, "failed to remove temporary directory : ",
      tempDirectory.getDirectoryPath().c_str());
      return status;
  }
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};
