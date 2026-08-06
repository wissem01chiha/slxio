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

SimulinkConfigSet::SimulinkConfigSet(const std::shared_ptr<SimulinkObject> obj)
  : object(obj)
  , logger(Logger::GetInstance())
{
}

std::string SimulinkConfigSet::ToString() const
{
  return object->ToString();
}

std::shared_ptr<SimulinkSolver> SimulinkConfigSet::GetSolver()
{
  return solver;
}

const char* SimulinkConfigSet::GetParameter(const char* name)
{

  if (name == nullptr)
  {
    // logger.log(Logger::V_ERROR, "SimulinkConfigSet parameter name null");
    return "";
  }
  std::shared_ptr<SimulinkParameterBase> cfgParam = GetParameterObject(std::string(name));
  return cfgParam->ToString().c_str();
}

std::shared_ptr<SimulinkParameterBase> SimulinkConfigSet::GetParameterObject(
  const std::string& name)
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

HError SimulinkConfigSet::SetParameter(const char* name, const char* value)
{
  auto param = object->GetParameter(std::string(name));
  if (param)
  {
    // param->SetValue(value);
    return E_OK;
  }
  // logger.log(Logger::V_WARNING, "SimulinkConfigSet Parameter ", name,
  //" not found in configuration set. Cannot set value.");
  return E_OK;
}

HError SimulinkConfigSet::Copy()
{
  return E_NOT_IMPLEMENTED;
}

HError SimulinkConfigSet::Clone()
{
  return E_NOT_IMPLEMENTED;
}

HError SimulinkConfigSet::Clear()
{
  return E_NOT_IMPLEMENTED;
}

HError SimulinkConfigSet::Attach(SimulinkModel& model)
{
  return E_NOT_IMPLEMENTED;
}

HError SimulinkConfigSet::Detach(SimulinkModel& model)
{
  return E_NOT_IMPLEMENTED;
}

std::string SimulinkConfigSet::GetName()
{
  return object->GetName();
}

std::shared_ptr<SimulinkObject> SimulinkConfigSet::GetObject() const
{
  return object;
}

IdType SimulinkConfigSet::GetId() const
{
  return object->GetId();
}

HError SimulinkConfigSet::SaveToFile(const char* path)
{
  return E_NOT_IMPLEMENTED;
}

HError SimulinkConfigSet::FromFile(const char* path)
{
  return E_OK;
}

void SimulinkConfigSet::Activate()
{
  if (status)
  {
    // logger.log(Logger::V_INFO, "Activating Simulink configuration set ",
    //   object->getName());
  }
  status = true;
}

void SimulinkConfigSet::Deactivate()
{
  if (!status)
  {
    // logger.log(Logger::V_INFO, "Deactivating Simulink configuration set ",
    //  object->getName());
  }
  status = false;
}

bool SimulinkConfigSet::IsActive() const
{
  return status;
}

SLXIO_ABI_NAMESPACE_END
};
