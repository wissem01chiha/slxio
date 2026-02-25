#include "SimulinkArrayParser.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkArrayParser::setInputData(const xmlNodePtr data)
{

  if (data == nullptr)
  {
    l.log(Logger::V_ERROR, "SimulinkArrayParser:: null node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (data->name == nullptr)
  {
    l.log(Logger::V_ERROR, "SimulinkArrayParser:: invalid xmlNodePtr received");
    return ErrorCode::SLX_EINVAR;
  }

  dataObject = data;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkArrayParser::parse()
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
      ErrorCode subInputStatus = subObjParserPtr->setInputData(nodePtr_);
      if (subInputStatus != ErrorCode::SLX_OK)
      {
        return subInputStatus;
      }
      ErrorCode subObjParseStatus = subObjParserPtr->parse();
      if (subObjParseStatus != ErrorCode::SLX_OK)
      {
        l.log(Logger::V_ERROR,
          "SimulinkArrayParser :: fail to build subObject element");
        return subObjParseStatus;
      }
      ptr->add(subObjParserPtr->getOutputData());
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
      xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Array) == 0)
    {

      std::unique_ptr<SimulinkArrayParser> subArrParserPtr(
        new SimulinkArrayParser());
      ErrorCode subInputStatus = subArrParserPtr->setInputData(nodePtr_);
      if (subInputStatus != ErrorCode::SLX_OK)
      {
        return subInputStatus;
      }
      ErrorCode subArrParseStatus = subArrParserPtr->parse();
      if (subArrParseStatus != ErrorCode::SLX_OK)
      {
        l.log(Logger::V_ERROR,
          "SimulinkArrayParser :: fail to build subArray element");
        return subArrParseStatus;
      }
      ptr->add(subArrParserPtr->getOutputData());
    }
  }

  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
