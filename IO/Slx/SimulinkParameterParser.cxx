#include "SimulinkParameterParser.h"
#include "Logger.h"
#include "SimulinkDataType.h"
#include "SlxParameter.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameterParser::SimulinkParameterParser() {
  ptr_ = std::make_shared<SimulinkParameter>();
  dataObject = nullptr;
}

ErrorCode SimulinkParameterParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();
  if (data == nullptr) {
    l.log(Logger::V_ERROR,
          "SimulinkParameterParser:: null node pointer received");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (data->name == nullptr) {
    l.log(Logger::V_ERROR,
          "SimulinkParameterParser:: invalid xmlNodePtr received");
    return ErrorCode::SLX_EINVAR;
  }

  this->dataObject = data;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkElementBase>
SimulinkParameterParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkParameterParser::parse() {

  Logger &l = Logger::getInstance();
  const char *paramClassStr = nullptr;
  const char *paramNameStr = nullptr;
  const char *paramValStr = nullptr;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next) {

    const char *attrName = reinterpret_cast<const char *>(attr->name);

    if (strcmp(attrName, SlxParameter::PARAM_Class) == 0) {
      paramClassStr =
          reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
    }

    if (strcmp(attrName, SlxParameter::PARAM_Name) == 0) {
      paramNameStr =
          reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
    }
    paramValStr =
        reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
    paramValStr = reinterpret_cast<const char *>(xmlNodeGetContent(dataObject));
  }

  ptr_ = std::make_shared<SimulinkParameter>(paramValStr);
  ptr_->setName(paramNameStr);

  if (paramClassStr!=nullptr && strcmp(paramClassStr, "double") == 0) {
    ptr_->setDataType(SimulinkDataType::Double);
  } else if (paramClassStr && strcmp(paramClassStr, "logical") == 0) {
    ptr_->setDataType(SimulinkDataType::Boolean);
  } else if (paramClassStr && strcmp(paramClassStr, "uint32") == 0) {
    ptr_->setDataType(SimulinkDataType::UInt32);
  } else if (paramClassStr && strcmp(paramClassStr, "int16") == 0) {
    ptr_->setDataType(SimulinkDataType::Int16);
  } else if (paramClassStr && strcmp(paramClassStr, "uint64") == 0) {
    ptr_->setDataType(SimulinkDataType::UInt64);
  } else if (paramClassStr && strcmp(paramClassStr, "string") == 0) {
    ptr_->setDataType(SimulinkDataType::String);
  } else if (paramClassStr && strcmp(paramClassStr, "int8") == 0) {
    ptr_->setDataType(SimulinkDataType::Int8);
  } else {
    l.log(Logger::V_WARNING,
          "Unrecognized parameter data type; defaulting to 'Auto'.");
    ptr_->setDataType(SimulinkDataType::Auto);
  }

  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END