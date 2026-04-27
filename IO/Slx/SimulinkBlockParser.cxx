#include "SimulinkBlockParser.h"
#include "SimulinkArrayParser.h"
#include "SimulinkObjectParser.h"
#include "SimulinkParameterParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkBlockParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    l.log(Logger::V_ERROR, "SimulinkBlockParser:: null pointer received");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::E_OK;
}

ErrorCode SimulinkBlockParser::parse()
{
  Index id = (Index)0;
  std::string name;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next)
  {
    std::string attrName = reinterpret_cast<const char*>(attr->name);
    std::string attrValue =
      reinterpret_cast<const char*>(xmlNodeGetContent(attr->children));
    if (attrName == SlxParameter::PARAM_SID)
    {
      id = static_cast<Index>(std::stoul(attrValue));
    }
    else if (attrName == SlxParameter::PARAM_Name)
    {
      name = attrValue;
    }
    else if (attrName == SlxParameter::PARAM_BlockType)
    {
      SimulinkBlockType::Type blockType =
        SimulinkBlockType::toType(attrValue.c_str());
      ptr->setBlockType(blockType);
    }
    else
    {
      l.log(Logger::V_WARNING, "unexpected attribute '", attrName,
        "' found in simulink block node.");
    }
  }
  ptr->setID(id);
  ptr->setName(name);

  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
    nodePtr_ = nodePtr_->next)
  {

    if (nodePtr_->type == XML_ELEMENT_NODE &&
      xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Parameter) == 0)
    {
      std::unique_ptr<SimulinkParameterParser> parser(
        new SimulinkParameterParser());
      ErrorCode status = parser->setInputData(nodePtr_);
      if (status != ErrorCode::E_OK)
      {
        l.log(Logger::V_ERROR,
          "SimulinkBlockParser:: failed to set input data "
          "for SimulinkParameterParser");
        continue;
      }
      ErrorCode parserStatus = parser->parse();
      if (parserStatus != ErrorCode::E_OK)
      {
        l.log(Logger::V_ERROR,
          "SimulinkBlockParser:: failed to parse "
          "SimulinkParameterParser");
        continue;
      }
      ptr->add(parser->getOutputData());
    }
  }

  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END