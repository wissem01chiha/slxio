#include "SimulinkModel.h"
#include "SimulinkArray.h"
#include "SimulinkPort.h"
#include "SimulinkLine.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkModel::SimulinkModel()
  : l(Logger::getInstance())
{
  type = SimulinkModelType(SimulinkModelType::Model);
}

SimulinkModel::SimulinkModel(SimulinkModelType Type)
  : type(Type)
  , l(Logger::getInstance())
{
}

SimulinkModel::SimulinkModel(const SimulinkModel& other)
  : l(Logger::getInstance())
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

IdType SimulinkModel::GetElementId() const
{
  return id;
}

std::string SimulinkModel::ToString() const
{
  return std::string();
}

SimulinkBlock SimulinkModel::getBlock(uint32 blockIdx)
{

  for (const auto& blk : blocks)
  {
    if (blk->GetElementId() == blockIdx)
    {
      return *blk;
    }
  }
  // slog_warn("Block (IdType) %d not found in model (IdType) %s",
  // blockIdx,
  //           id);
  return SimulinkBlock();
}

SimulinkModelType SimulinkModel::getModelType()
{
  return type;
}

std::shared_ptr<SimulationSettings> SimulinkModel::getSimulationSettings()
{
  return simSet;
}

std::vector<std::shared_ptr<SimulinkParameter>> SimulinkModel::getParameters()
{
  return parameters;
}

uint32 SimulinkModel::getVersion()
{
  return version;
}

bool SimulinkModel::Contains(const IdType& id) const
{
  return false;
}

std::shared_ptr<ModelWorkspace> SimulinkModel::getWorkspace()
{
  return workspace;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END