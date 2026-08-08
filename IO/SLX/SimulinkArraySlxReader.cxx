#include "SimulinkArrayParser.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

HError SimulinkArrayParser::setInputData(const xmlNodePtr data)
{

  if (data == nullptr) {
    // l.log(Logger::V_ERROR, "SimulinkArrayParser:: null node pointer
    // received");
    return E_PARAMETER_NULL_PTR;
  }

  if (data->name == nullptr) {
    // l.log(Logger::V_ERROR, "SimulinkArrayParser:: invalid xmlNodePtr
    // received");
    return E_INVALID_ARGUMENT;
  }

  dataObject = data;
  return E_OK;
}

HError SimulinkArrayParser::parse()
{

  std::string name, dimension, type;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next) {
    std::string attrName = reinterpret_cast<const char*>(attr->name);
    std::string attrValue =
      reinterpret_cast<const char*>(xmlNodeGetContent(attr->children));

    if (attrName == SlxParameter::PARAM_PropName) {
      name = attrValue;
    } else if (attrName == SlxParameter::PARAM_Type) {
      type = attrValue;
    } else if (attrName == SlxParameter::PARAM_Dimension) {
      dimension = attrValue;
    }
  }

  ptr = std::make_shared<SimulinkArray>(type, name, dimension);

  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
       nodePtr_ = nodePtr_->next) {

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Object) == 0) {

      std::unique_ptr<SimulinkObjectParser> subObjParserPtr(
        new SimulinkObjectParser());
      HError subInputStatus = subObjParserPtr->setInputData(nodePtr_);
      if (subInputStatus != E_OK) {
        return subInputStatus;
      }
      HError subObjParseStatus = subObjParserPtr->parse();
      if (subObjParseStatus != E_OK) {
        // l.log(Logger::V_ERROR,
          "SimulinkArrayParser :: fail to build subObject element");
          return subObjParseStatus;
      }
      ptr->AddElement(subObjParserPtr->getOutputData());
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Array) == 0) {

      std::unique_ptr<SimulinkArrayParser> subArrParserPtr(
        new SimulinkArrayParser());
      HError subInputStatus = subArrParserPtr->setInputData(nodePtr_);
      if (subInputStatus != E_OK) {
        return subInputStatus;
      }
      HError subArrParseStatus = subArrParserPtr->parse();
      if (subArrParseStatus != E_OK) {
        // l.log(Logger::V_ERROR,
          "SimulinkArrayParser :: fail to build subArray element");
          return subArrParseStatus;
      }
      ptr->AddElement(subArrParserPtr->getOutputData());
    }
  }

  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
