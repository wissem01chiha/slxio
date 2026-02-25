#include "SimulinkModel.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkModel::SimulinkModel() {}

SimulinkModel::SimulinkModel(SimulinkModelType Type)
  : modelType(Type)
{
}

SimulinkModel::SimulinkModel(const SimulinkModel& other)
{

  this->modelLines = other.modelLines;
  this->modelId = other.modelId;
  this->modelSimSet = other.modelSimSet;
  this->modelVersion = other.modelVersion;
}

SimulinkElementType SimulinkModel::getType() const
{
  return SimulinkElementType::Model;
}

Index SimulinkModel::getID() const
{
  return modelId;
}

std::string SimulinkModel::toString() const
{
  return std::string();
}

SimulinkBlock SimulinkModel::getBlock(uint32 blockIdx)
{

  for (const auto& blk : modelBlocks)
  {
    if (blk->getID() == blockIdx)
    {
      return *blk;
    }
  }
  // slog_warn("Block (Index) %d not found in model (Index) %s",
  // blockIdx,
  //           modelId);
  return SimulinkBlock();
}

SimulinkModelType SimulinkModel::getModelType()
{
  return modelType;
}

std::shared_ptr<SimulationSettings> SimulinkModel::getSimulationSettings()
{
  return modelSimSet;
}

std::vector<std::shared_ptr<SimulinkParameter>> SimulinkModel::getParameters()
{
  return modelParameters;
}

uint32 SimulinkModel::getVersion()
{
  return modelVersion;
}

bool SimulinkModel::contains(const Index& id) const
{
  return true;
}

std::shared_ptr<ModelWorkspace> SimulinkModel::getWorkspace()
{
  return modelWorkspace;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END