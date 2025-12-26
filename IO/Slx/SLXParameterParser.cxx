#include "SLXParameterParser.h"
#include "SLXConstant.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SLXParameterParser::SLXParameterParser() {
  ptr_ = std::make_shared<SimulinkParameter>();
}

Parser::ErrorCode SLXParameterParser::setInputData(xmlNodePtr data) {

  if (data == nullptr) {
    // slog_fatal(
    //     "SLXParameterParser::build failed: null node pointer received");
    setError(SLX_EINVAR);
    return SLX_EINVAR;
  }
  return SLX_OK;
}

Parser::ErrorCode SLXParameterParser::parse() {

  // std::string parameterClass, parameterName, parameterValue;

  // for (xmlAttrPtr attr = input_->properties; attr; attr = attr->next) {

  //   std::string name = reinterpret_cast<const char *>(attr->name);

  //   if (name == std::string(SLXConstant::PARAM_Class)) {
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
  return SLX_OK;
}

std::string SLXParameterParser::toString() { return std::string(); }

std::shared_ptr<SimulinkParameter> SLXParameterParser::getData() {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END