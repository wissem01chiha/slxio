#include "SimulinkArrayParser.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType SimulinkArrayParser::setInputData(const xmlNodePtr data)
{

  if (data == nullptr)
  {
    //l.log(Logger::V_ERROR, "SimulinkArrayParser:: null node pointer received");
    return E_FUNC_PARAM_NULL_PTR;
  }

  if (data->name == nullptr)
  {
    //l.log(Logger::V_ERROR, "SimulinkArrayParser:: invalid xmlNodePtr received");
    return E_WRNG_FUNC_PARAM;
  }

  dataObject = data;
  return E_OK;
}

ReturnType SimulinkArrayParser::parse()
{

  std::string name, dimension, type;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next)
  {
    std::string attrName = reinterpret_cast<const char*>(attr->name);
    std::string attrValue =
      reinterpret_cast<const char*>(xmlNodeGetContent(attr->children));

    if (attrName == SlxParameter::PARAM_PropName)
    {
      name = attrValue;
    }
    else if (attrName == SlxParameter::PARAM_Type)
    {
      type = attrValue;
    }
    else if (attrName == SlxParameter::PARAM_Dimension)
    {
      dimension = attrValue;
    }
  }

  ptr = std::make_shared<SimulinkArray>(type, name, dimension);

  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
    nodePtr_ = nodePtr_->next)
  {

    if (nodePtr_->type == XML_ELEMENT_NODE &&
      xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Object) == 0)
    {

      std::unique_ptr<SimulinkObjectParser> subObjParserPtr(
        new SimulinkObjectParser());
      ReturnType subInputStatus = subObjParserPtr->setInputData(nodePtr_);
      if (subInputStatus != E_OK)
      {
        return subInputStatus;
      }
      ReturnType subObjParseStatus = subObjParserPtr->parse();
      if (subObjParseStatus != E_OK)
      {
        //l.log(Logger::V_ERROR,
          "SimulinkArrayParser :: fail to build subObject element");
        return subObjParseStatus;
      }
      ptr->AddElement(subObjParserPtr->getOutputData());
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
      xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Array) == 0)
    {

      std::unique_ptr<SimulinkArrayParser> subArrParserPtr(
        new SimulinkArrayParser());
      ReturnType subInputStatus = subArrParserPtr->setInputData(nodePtr_);
      if (subInputStatus != E_OK)
      {
        return subInputStatus;
      }
      ReturnType subArrParseStatus = subArrParserPtr->parse();
      if (subArrParseStatus != E_OK)
      {
        //l.log(Logger::V_ERROR,
          "SimulinkArrayParser :: fail to build subArray element");
        return subArrParseStatus;
      }
      ptr->AddElement(subArrParserPtr->getOutputData());
    }
  }

  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
