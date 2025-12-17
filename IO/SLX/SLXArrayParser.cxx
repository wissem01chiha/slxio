#include "SLXArrayParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SLXArrayParser::SLXArrayParser() {
  this->ptr_ = std::make_shared<SimulinkArray>();
}

// SimulinkErrorType SLXArrayParser::build(xmlNodePtr nodePtr) {

//   if (nodePtr == nullptr) {
//     slog_fatal(
//         "SLXArrayParser::build failed: null node pointer received");
//     return SimulinkErrorType::SLX_ERR_NULL_PTR;
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
//       SLXArrayParser *subArrBuilderPtr = new SLXArrayParser();
//       SimulinkErrorType status = subArrBuilderPtr->build(nodePtr_);
//       if (status != SimulinkErrorType::SLX_OK) {
//         slog_fatal("SLXArrayParser::build failed: fail to build "
//                    "sub Array elment");
//         return status;
//       }
//       p_->add(subArrBuilderPtr->get());
//     }
//   }
//   return SimulinkErrorType::SLX_OK;
// }

// std::shared_ptr<SimulinkArray> SLXArrayParser::get() {
//   return std::shared_ptr<SimulinkArray>(std::move(p_));
// }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END