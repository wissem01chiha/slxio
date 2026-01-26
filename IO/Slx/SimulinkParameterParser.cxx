#include "SimulinkParameterParser.h"
#include "SlxParameter.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameterParser::SimulinkParameterParser() : dataObject(nullptr) {
  ptr_ = std::make_shared<SimulinkParameter>();
}

ErrorCode SimulinkParameterParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();

  if (data == nullptr) {
    l.log(Logger::V_ERROR,
          "SimulinkParameterParser:: null node pointer received");
    buffer_.push_back(ErrorCode::SLX_ENULLPTR);
    return ErrorCode::SLX_ENULLPTR;
  }

  if (data->type != XML_ELEMENT_NODE) {
    l.log(Logger::V_ERROR,
          "SimulinkParameterParser:: non-element node received");
    buffer_.push_back(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }

  if (data->name == nullptr) {
    l.log(Logger::V_ERROR,
          "SimulinkParameterParser:: invalid xmlNodePtr received");
    buffer_.push_back(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }

  this->dataObject = data;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkParameter>
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

    xmlChar *content = xmlNodeGetContent(attr->children);
    if (!content)
      continue;

    if (strcmp(attrName, SlxParameter::PARAM_Class) == 0) {
      paramClassStr = strdup(reinterpret_cast<const char *>(content));
    } else if (strcmp(attrName, SlxParameter::PARAM_Name) == 0) {
      paramNameStr = strdup(reinterpret_cast<const char *>(content));
    }
    xmlFree(content);
  }

  xmlChar *nodeContent = xmlNodeGetContent(dataObject);
  if (nodeContent) {
    paramValStr = strdup(reinterpret_cast<const char *>(nodeContent));
  }

  ptr_ = std::make_shared<SimulinkParameter>(paramValStr ? paramValStr : "");
  if (paramNameStr) {
    ptr_->setName(paramNameStr);
  }

  if (nodeContent) {
    xmlFree(nodeContent);
  }
  ptr_->setDataType(getDataType(paramClassStr, l));

  return ErrorCode::SLX_OK;
}

SimulinkDataType SimulinkParameterParser::getDataType(const char *paramClassStr,
                                                      Logger &l) {
  if (!paramClassStr) {
    l.log(Logger::V_WARNING,
          "Null parameter class string; defaulting to 'Auto'.");
    return SimulinkDataType::Auto;
  }

  if (strcmp(paramClassStr, "double") == 0) {
    return SimulinkDataType::Double;
  } else if (strcmp(paramClassStr, "logical") == 0) {
    return SimulinkDataType::Boolean;
  } else if (strcmp(paramClassStr, "uint32") == 0) {
    return SimulinkDataType::UInt32;
  } else if (strcmp(paramClassStr, "int16") == 0) {
    return SimulinkDataType::Int16;
  } else if (strcmp(paramClassStr, "uint64") == 0) {
    return SimulinkDataType::UInt64;
  } else if (strcmp(paramClassStr, "string") == 0) {
    return SimulinkDataType::String;
  } else if (strcmp(paramClassStr, "int8") == 0) {
    return SimulinkDataType::Int8;
  }

  l.log(Logger::V_WARNING, "Unrecognized parameter data type: ", paramClassStr,
        " defaulting to 'Auto'.");
  return SimulinkDataType::Auto;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END