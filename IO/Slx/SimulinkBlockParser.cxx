#include "SimulinkBlockParser.h"
#include "Logger.h"
#include "SimulinkArrayParser.h"
#include "SimulinkObjectParser.h"
#include "SimulinkParameterParser.h"
#include "LibXML2.h"
#include "SlxParameter.h"


SimulinkBlockParser::SimulinkBlockParser() {
  this->p_ = std::make_unique<SimulinkBlock>();
}

ErrorCode SimulinkBlockParser::setInputData(void *data) {
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkElementBase>
SimulinkBlockParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkBlockParser::parse() { return ErrorCode::SLX_OK; }

SimulinkErrorType SimulinkBlockParser::build(xmlNodePtr nodePtr) {

  if (nodePtr == nullptr) {
    slog_fatal("SimulinkBlockParser::build failed: null node pointer received");
    return SimulinkErrorType::SLX_ENULLPTR;
  }
  for (xmlAttrPtr attr = nodePtr->properties; attr; attr = attr->next) {
  }
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkBlock> SimulinkBlockParser::get() {
  return std::shared_ptr<SimulinkBlock>(std::move(p_));
}

