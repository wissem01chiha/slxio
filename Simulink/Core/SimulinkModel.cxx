#include "SimulinkModel.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkModel::SimulinkModel() {}

SimulinkModel::SimulinkModel(SimulinkModelType Type) : type(Type) {}

SimulinkModel::SimulinkModel(const SimulinkModel &other) {

  this->lines = other.lines;
  //this->modelConfigSetMgr = other.modelConfigSetMgr;
  this->modelId = other.modelId;
  this->modelSimSet = other.modelSimSet;
  this->modelVersion = other.modelVersion;
}

SimulinkElementType SimulinkModel::getType() const {
  return SimulinkElementType::Model;
}

uint32 SimulinkModel::getID() const { return modelId; }

std::string SimulinkModel::toString() const { return std::string(); }

SimulinkBlock SimulinkModel::getBlock(uint32 blockIdx) {

  for (const auto &blk : blocks) {
    if (blk->getID() == blockIdx) {
      return *blk;
    }
  }
  // slog_warn("Block (Index) %d not found in model (Index) %s", blockIdx,
  //           modelId);
  return SimulinkBlock();
}

SimulinkModelType SimulinkModel::getModelType() { return type; }

// std::shared_ptr<SimulinkConfigSetManager>
// SimulinkModel::getConfigurationManager() {
//   return modelConfigSetMgr;
// }

std::shared_ptr<SimulationSettings> SimulinkModel::getSimulationSettings() {
  return modelSimSet;
}

std::vector<std::shared_ptr<SimulinkParameter>> SimulinkModel::getParameters() {
  return std::vector<std::shared_ptr<SimulinkParameter>>();
}

uint32 SimulinkModel::getVersion() { return modelVersion; }

bool SimulinkModel::contains(uint32 id) const { return bool(); }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END