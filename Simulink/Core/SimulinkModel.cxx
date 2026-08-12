#include "SimulinkModel.h"
#include "Logger.h"
#include "SimulationSettings.h"
#include "SimulinkArray.h"
#include "SimulinkBlock.h"
#include "SimulinkLine.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"
#include "SimulinkPort.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkModel::SimulinkModel()
  : logger(Logger::GetInstance()),  ModelType(SimulinkModelType(SimulinkModelType::Model))
{
}

SimulinkModel* SimulinkModel::New() const
{
  return nullptr;
}

SimulinkModel::SimulinkModel(SimulinkModelType Type)
  : ModelType(Type)
  , logger(Logger::GetInstance())
{
}

SimulinkElementType SimulinkModel::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Model);
}

SId SimulinkModel::GetId() const
{
  return id;
}

std::string SimulinkModel::ToString() const
{
  return std::string();
}

std::shared_ptr<SimulinkBlock> SimulinkModel::GetBlock(SId blockIdx)
{

  for (const auto& blk : blocks) {
    if (blk->GetId() == blockIdx) {
      // return blk;
    }
  }
  // slog_warn("Block (SId) %d not found in model (SId) %s",
  // blockIdx,
  //           id);
  return std::make_shared<SimulinkBlock>();
}

SimulinkModelType SimulinkModel::GetModelType()
{
  return ModelType;
}

std::shared_ptr<SimulationSettings> SimulinkModel::GetSimulationSettings()
{
  return simSet;
}

UInt32 SimulinkModel::GetModelVersion()
{
  return version;
}

bool SimulinkModel::Contains(const SId& id) const
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
}; // namespace slxio
