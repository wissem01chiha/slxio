#include "SimulinkObjectParser.h"
#include "SimulinkArrayParser.h"
#include "SimulinkParameterParser.h"
#include "SlxParameter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

HError SimulinkObjectParser::setInputData(const xmlNodePtr data) {

  if (data == nullptr) {
    // l.log(Logger::V_ERROR, "SimulinkObjectParser:: null node pointer
    // received");
    return E_PARAMETER_NULL_PTR;
  }

  dataObject = data;
  return E_OK;
}

HError SimulinkObjectParser::parse() {
  SId id = (SId)0;
  std::string name, className;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next) {

    std::string attrName = reinterpret_cast<const char *>(attr->name);
    std::string attrValue =
        reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
    if (attrName == SlxParameter::PARAM_ObjectID) {
      id = static_cast<SId>(std::stoul(attrValue));
    } else if (attrName == SlxParameter::PARAM_ClassName) {
      className = attrValue;
    } else if (attrName == SlxParameter::PARAM_PropName) {
      name = attrValue;
    }
  }
  ptr = std::make_shared<SimulinkObject>(id, name, className);

  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
       nodePtr_ = nodePtr_->next) {

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Parameter) ==
            0) {

      SimulinkParameterParser *paramParserPtr = new SimulinkParameterParser();
      HError subInputStatus = paramParserPtr->setInputData(nodePtr_);
      if (subInputStatus != E_OK) {
        return subInputStatus;
      }

      HError paramParseStatus = paramParserPtr->parse();
      if (paramParseStatus != E_OK) {
        // l.log(Logger::V_ERROR,
          "SimulinkObjectParser:: fail to build object Parameter");
          return paramParseStatus;
      }
      ptr->AddElement(paramParserPtr->getOutputData());
      delete paramParserPtr;
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Object) == 0) {

      SimulinkObjectParser *subObjParserPtr = new SimulinkObjectParser();
      HError subObjInputStatus = subObjParserPtr->setInputData(nodePtr_);
      if (subObjInputStatus != E_OK) {
        return subObjInputStatus;
      }

      HError subObjStat = subObjParserPtr->parse();
      if (subObjStat != E_OK) {
        // l.log(Logger::V_ERROR,
          "SimulinkObjectParser:: fail to build subobject element");
          return subObjStat;
      }
      ptr->AddElement(subObjParserPtr->getOutputData());
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Array) == 0) {
      SimulinkArrayParser *subArrParserPtr = new SimulinkArrayParser();
      HError subArrInputStatus = subArrParserPtr->setInputData(nodePtr_);
      if (subArrInputStatus != E_OK) {
        return subArrInputStatus;
      }

      HError subArrParseStat = subArrParserPtr->parse();
      if (subArrParseStat != E_OK) {
        // l.log(Logger::V_ERROR,
          "SimulinkObjectParser:: fail to build subArray element");
          return subArrParseStat;
      }
      ptr->AddElement(subArrParserPtr->getOutputData());
      delete subArrParserPtr;
    }
  }
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
