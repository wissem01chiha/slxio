#include "SimulinkFileParser.h"
#include "Logger.h"
#include "SimulinkContentParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkFileParser::SimulinkFileParser() {
  ptr_ = std::make_shared<SimulinkFile>();
  dataObject = File();
}

ErrorCode SimulinkFileParser::setInputData(const File fs) {
  dataObject = fs;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkFileParser::parse() { 
  
  SimulinkContentParser contentParser;
  ErrorCode status = contentParser.setInputData(dataObject);
  if (status != ErrorCode::SLX_OK) {
    buffer_.push_back(status);
    return status;
  }
  status = contentParser.parse();
  if (status != ErrorCode::SLX_OK) {
    buffer_.push_back(status);
    return status;
  }
  ptr_->content = *(contentParser.getDataObject().get());

  ptr_->matlabRelease = "R2025a";  
  ptr_->version = "1.0";
  ptr_->matlabVersion = "9.13.0.2049771 (R2025a) Update 1";            
  return ErrorCode::SLX_OK; 
}

std::shared_ptr<SimulinkFile> SimulinkFileParser::getDataObject() const {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
