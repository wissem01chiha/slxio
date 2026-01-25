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

std::shared_ptr<SimulinkContent> SimulinkContentParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkContentParser::parse() {

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

  std::string tempdirfullpath = std::string(Directory::getCurrentDirectory()) +
                                PATH_SEP + std::string(tmpdir);

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

  ErrorCode status = fileDataObject.setFileExtension("zip");

  if (status != ErrorCode::SLX_OK) {
    l.log(Logger::VERBOSITY_0, "failed to set file extension to zip");
    return status;
  }

  ErrorCode unzip_status = fileDataObject.unzip(tempdirfullpath.c_str());
  if (unzip_status != ErrorCode::SLX_OK) {
    l.log(Logger::V_ERROR,
          "failed to unzip the slx file to : ", tempdirfullpath.c_str());
    return unzip_status;
  }

  std::string blockdiagramPath =
      std::string(std::string(tempdirfullpath) + "/simulink/blockdiagram.xml");
  ptr_->blockdiagram = xmlReadFile(blockdiagramPath.c_str(), nullptr, 0);
  if (ptr_->blockdiagram == nullptr) {
    l.log(Logger::VERBOSITY_0,
          "failed to read blockdiagram.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }

  std::string modelDictionaryPath = std::string(
      std::string(tempdirfullpath) + "/simulink/modelDictionary.xml");
  ptr_->modelDictionary = xmlReadFile(modelDictionaryPath.c_str(), nullptr, 0);
  if (ptr_->modelDictionary == nullptr) {
    l.log(Logger::VERBOSITY_0,
          "failed to read modelDictionary.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }

  std::string configSetInfoPath =
      std::string(std::string(tempdirfullpath) + "/simulink/configSetInfo.xml");
  ptr_->configSetInfo = xmlReadFile(configSetInfoPath.c_str(), nullptr, 0);
  if (ptr_->configSetInfo == nullptr) {
    l.log(Logger::VERBOSITY_0,
          "failed to read configSetInfo.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }

  std::string bddefaultsPath =
      std::string(std::string(tempdirfullpath) + "/simulink/bddefaults.xml");
  ptr_->bddefaults = xmlReadFile(bddefaultsPath.c_str(), nullptr, 0);
  if (ptr_->bddefaults == nullptr) {
    l.log(Logger::VERBOSITY_0,
          "failed to read bddefaults.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }

  std::string graphicalInterfacePath = std::string(
      std::string(tempdirfullpath) + "/simulink/graphicalInterface.xml");
  ptr_->graphicalInterface =
      xmlReadFile(graphicalInterfacePath.c_str(), nullptr, 0);
  if (ptr_->graphicalInterface == nullptr) {
    l.log(Logger::V_ERROR,
          "failed to read graphicalInterface.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }

  std::string scheduleEditorPath = std::string(std::string(tempdirfullpath) +
                                               "/simulink/ScheduleEditor.xml");
  ptr_->scheduleEditor = xmlReadFile(scheduleEditorPath.c_str(), nullptr, 0);
  if (ptr_->scheduleEditor == nullptr) {
    l.log(Logger::V_ERROR,
          "failed to read ScheduleEditor.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }
  std::string scheduleCorePath =
      std::string(std::string(tempdirfullpath) + "/simulink/ScheduleCore.xml");
  ptr_->scheduleCore = xmlReadFile(scheduleCorePath.c_str(), nullptr, 0);
  if (ptr_->scheduleCore == nullptr) {
    l.log(Logger::V_ERROR,
          "failed to read ScheduleCore.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }
  std::string corePropertiesPath = std::string(std::string(tempdirfullpath) +
                                               "/metadata/coreProperties.xml");
  ptr_->coreProperties = xmlReadFile(corePropertiesPath.c_str(), nullptr, 0);
  if (ptr_->coreProperties == nullptr) {
    l.log(Logger::V_ERROR,
          "failed to read coreProperties.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }
  std::string mwcorePropertiesPath = std::string(
      std::string(tempdirfullpath) + "/metadata/mwcoreProperties.xml");
  ptr_->mwcoreProperties =
      xmlReadFile(mwcorePropertiesPath.c_str(), nullptr, 0);
  if (ptr_->mwcoreProperties == nullptr) {
    l.log(Logger::V_ERROR,
          "failed to read mwcoreProperties.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }
  std::string mwcorePropertiesExtensionPath = std::string(
      std::string(tempdirfullpath) + "/metadata/mwcorePropertiesExtension.xml");
  ptr_->mwcorePropertiesExtension =
      xmlReadFile(mwcorePropertiesExtensionPath.c_str(), nullptr, 0);
  if (ptr_->mwcorePropertiesExtension == nullptr) {
    l.log(Logger::V_ERROR,
          "failed to read mwcorePropertiesExtension.xml from the slx content");
    return ErrorCode::SLX_EIOERR;
  }

  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
