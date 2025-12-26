#include "SimulinkConfigSet.h"
#include "Logger.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSet::SimulinkConfigSet() : status(false) {}

ErrorCode SimulinkConfigSet::saveToFile(const char *path) {
  return ErrorCode::SLX_OK;
}

std::string SimulinkConfigSet::toString() const {
  return this->object->toString();
}

std::shared_ptr<SimulinkSolver> SimulinkConfigSet::getSolver() {
  return solver;
}

const char *SimulinkConfigSet::getParameter(const char *name) {

  if (name == nullptr) {
    Logger::getInstance().log(Logger::V_ERROR,
                              "SimulinkConfigSet parameter name null");
    return "";
  }
  std::shared_ptr<SimulinkParameter> cfgParam =
      getParameterObject(std::string(name));
  return cfgParam->getValue();
}

std::shared_ptr<SimulinkParameter>
SimulinkConfigSet::getParameterObject(const std::string &name) {

  auto param = object->getParameter(name);
  if (param) {
    return param;
  }
  Logger::getInstance().log(Logger::V_WARNING, "SimulinkConfigSet Parameter ",
                            name, " not found in configuration set.");
  return nullptr;
}

ErrorCode SimulinkConfigSet::setParameter(const char *name, const char *value) {

  auto param = object->getParameter(std::string(name));
  if (param) {
    // param->setValue(value); -> not implnetd yet
    return ErrorCode::SLX_OK;
  }

  return ErrorCode::SLX_ENOENT;
}

ErrorCode SimulinkConfigSet::copy() { return ErrorCode::SLX_OK; }

ErrorCode SimulinkConfigSet::clone() { return ErrorCode::SLX_OK; }

ErrorCode SimulinkConfigSet::remove() { return ErrorCode::SLX_OK; }

ErrorCode SimulinkConfigSet::attach(SimulinkModel &model) {
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkConfigSet::detach(SimulinkModel &model) {
  return ErrorCode::SLX_OK;
}

std::string SimulinkConfigSet::getName() { return object->getName(); }

ErrorCode SimulinkConfigSet::loadFromFile(const char *path) {
  return ErrorCode::SLX_OK;
}

SimulinkConfigSet SimulinkConfigSet::fromFile(const char *path) {
  return SimulinkConfigSet();
}

ErrorCode SimulinkConfigSet::activate() {
  if (status) {
    Logger::getInstance().log(Logger::V_INFO,
                              "Activating Simulink configuration set ",
                              object->getName());
  }
  status = true;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkConfigSet::deactivate() {
  status = false;
  return ErrorCode::SLX_OK;
}

bool SimulinkConfigSet::isActive() const { return status; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END