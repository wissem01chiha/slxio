#include "SimulinkConfigSet.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSet::SimulinkConfigSet()
  : status(false)
  , solver(nullptr)
  , optimization(nullptr)
  , sfSim(nullptr)
  , debugging(nullptr)
  , hardware(nullptr)
  , modelReference(nullptr)
  , rtw(nullptr)
  , l(Logger::getInstance())
{
}

SimulinkConfigSet::SimulinkConfigSet(const SimulinkObject& obj)
  : object(std::make_shared<SimulinkObject>(obj))
  , l(Logger::getInstance())
{
}

std::string SimulinkConfigSet::toString() const
{
  return object->toString();
}

std::shared_ptr<SimulinkSolver> SimulinkConfigSet::getSolver()
{
  return solver;
}

const char* SimulinkConfigSet::getParameter(const char* name)
{

  if (name == nullptr)
  {
    l.log(Logger::V_ERROR, "SimulinkConfigSet parameter name null");
    return "";
  }
  std::shared_ptr<SimulinkParameter> cfgParam =
    getParameterObject(std::string(name));
  return cfgParam->getValue();
}

std::shared_ptr<SimulinkParameter> SimulinkConfigSet::getParameterObject(
  const std::string& name)
{
  auto param = object->getParameter(name);
  if (param)
  {
    return param;
  }
  l.log(Logger::V_WARNING, "SimulinkConfigSet Parameter ", name,
    " not found in configuration set.");
  return nullptr;
}

ErrorCode SimulinkConfigSet::setParameter(const char* name, const char* value)
{
  auto param = object->getParameter(std::string(name));
  if (param)
  {
    param->setValue(value);
    return ErrorCode::SLX_OK;
  }
  l.log(Logger::V_WARNING, "SimulinkConfigSet Parameter ", name,
    " not found in configuration set. Cannot set value.");
  return ErrorCode::SLX_ENOENT;
}

ErrorCode SimulinkConfigSet::copy()
{
  return ErrorCode::SLX_ENOTIMPL;
}

ErrorCode SimulinkConfigSet::clone()
{
  return ErrorCode::SLX_ENOTIMPL;
}

ErrorCode SimulinkConfigSet::remove()
{
  return ErrorCode::SLX_ENOTIMPL;
}

ErrorCode SimulinkConfigSet::attach(SimulinkModel& model)
{
  return ErrorCode::SLX_ENOTIMPL;
}

ErrorCode SimulinkConfigSet::detach(SimulinkModel& model)
{
  return ErrorCode::SLX_ENOTIMPL;
}

std::string SimulinkConfigSet::getName()
{
  return object->getName();
}

std::shared_ptr<SimulinkObject> SimulinkConfigSet::getObject() const
{
  return object;
}

Index SimulinkConfigSet::getID() const
{
  return object->getID();
}

ErrorCode SimulinkConfigSet::saveToFile(const char* path)
{
  return ErrorCode::SLX_ENOTIMPL;
}

ErrorCode SimulinkConfigSet::loadFromFile(const char* path)
{
  return ErrorCode::SLX_ENOTIMPL;
}

SimulinkConfigSet SimulinkConfigSet::fromFile(const char* path)
{
  return SimulinkConfigSet();
}

void SimulinkConfigSet::activate()
{
  if (status)
  {
    l.log(Logger::V_INFO, "Activating Simulink configuration set ",
      object->getName());
  }
  status = true;
}

void SimulinkConfigSet::deactivate()
{
  if (!status)
  {
    l.log(Logger::V_INFO, "Deactivating Simulink configuration set ",
      object->getName());
  }
  status = false;
}

bool SimulinkConfigSet::isActive() const
{
  return status;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END