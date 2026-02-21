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
    }
  }
  ptr_->set(id);
  ptr_->setName(name);

  return ErrorCode::SLX_OK; 
}

std::shared_ptr<SimulinkBlock> SimulinkBlockParser::getDataObject() const {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END