#include "SimulinkParameterParser.h"
#include "SimulinkDataTypeParser.h"
#include "SlxParameter.h"
#include <cstring>
#include <iostream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

HError SimulinkParameterParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    // l.log(
      Logger::V_ERROR, "SimulinkParameterParser:: null node pointer received");
      return E_PARAMETER_NULL_PTR;
  }

  if (data->type != XML_ELEMENT_NODE)
  {
    // l.log(
      Logger::V_ERROR, "SimulinkParameterParser:: non-element node received");
      return E_INVALID_ARGUMENT;
  }

  if (data->name == nullptr)
  {
    // l.log(
      Logger::V_ERROR, "SimulinkParameterParser:: invalid xmlNodePtr received");
      return E_INVALID_ARGUMENT;
  }

  this->dataObject = data;
  return E_OK;
}

HError SimulinkParameterParser::parse()
{

  Logger& l = Logger::GetInstance();

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

  HError dataTypeInputStatus = dataTypeParserPtr->setInputData(paramClassStr);

  if (dataTypeInputStatus != E_OK)
  {
    // l.log(Logger::V_ERROR,
      "SimulinkParameterParser:: failed to set input data for data "
      "type "
      "parser");
  }
  HError dataTypeParseStatus = dataTypeParserPtr->parse();
  if (dataTypeParseStatus != E_OK)
  {
    // l.log(Logger::V_ERROR,
      "SimulinkParameterParser:: failed to parse data type string");
  }
  std::shared_ptr<SimulinkDataType> dataTypePtr = dataTypeParserPtr->getOutputData();
  if (dataTypePtr != nullptr)
  {
    ptr->setDataType(*dataTypePtr);
  }

  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};
