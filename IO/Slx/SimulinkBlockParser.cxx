#include "SimulinkBlockParser.h"
#include "SimulinkArrayParser.h"
#include "SimulinkObjectParser.h"
#include "SimulinkParameterParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType SimulinkBlockParser::setInputData(const xmlNodePtr data)
{
  if (data == nullptr)
  {
    //l.log(Logger::V_ERROR, "SimulinkBlockParser:: null pointer received");
    return E_WRNG_FUNC_PARAM;
  }
  dataObject = data;
  return E_OK;
}

ReturnType SimulinkBlockParser::parse()
{
  IdType id = (IdType)0;
  std::string name;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next)
  {
    std::string attrName = reinterpret_cast<const char*>(attr->name);
    std::string attrValue =
      reinterpret_cast<const char*>(xmlNodeGetContent(attr->children));
    if (attrName == SlxParameter::PARAM_SID)
    {
      id = static_cast<IdType>(std::stoul(attrValue));
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
      //l.log(Logger::V_WARNING, "unexpected attribute '", attrName,
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
      ReturnType status = parser->setInputData(nodePtr_);
      if (status != E_OK)
      {
        //l.log(Logger::V_ERROR,
          "SimulinkBlockParser:: failed to set input data "
          "for SimulinkParameterParser");
        continue;
      }
      ReturnType parserStatus = parser->parse();
      if (parserStatus != E_OK)
      {
        //l.log(Logger::V_ERROR,
          "SimulinkBlockParser:: failed to parse "
          "SimulinkParameterParser");
        continue;
      }
      ptr->AddElement(parser->getOutputData());
    }
  }

  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END