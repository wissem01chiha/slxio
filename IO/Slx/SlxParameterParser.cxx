#include "SlxParameterParser.h"
#include "SlxConstant.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SlxParameterParser::SlxParameterParser() {
  ptr_ = std::make_shared<SimulinkParameter>();
}

ErrorCode SlxParameterParser::setInputData(xmlNodePtr data) {

  if (data == nullptr) {
    // slog_fatal(
    //     "SlxParameterParser::build failed: null node pointer received");
    // setError(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }
  return ErrorCode::SLX_OK;
}

ErrorCode SlxParameterParser::parse() {

  // std::string parameterClass, parameterName, parameterValue;

  // for (xmlAttrPtr attr = input_->properties; attr; attr = attr->next) {

  //   std::string name = reinterpret_cast<const char *>(attr->name);

  //   if (name == std::string(SlxConstant::PARAM_Class)) {
  //     std::string classValue =
  //         reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
  //     parameterClass = classValue;
  //   }

  //   if (name == "Name") {
  //     parameterName =
  //         reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
  //   }

  //   std::string value =
  //       reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
  //   std::string elementContent =
  //       reinterpret_cast<const char *>(xmlNodeGetContent(input_));

  //   parameterValue = elementContent;
  // }
  // ptr_ = std::make_unique<SimulinkParameter>(parameterName, parameterValue,
  //                                          parameterClass);
  return ErrorCode::SLX_OK;
}

std::string SlxParameterParser::toString() { return std::string(); }

std::shared_ptr<SimulinkParameter> SlxParameterParser::getData() {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END