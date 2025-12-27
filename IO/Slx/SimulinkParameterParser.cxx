#include "SimulinkParameterParser.h"
#include "SlxParameter.h"
#include "LibXML2.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameterParser::SimulinkParameterParser() {
  ptr_ = std::make_shared<SimulinkParameter>();
}

ErrorCode SimulinkParameterParser::setInputData(void* data) {

  if (data == nullptr) {
    // slog_fatal(
    //     "SimulinkParameterParser::build failed: null node pointer received");
    // setError(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkElementBase>
SimulinkParameterParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkParameterParser::parse() {

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


SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END