#include "SimulinkConfigSetParser.h"
#include "Logger.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSetParser::SimulinkConfigSetParser() : dataObject(nullptr) {
  ptr_ = std::make_shared<SimulinkConfigSet>();
}

ErrorCode SimulinkConfigSetParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();
  if (!data) {
    l.log(Logger::V_ERROR,
          "SimulinkConfigSetParser::null data node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST SlxParameter::SECTION_ConfigSet) != 0) {
    l.log(Logger::V_ERROR,
          "SimulinkConfigSetParser::setInputData failed: expected node "
          "<ConfigSet>, but got <%s>",
          data->name);
    return ErrorCode::SLX_EINVAR;
  }

  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkConfigSetParser::parse() {
  Logger &l = Logger::getInstance();

  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
       nodePtr_ = nodePtr_->next) {

    std::unique_ptr<SimulinkObjectParser> objParserPtr =
        std::make_unique<SimulinkObjectParser>();
    ErrorCode objInputStatus = objParserPtr->setInputData(nodePtr_);
    if (objInputStatus != ErrorCode::SLX_OK) {
      l.log(Logger::V_ERROR, "SimulinkConfigSetParser:: failed to set input "
                             "data for object parser");
      return objInputStatus;
    }

    auto cfgPtr = std::dynamic_pointer_cast<SimulinkConfigSet>(
        objParserPtr->getOutputData());
    if (!cfgPtr) {
      l.log(Logger::V_ERROR, "SimulinkConfigSetParser:: failed to cast parsed "
                             "object to SimulinkConfigSet");
      return ErrorCode::SLX_ECASTFAIL;
    }
    ptr_ = cfgPtr;
  }
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkConfigSet>
SimulinkConfigSetParser::getOutputData() const {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
