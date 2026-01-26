#include "SimulinkContentParser.h"
#include "Directory.h"
#include "Logger.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkContentParser::SimulinkContentParser() {
  ptr_ = std::make_shared<SimulinkContent>();
  dataObject = File();
}

ErrorCode SimulinkContentParser::setInputData(const File fs) {

  Logger &l = Logger::getInstance();

  if (!fs.isFile()) {
    l.log(Logger::V_ERROR, "Input file  is not valid : ", fs.getFilepath());
    buffer_.push_back(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }
  if (~strcmp(fs.getFileExtension(), "slx") == 0) {
    l.log(Logger::V_ERROR,
          "Only slx file extension are supported in this version");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = fs;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContentParser::parse() {

  Logger &l = Logger::getInstance();

  ErrorCode init_status = initTempDirectory();
  if (init_status != ErrorCode::SLX_OK) {
    buffer_.push_back(init_status);
    return init_status;
  }

  ErrorCode unzip_status = unzip();
  if (unzip_status != ErrorCode::SLX_OK) {
    buffer_.push_back(unzip_status);
    return unzip_status;
  }

  ErrorCode load_status = loadXmlTargets(
      tempDirectory.getDirectoryPath());
  if (load_status != ErrorCode::SLX_OK) {
    buffer_.push_back(load_status);
    return load_status;
  }

  ErrorCode clear_status = clearTempDirectory();
  if (clear_status != ErrorCode::SLX_OK) {
    buffer_.push_back(clear_status);
    return clear_status;
  }
  
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkContent> SimulinkContentParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkContentParser::initTempDirectory() {

  Logger &l = Logger::getInstance();

  /// replace "." with "_" for temporary directory name
  /// to be removed and implemented in Directory class
  std::string tempdirname = dataObject.getFilename();
  size_t pos = tempdirname.find('.');
  if (pos != std::string::npos) {
    tempdirname.replace(pos, 1, "_");
  }
  tempdirname += "_tmp";

  const char *tmpdir = Directory::getTemporaryDirectory(tempdirname.c_str());

  if (tmpdir == nullptr) {
    l.log(Logger::V_ERROR,
          "failed to create temporary directory with prefix : ",
          tempdirname.c_str());
    return ErrorCode::SLX_EIOERR;
  }

  std::string tempDirectoryPath =
      std::string(Directory::getCurrentDirectory()) + PATH_SEP +
      std::string(tmpdir);

  if (Directory::isDirectory(tempDirectoryPath)) {
    tempDirectory = Directory(tempDirectoryPath);
  } else {
    l.log(Logger::V_ERROR, "temporary directory path is not valid : ",
          tempDirectoryPath.c_str());
    return ErrorCode::SLX_EIOERR;
  }

  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContentParser::unzip() {

  Logger &l = Logger::getInstance();

  const char* tmpdir = tempDirectory.getDirectoryPath().c_str();
  std::string tempdirfullpath = tempDirectory.getDirectoryPath();

  ErrorCode mv_status = dataObject.copy(tempdirfullpath.c_str());
  if (mv_status != ErrorCode::SLX_OK) {
    l.log(Logger::V_ERROR, "failed to copy slx file to temporary directory : ",
          tempdirfullpath.c_str());
    return mv_status;
  }

  // Build the full path to the temporary copy of the SLX file.
  // Create a new File object using this path as the working baseline,
  // ensuring the original user file remains untouched.
  std::string tempfilefullpath =
      tempdirfullpath + PATH_SEP + dataObject.getFilename();

  File fileDataObject(tempfilefullpath, File::Read);
  if (!fileDataObject.isFile()) {
    l.log(Logger::V_ERROR, "tempfilefullpath is not a valid file ",
          tempfilefullpath);
    return ErrorCode::SLX_EIOERR;
  }
  ErrorCode status = fileDataObject.setFileExtension("zip");

  if (status != ErrorCode::SLX_OK) {
    l.log(Logger::V_ERROR, "failed to set file extension to zip");
    return status;
  }

  ErrorCode unzip_status = fileDataObject.unzip(tmpdir);
  if (unzip_status != ErrorCode::SLX_OK) {
    l.log(Logger::V_ERROR, "failed to unzip ",
          fileDataObject.getFilepath().c_str(), " in directory : ", tmpdir);
    return unzip_status;
  }

  return ErrorCode::SLX_OK;
}

ErrorCode
SimulinkContentParser::loadXmlTargets(const std::string &tempdirfullpath) {

  Logger &l = Logger::getInstance();

XmlTarget targets[] = {
      {"/simulink/blockdiagram.xml", &ptr_->blockdiagram},
      {"/simulink/modelDictionary.xml", &ptr_->modelDictionary},
      {"/simulink/configSetInfo.xml", &ptr_->configSetInfo},
      {"/simulink/bddefaults.xml", &ptr_->bddefaults},
      {"/simulink/graphicalInterface.xml", &ptr_->graphicalInterface},
      {"/metadata/coreProperties.xml", &ptr_->coreProperties},
      {"/metadata/mwcoreProperties.xml", &ptr_->mwcoreProperties},
      {"/metadata/mwcorePropertiesExtension.xml",
       &ptr_->mwcorePropertiesExtension}};


  for (auto &t : targets) {
    std::string fullPath = tempdirfullpath + t.path;
    *t.target = xmlReadFile(fullPath.c_str(), nullptr, 0);
    if (*t.target == nullptr) {
      l.log(Logger::V_ERROR, "failed to read ", fullPath.c_str(),
            " from the slx content");
      return ErrorCode::SLX_EIOERR;
    }
  }

  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContentParser::clearTempDirectory() {
  Logger &l = Logger::getInstance();
  ErrorCode status = tempDirectory.remove();
  if (status != ErrorCode::SLX_OK) {
    l.log(Logger::V_ERROR, "failed to remove temporary directory : ",
          tempDirectory.getDirectoryPath().c_str());
    return status;
  }
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
