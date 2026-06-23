#include "SimulinkConfigSet.h"
#include "ErrorCode.h"
#include "Logger.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"

namespace slxio
{
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
  , logger(Logger::GetInstance())
{
}

SimulinkConfigSet::SimulinkConfigSet(const SimulinkObject& obj)
  : object(std::make_shared<SimulinkObject>(obj))
  , logger(Logger::GetInstance())
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
    // logger.log(Logger::V_ERROR, "SimulinkConfigSet parameter name null");
    return "";
  }
  std::shared_ptr<SimulinkParameterBase> cfgParam = getParameterObject(std::string(name));
  return cfgParam->ToString().c_str();
}

std::shared_ptr<SimulinkParameterBase> SimulinkConfigSet::getParameterObject(const std::string& name)
{
  auto param = object->GetParameter(name);
  if (param)
  {
    return param;
  }
  // logger.log(Logger::V_WARNING, "SimulinkConfigSet Parameter ", name,
  //  " not found in configuration set.");
  return nullptr;
}

ReturnType SimulinkConfigSet::setParameter(const char* name, const char* value)
{
  auto param = object->GetParameter(std::string(name));
  if (param)
  {
    //param->SetValue(value);
    return E_OK;
  }
  // logger.log(Logger::V_WARNING, "SimulinkConfigSet Parameter ", name,
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
  return object->GetName();
}

std::shared_ptr<SimulinkObject> SimulinkConfigSet::getObject() const
{
  return object;
}

IdType SimulinkConfigSet::GetId() const
{
  return object->GetId();
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
    // logger.log(Logger::V_INFO, "Activating Simulink configuration set ",
    //   object->getName());
  }
  status = true;
}

void SimulinkConfigSet::deactivate()
{
  if (!status)
  {
    // logger.log(Logger::V_INFO, "Deactivating Simulink configuration set ",
    //  object->getName());
  }
  status = false;
}

bool SimulinkConfigSet::isActive() const
{
  return status;
}

SLXIO_ABI_NAMESPACE_END
};
