#include "SimulinkContentParser.h"
#include "LibXML2.h"
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
    l.log(Logger::V_ERROR,"Only slx file extension are supported");
    buffer_.push_back(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkContent> SimulinkContentParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkContentParser::parse() { return ErrorCode::SLX_OK; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


