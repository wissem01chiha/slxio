#include "SimulinkParameterParser.h"
#include "SimulinkDataTypeParser.h"
#include "SlxParameter.h"
#include <cstring>
#include <iostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkParameterParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    l.log(
      Logger::V_ERROR, "SimulinkParameterParser:: null node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (data->type != XML_ELEMENT_NODE)
  {
    l.log(
      Logger::V_ERROR, "SimulinkParameterParser:: non-element node received");
    return ErrorCode::SLX_EINVAR;
  }

  if (data->name == nullptr)
  {
    l.log(
      Logger::V_ERROR, "SimulinkParameterParser:: invalid xmlNodePtr received");
    return ErrorCode::SLX_EINVAR;
  }

  this->dataObject = data;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkParameterParser::parse()
{

  Logger& l = Logger::getInstance();

  const char* paramClassStr = nullptr;
  const char* paramNameStr = nullptr;
  const char* paramValStr = nullptr;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next)
  {
    const char* attrName = reinterpret_cast<const char*>(attr->name);

    xmlChar* content = xmlNodeGetContent(attr->children);
    if (!content)
      continue;

    if (strcmp(attrName, SlxParameter::PARAM_Class) == 0)
    {
      paramClassStr = strdup(reinterpret_cast<const char*>(content));
    }
    else if (strcmp(attrName, SlxParameter::PARAM_Name) == 0)
    {
      paramNameStr = strdup(reinterpret_cast<const char*>(content));
    }
    xmlFree(content);
  }

  xmlChar* nodeContent = xmlNodeGetContent(dataObject);
  if (nodeContent)
  {
    paramValStr = strdup(reinterpret_cast<const char*>(nodeContent));
  }

  ptr = std::make_shared<SimulinkParameter>(paramValStr ? paramValStr : "");
  if (paramNameStr)
  {
    ptr->setName(paramNameStr);
  }

  if (nodeContent)
  {
    xmlFree(nodeContent);
  }

  std::unique_ptr<SimulinkDataTypeParser> dataTypeParserPtr =
    std::make_unique<SimulinkDataTypeParser>();

  ErrorCode dataTypeInputStatus =
    dataTypeParserPtr->setInputData(paramClassStr);

  if (dataTypeInputStatus != ErrorCode::SLX_OK)
  {
    l.log(Logger::V_ERROR,
      "SimulinkParameterParser:: failed to set input data for data "
      "type "
      "parser");
  }
  ErrorCode dataTypeParseStatus = dataTypeParserPtr->parse();
  if (dataTypeParseStatus != ErrorCode::SLX_OK)
  {
    l.log(Logger::V_ERROR,
      "SimulinkParameterParser:: failed to parse data type string");
  }
  std::shared_ptr<SimulinkDataType> dataTypePtr =
    dataTypeParserPtr->getOutputData();
  if (dataTypePtr != nullptr)
  {
    ptr->setDataType(*dataTypePtr);
  }

  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
