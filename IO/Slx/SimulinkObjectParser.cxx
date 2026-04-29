#include "SimulinkObjectParser.h"
#include "SimulinkArrayParser.h"
#include "SimulinkParameterParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType SimulinkObjectParser::setInputData(const xmlNodePtr data)
{

  if (data == nullptr)
  {
    //l.log(Logger::V_ERROR, "SimulinkObjectParser:: null node pointer received");
    return E_FUNC_PARAM_NULL_PTR;
  }

  dataObject = data;
  return E_OK;
}

ReturnType SimulinkObjectParser::parse()
{
  IdType id = (IdType)0;
  std::string name, className;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next)
  {

    std::string attrName = reinterpret_cast<const char*>(attr->name);
    std::string attrValue =
      reinterpret_cast<const char*>(xmlNodeGetContent(attr->children));
    if (attrName == SlxParameter::PARAM_ObjectID)
    {
      id = static_cast<IdType>(std::stoul(attrValue));
    }
    else if (attrName == SlxParameter::PARAM_ClassName)
    {
      className = attrValue;
    }
    else if (attrName == SlxParameter::PARAM_PropName)
    {
      name = attrValue;
    }
  }
  ptr = std::make_shared<SimulinkObject>(id, name, className);

  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
    nodePtr_ = nodePtr_->next)
  {

    if (nodePtr_->type == XML_ELEMENT_NODE &&
      xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Parameter) == 0)
    {

      SimulinkParameterParser* paramParserPtr = new SimulinkParameterParser();
      ReturnType subInputStatus = paramParserPtr->setInputData(nodePtr_);
      if (subInputStatus != E_OK)
      {
        return subInputStatus;
      }

      ReturnType paramParseStatus = paramParserPtr->parse();
      if (paramParseStatus != E_OK)
      {
        //l.log(Logger::V_ERROR,
          "SimulinkObjectParser:: fail to build object Parameter");
        return paramParseStatus;
      }
      ptr->AddElement(paramParserPtr->getOutputData());
      delete paramParserPtr;
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
      xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Object) == 0)
    {

      SimulinkObjectParser* subObjParserPtr = new SimulinkObjectParser();
      ReturnType subObjInputStatus = subObjParserPtr->setInputData(nodePtr_);
      if (subObjInputStatus != E_OK)
      {
        return subObjInputStatus;
      }

      ReturnType subObjStat = subObjParserPtr->parse();
      if (subObjStat != E_OK)
      {
        //l.log(Logger::V_ERROR,
          "SimulinkObjectParser:: fail to build subobject element");
        return subObjStat;
      }
      ptr->AddElement(subObjParserPtr->getOutputData());
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
      xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Array) == 0)
    {
      SimulinkArrayParser* subArrParserPtr = new SimulinkArrayParser();
      ReturnType subArrInputStatus = subArrParserPtr->setInputData(nodePtr_);
      if (subArrInputStatus != E_OK)
      {
        return subArrInputStatus;
      }

      ReturnType subArrParseStat = subArrParserPtr->parse();
      if (subArrParseStat != E_OK)
      {
        //l.log(Logger::V_ERROR,
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
SLXIO_NAMESPACE_END
