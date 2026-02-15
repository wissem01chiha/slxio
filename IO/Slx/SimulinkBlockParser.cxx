#include "SimulinkBlockParser.h"
#include "Logger.h"
#include "SimulinkArrayParser.h"
#include "SimulinkObjectParser.h"
#include "SimulinkParameterParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlockParser::SimulinkBlockParser(): dataObject(nullptr) {
  ptr_ = std::make_shared<SimulinkBlock>();
}

ErrorCode SimulinkBlockParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();
  if (data == nullptr) {
    l.log(Logger::V_ERROR, "SimulinkBlockParser:: null pointer received");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkBlock> SimulinkBlockParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkBlockParser::parse() { return ErrorCode::SLX_OK; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END