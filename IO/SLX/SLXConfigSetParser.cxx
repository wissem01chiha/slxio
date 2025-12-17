#include "SLXConfigSetParser.h"
#include "SLXObjectParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SLXConfigSetParser::SLXConfigSetParser() {
  this->p_ = std::make_unique<SimulinkConfigSet>();
}

SLXParser<SimulinkConfigSet>::ErrorCode
SLXConfigSetParser::parse(xmlNodePtr nodePtr) {
  if (nodePtr == nullptr) {
    // slog_fatal(
    //     "SLXConfigSetParser::build failed: null node pointer received");
    return SLX_ERR_NULL_PTR;
  }

  if (xmlStrcmp(nodePtr->name, BAD_CAST SimulinkConstant::SECTION_ConfigSet) !=
      0) {
    // slog_fatal("SLXConfigSetParser::build failed: Expected node "
    //            "<ConfigSet>, but got <%s>",
    //            nodePtr->name);
    return SLX_ERR_INVALID_XML;
  }

  for (xmlNodePtr nodePtr_ = nodePtr->children; nodePtr_ != nullptr;
       nodePtr_ = nodePtr_->next) {
    SimulinkObjectBuilder *objBuilderPtr = new SimulinkObjectBuilder();
    SimulinkErrorType status = objBuilderPtr->build(nodePtr_);
    if (status != Ok) {
      slog_fatal("SLXConfigSetParser::build failed: fail to build object "
                 "%s",
                 SimulinkConstant::SECTION_ConfigSet);
      return status;
    }

    auto cfgPtr =
        std::dynamic_pointer_cast<SimulinkConfigSet>(objBuilderPtr->get());
    this->p_ = std::make_unique<SimulinkConfigSet>(*cfgPtr);
  }
  return SLXParser::ErrorCode::Ok;
}

std::shared_ptr<SimulinkConfigSet> SLXConfigSetParser::get() {
  return std::shared_ptr<SimulinkConfigSet>(std::move(p_));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END