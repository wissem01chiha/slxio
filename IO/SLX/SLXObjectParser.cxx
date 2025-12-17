#include "SLXObjectParser.h"
#include "SLXArrayParser.h"
#include "SLXConstant.h"
#include "SLXParameterParser.h"

SimulinkObjectBuilder::SimulinkObjectBuilder() {
  this->p_ = std::make_unique<SimulinkObject>();
}

SimulinkErrorType SimulinkObjectBuilder::build(xmlNodePtr nodePtr) {

  if (nodePtr == nullptr) {
    slog_fatal(
        "SimulinkObjectBuilder::build failed: null node pointer received");
    return SimulinkErrorType::SLX_ERR_NULL_PTR;
  }

  uint32 id = 0;
  std::string name, className;

  for (xmlAttrPtr attr = nodePtr->properties; attr; attr = attr->next) {
    std::string attrName = reinterpret_cast<const char *>(attr->name);
    std::string attrValue =
        reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
    if (attrName == SimulinkConstant::PARAM_ObjectID) {
      id = static_cast<uint32>(std::stoul(attrValue));
    } else if (attrName == SimulinkConstant::PARAM_ClassName) {
      className = attrValue;
    } else if (attrName == SimulinkConstant::PARAM_PropName) {
      name = attrValue;
    }
  }
  this->p_ = std::make_unique<SimulinkObject>(id, name, className);

  for (xmlNodePtr nodePtr_ = nodePtr->children; nodePtr_ != nullptr;
       nodePtr_ = nodePtr_->next) {

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name,
                  BAD_CAST SimulinkConstant::SECTION_Parameter) == 0) {

      SimulinkParameterBuilder *paramBuilderPtr =
          new SimulinkParameterBuilder();
      SimulinkErrorType status = paramBuilderPtr->build(nodePtr_);
      if (status != SimulinkErrorType::SLX_OK) {
        slog_fatal("SimulinkObjectBuilder::build failed: fail to build object "
                   "Parameter");
        return status;
      }
      p_->add(paramBuilderPtr->get());
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SimulinkConstant::SECTION_Object) ==
            0) {

      SimulinkObjectBuilder *objBuilderPtr = new SimulinkObjectBuilder();
      SimulinkErrorType subObjStat = objBuilderPtr->build(nodePtr_);
      if (subObjStat != SimulinkErrorType::SLX_OK) {
        slog_fatal("SimulinkObjectBuilder::build failed: fail to build "
                   "subobject elment");
        return subObjStat;
      }
      p_->add(objBuilderPtr->get());
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SimulinkConstant::SECTION_Array) ==
            0) {
      SimulinkArrayBuilder *arrBuilderPtr = new SimulinkArrayBuilder();
      SimulinkErrorType subArrStat = arrBuilderPtr->build(nodePtr_);
      if (subArrStat != SimulinkErrorType::SLX_OK) {
        slog_fatal("SimulinkObjectBuilder::build failed: fail to build "
                   "subArray elment");
        return subArrStat;
      }
      p_->add(arrBuilderPtr->get());
    }
  }
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkObject> SimulinkObjectBuilder::get() {
  return std::shared_ptr<SimulinkObject>(std::move(p_));
}

} // namespace slxio