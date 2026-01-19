#include "SimulinkContentParser.h"
#include "Directory.h"
#include "Logger.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkContentParser::SimulinkContentParser() {
  ptr_ = std::make_shared<SimulinkContent>();
  dataObject =File();
}

ErrorCode SimulinkContentParser::setInputData(const File fs) {

  Logger& l= Logger::getInstance();

  if(!fs.isFile()){
    l.log(Logger::V_ERROR,"Input file is not valid");
    buffer_.push_back(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }
  if(!strcmp(fs.getFileExtension(),"slx")==0){
    l.log(Logger::V_ERROR,"Only slx file extension are supported in this version");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject=fs;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkContent> SimulinkContentParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkContentParser::parse() { 

  Logger& l= Logger::getInstance();
  ErrorCode status = dataObject.setFileExtension("zip");

  if(status != ErrorCode::SLX_OK){
    l.log(Logger::V_ERROR,"failed to set file extension to zip");
    return status;
  }

  ErrorCode unzip_status = dataObject.unzip(Directory::getCurrentDirectory());
  if(unzip_status != ErrorCode::SLX_OK){
    l.log(Logger::V_ERROR,"failed to unzip the slx file");
    return unzip_status;
  }

  //ptr_->blockdiagram = xmlReadFile("blockdiagram.xml", nullptr, 0);
  //ptr_->modelDictionary = xmlReadFile("modelDictionary.xml", nullptr, 0);

  return ErrorCode::SLX_OK;
 }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


