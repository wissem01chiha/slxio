#include "SimulinkConfigSet.h"
#include "slxLogger.h"
#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSet::SimulinkConfigSet() {
  this->object = std::make_shared<SimulinkObject>();
  this->status = (bool)0;
}

SimulinkConfigSet::SimulinkConfigSet(std::shared_ptr<SimulinkObject> objPtr) {
  if (!objPtr) {
    // slog_fatal("SimulinkConfigSet: received null SimulinkObject");
    return;
  }
  this->object = objPtr;
  this->status = false;
}

SimulinkConfigSet::SimulinkConfigSet(SimulinkElementBase &element) {
  if (element.getType() == SimulinkElementType::Object) {
    SimulinkObject *obj = static_cast<SimulinkObject *>(&element);
    this->object = std::make_shared<SimulinkObject>(*obj);
  }
  this->status = (bool)0;
}

SimulinkElementType SimulinkConfigSet::getType() const {
  return SimulinkElementType::ConfigSet;
}

std::string SimulinkConfigSet::toString() const { return object->toString(); }

bool SimulinkConfigSet::contains(uint32 id) const {
  return object->contains(id);
}

SimulinkErrorType
SimulinkConfigSet::remove(std::shared_ptr<SimulinkElementBase> element) {
  if (element == nullptr) {
    slog_warn("SimulinkConfigSet::Cannot remove a null Simulink element.");
    return SimulinkErrorType::SLX_ERR_NULL_PTR;
  }
  return object->remove(element);
}

SimulinkErrorType
SimulinkConfigSet::add(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    slog_warn("SimulinkConfigSet::Cannot add a null Simulink element.");
    return SimulinkErrorType::SLX_ERR_NULL_PTR;
  }
  return object->add(element);
}

uint32 SimulinkConfigSet::getID() const { return object->getID(); }

std::string SimulinkConfigSet::getParameter(std::string name) {

  auto param = object->getParameter(name);
  if (param) {
    return param->getValue();
  }
  slog_warn("SimulinkConfigSet Parameter '%s' not found in configuration set.",
            name.c_str());
  return std::string("");
}

SimulinkErrorType SimulinkConfigSet::setParameter(std::string name,
                                                  std::string value) {

  auto param = object->getParameter(name);
  if (param) {
    param->setValue(value);
    return SimulinkErrorType::SLX_OK;
  }

  return SimulinkErrorType::SLX_ERR_ER_NOENT;
}

SimulinkErrorType SimulinkConfigSet::addParameter(std::string name,
                                                  std::string value) {

  std::shared_ptr<SimulinkParameter> paramPtr =
      std::make_shared<SimulinkParameter>(name, value);
  return object->add(paramPtr);
}

std::string SimulinkConfigSet::getName() { return object->getName(); }

void SimulinkConfigSet::activate() {
  if (status == 0) {
    slog_info("Activating Simulink configuration set %s", object->getName());
  }
  status = 1;
}

void SimulinkConfigSet::desactivate() { status = 0; }

bool SimulinkConfigSet::isActive() { return status; }

SLXIO_ABI_NAMESPACE_END

SLXIO_NAMESPACE_END