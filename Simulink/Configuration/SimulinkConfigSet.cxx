#include "SimulinkConfigSet.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"
#include "Logger.h"
#include "ErrorCode.h"

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
  , l(Logger::GetInstance())
{
}

SimulinkConfigSet::SimulinkConfigSet(const SimulinkObject& obj)
  : object(std::make_shared<SimulinkObject>(obj))
  , l(Logger::GetInstance())
{
}


std::string SimulinkConfigSet::ToString() const
{
  return object->ToString();
}

std::shared_ptr<SimulinkSolver> SimulinkConfigSet::getSolver()
{
  return solver;
}

const char* SimulinkConfigSet::getParameter(const char* name)
{

  if (name == nullptr)
  {
    //l.log(Logger::V_ERROR, "SimulinkConfigSet parameter name null");
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
  //l.log(Logger::V_WARNING, "SimulinkConfigSet Parameter ", name,
   // " not found in configuration set.");
  return nullptr;
}

ReturnType SimulinkConfigSet::setParameter(const char* name, const char* value)
{
  auto param = object->getParameter(std::string(name));
  if (param)
  {
    param->setValue(value);
    return E_OK;
  }
  //l.log(Logger::V_WARNING, "SimulinkConfigSet Parameter ", name,
    //" not found in configuration set. Cannot set value.");
  return E_OK;
}

ReturnType SimulinkConfigSet::copy()
{
  return E_NOT_IMPLEMENTED;
}

ReturnType SimulinkConfigSet::clone()
{
  return E_NOT_IMPLEMENTED;
}

ReturnType SimulinkConfigSet::RemoveElement()
{
  return E_NOT_IMPLEMENTED;
}

ReturnType SimulinkConfigSet::attach(SimulinkModel& model)
{
  return E_NOT_IMPLEMENTED;
}

ReturnType SimulinkConfigSet::detach(SimulinkModel& model)
{
  return E_NOT_IMPLEMENTED;
}

std::string SimulinkConfigSet::getName()
{
  return object->getName();
}

std::shared_ptr<SimulinkObject> SimulinkConfigSet::getObject() const
{
  return object;
}

IdType SimulinkConfigSet::GetElementId() const
{
  return object->GetElementId();
}

ReturnType SimulinkConfigSet::saveToFile(const char* path)
{
  return E_NOT_IMPLEMENTED;
}

ReturnType SimulinkConfigSet::loadFromFile(const char* path)
{
  return E_NOT_IMPLEMENTED;
}

SimulinkConfigSet SimulinkConfigSet::fromFile(const char* path)
{
  return SimulinkConfigSet();
}

void SimulinkConfigSet::activate()
{
  if (status)
  {
    //l.log(Logger::V_INFO, "Activating Simulink configuration set ",
    //  object->getName());
  }
  status = true;
}

void SimulinkConfigSet::deactivate()
{
  if (!status)
  {
    //l.log(Logger::V_INFO, "Deactivating Simulink configuration set ",
     // object->getName());
  }
  status = false;
}

bool SimulinkConfigSet::isActive() const
{
  return status;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
