#include "SimulinkArrayParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArrayParser ::SimulinkArrayParser() {
  this->ptr_ = std::make_shared<SimulinkArray>();
  this->dataObject = nullptr;
}

ErrorCode SimulinkArrayParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();
  if (data == nullptr) {
    l.log(Logger::V_ERROR,
          "SimulinkArrayParser:: null node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (data->name == nullptr) {
    l.log(Logger::V_ERROR,
          "SimulinkArrayParser:: invalid xmlNodePtr received");
    return ErrorCode::SLX_EINVAR;
  }

  this->dataObject = data;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkArray> SimulinkArrayParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkArrayParser::parse() { return ErrorCode::SLX_OK; }

// SimulinkErrorType SimulinkArrayParser ::build(xmlNodePtr nodePtr) {

//   if (nodePtr == nullptr) {
//     slog_fatal(
//         "SimulinkArrayParser ::build failed: null node pointer received");
//     return SimulinkErrorType::SLX_ENULLPTR;
//   }
//   uint32 id = 0;
//   std::string name, dimension, type;

//   for (xmlAttrPtr attr = nodePtr->properties; attr; attr = attr->next) {
//     std::string attrName = reinterpret_cast<const char *>(attr->name);
//     std::string attrValue =
//         reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));

//     if (attrName == SimulinkConstant::PARAM_PropName) {
//       name = attrValue;
//     }

//     if (attrName == SimulinkConstant::PARAM_Type) {
//       type = attrValue;
//     }

//     if (attrName == SimulinkConstant::PARAM_Dimension) {
//       dimension = attrValue;
//     }
//   }
//   this->p_ = std::make_unique<SimulinkArray>(id, type, name, dimension);

//   for (xmlNodePtr nodePtr_ = nodePtr->children; nodePtr_ != nullptr;
//        nodePtr_ = nodePtr_->next) {

//     if (nodePtr_->type == XML_ELEMENT_NODE &&
//         xmlStrcmp(nodePtr_->name, BAD_CAST SimulinkConstant::SECTION_Array)
//         ==
//             0) {
//       SimulinkArrayParser  *subArrParserPtr = new SimulinkArrayParser ();
//       SimulinkErrorType status = subArrParserPtr->build(nodePtr_);
//       if (status != SimulinkErrorType::SLX_OK) {
//         slog_fatal("SimulinkArrayParser ::build failed: fail to build "
//                    "sub Array elment");
//         return status;
//       }
//       p_->add(subArrParserPtr->get());
//     }
//   }
//   return SimulinkErrorType::SLX_OK;
// }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END