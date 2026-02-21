#include "SimulinkBlockParser.h"
#include "Logger.h"
#include "SimulinkArrayParser.h"
#include "SimulinkObjectParser.h"
#include "SimulinkParameterParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlockParser::SimulinkBlockParser() : dataObject(nullptr) {
  ptr_ = std::make_shared<SimulinkBlock>();
}

ErrorCode SimulinkBlockParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();
  if (data == nullptr) {
    l.log(Logger::V_ERROR, "SimulinkBlockParser:: null pointer received");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkBlockParser::parse() {

  Logger &l = Logger::getInstance();

  Index id = (Index)0;
  std::string name;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next) {
    std::string attrName = reinterpret_cast<const char *>(attr->name);
    std::string attrValue =
        reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
    if (attrName == SlxParameter::PARAM_SID) {
      id = static_cast<Index>(std::stoul(attrValue));
    } else if (attrName == SlxParameter::PARAM_Name) {
      name = attrValue;
    } else if (attrName == SlxParameter::PARAM_BlockType) {
      SimulinkBlockType::Type blockType =
          SimulinkBlockType::toType(attrValue.c_str());
      ptr_->setBlockType(blockType);
    } else {
      l.log(Logger::V_WARNING, "unexpected attribute '", attrName,
            "' found in simulink block node.");
    }
  }
  ptr_->setID(id);
  ptr_->setName(name);

  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
       nodePtr_ = nodePtr_->next) {

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Parameter) ==
            0) {
      SimulinkParameterParser parser;
      parser.setInputData(nodePtr_);
      parser.parse();
      ptr_->add(parser.getDataObject());
    }
  }

  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkBlock> SimulinkBlockParser::getDataObject() const {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END