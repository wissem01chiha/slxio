#include "SimulinkConfigSetParser.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SLXConfigSetParser::SLXConfigSetParser() {
  this->ptr_ = std::make_unique<SimulinkConfigSet>();
}

ErrorCode SimulinkConfigSetParser::setInputData(const xmlNodePtr data) {

    Logger &l = Logger::getInstance();
    if (!data) {
    l.log(Logger::V_ERROR,"SimulinkConfigSetParser::null data node pointer received");
        return ErrorCode::SLX_ENULLPTR;
    }

  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkConfigSetParser::parse() { return ErrorCode::SLX_OK; }


/// SLXParser<SimulinkConfigSet>::ErrorCode
/// SLXConfigSetParser::parse() {


  /// if (xmlStrcmp(nodePtr->name, BAD_CAST SimulinkConstant::SECTION_ConfigSet) !=
///    0) {
    // slog_fatal("SLXConfigSetParser::build failed: Expected node "
    //            "<ConfigSet>, but got <%s>",
    //            nodePtr->name);
///   return SLX_ERR_INVALID_XML;
/// }

   /// for (xmlNodePtr nodePtr_ = nodePtr->children; nodePtr_ != nullptr;
///  nodePtr_ = nodePtr_->next) {
         ///   SimulinkObjectParser *objParserPtr = new SimulinkObjectParser();
         ///  SimulinkErrorType status = objParserPtr->build(nodePtr_);
         /// if (status != SLX_OK) {
         ///    slog_fatal("SLXConfigSetParser::build failed: fail to build
         ///    object "
         ///              "%s",
         ///              SimulinkConstant::SECTION_ConfigSet);
         ///  return status;
         /// }

     /// auto cfgPtr =
         ///     std::dynamic_pointer_cast<SimulinkConfigSet>(objParserPtr->get());
         /// this->p_ = std::make_unique<SimulinkConfigSet>(*cfgPtr);
         ///}
         /// return SLXParser::ErrorCode::SLX_OK;
         ///     }

std::shared_ptr<SimulinkElementBase>
SimulinkConfigSetParser::getDataObject() const {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


