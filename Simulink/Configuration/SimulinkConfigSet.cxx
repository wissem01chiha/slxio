#include "SimulinkConfigSet.h"
#include "Logger.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSet::SimulinkConfigSet() { this->status = false; }

std::string SimulinkConfigSet::toString() const {
  return this->object->toString();
}

// std::string SimulinkConfigSet::getParameter(std::string name) {

//   auto param = object->getParameter(name);
//   if (param) {
//     return param->getValue();
//   }
//   slog_warn("SimulinkConfigSet Parameter '%s' not found in configuration
//   set.",
//             name.c_str());
//   return std::string("");
// }

// SimulinkErrorType SimulinkConfigSet::setParameter(std::string name,
//                                                   std::string value) {

//   auto param = object->getParameter(name);
//   if (param) {
//     param->setValue(value);
//     return SimulinkErrorType::SLX_OK;
//   }

//   return SimulinkErrorType::SLX_ERR_ER_NOENT;
// }

// SimulinkErrorType SimulinkConfigSet::addParameter(std::string name,
//                                                   std::string value) {

//   std::shared_ptr<SimulinkParameter> paramPtr =
//       std::make_shared<SimulinkParameter>(name, value);
//   return object->add(paramPtr);
// }

std::string SimulinkConfigSet::getName() { return object->getName(); }

ErrorCode SimulinkConfigSet::activate() {
  if (status) {
    // slog_info("Activating Simulink configuration set %s", object->getName());
  }
  status = true;
  return ErrorCode::Ok;
}

ErrorCode SimulinkConfigSet::deactivate() {
  status = false;
  return ErrorCode::Ok;
}

bool SimulinkConfigSet::isActive() const { return status; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END