#include "SimulinkModel.h"
#include "SimulinkArray.h"
#include "SimulinkPort.h"
#include "SimulinkLine.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkModel::SimulinkModel()
  : logger(Logger::GetInstance())
{
  type = SimulinkModelType(SimulinkModelType::Model);
}

SimulinkModel::SimulinkModel(SimulinkModelType Type)
  : type(Type)
  , logger(Logger::GetInstance())
{
}

SimulinkModel::SimulinkModel(const SimulinkModel& other)
  : logger(Logger::GetInstance())
{

  this->lines = other.lines;
  this->id = other.id;
  this->simSet = other.simSet;
  this->version = other.version;
}

SimulinkElementType SimulinkModel::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Model);
}

slxIdType SimulinkModel::GetElementId() const
{
  return id;
}

std::string SimulinkModel::ToString() const
{
  return std::string();
}

SimulinkBlock SimulinkModel::GetBlock(slxIdType blockIdx)
{

  for (const auto& blk : blocks)
  {
    if (blk->GetElementId() == blockIdx)
    {
      return *blk;
    }
  }
  // slog_warn("Block (slxIdType) %d not found in model (slxIdType) %s",
  // blockIdx,
  //           id);
  return SimulinkBlock();
}

SimulinkModelType SimulinkModel::GetModelType()
{
  return type;
}

std::shared_ptr<SimulationSettings> SimulinkModel::GetSimulationSettings()
{
  return simSet;
}

std::vector<std::shared_ptr<SimulinkParameter>> SimulinkModel::GetParameters()
{
  return parameters;
}

UInt32 SimulinkModel::GetModelVersion()
{
  return version;
}

bool SimulinkModel::Contains(const slxIdType& id) const
{
  return false;
}

std::shared_ptr<ModelWorkspace> SimulinkModel::GetModelWorkspace()
{
  return workspace;
}

Logger& SimulinkModel::GetLogger()
{
  return logger;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END