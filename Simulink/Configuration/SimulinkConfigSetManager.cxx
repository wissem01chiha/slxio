#include "SimulinkConfigSetManager.h"
#include "SyslinkLogger.h"
#include <algorithm>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSetManager::SimulinkConfigSetManager() {}

SyslinkErrorCode
SimulinkConfigSetManager::add(std::shared_ptr<SimulinkConfigSet> cfg) {

  this->configurations.push_back(cfg);
  return SyslinkErrorCode::ErrorCode::SLX_OK;
}

SyslinkErrorCode
SimulinkConfigSetManager::remove(std::shared_ptr<SimulinkConfigSet> cfg) {

  const auto it = std::find(configurations.begin(), configurations.end(), cfg);
  if (it != configurations.end()) {
    configurations.erase(it);
  }
  return SyslinkErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkConfigSet>
SimulinkConfigSetManager::getActiveConfiguration() {

  for (const auto &cfg : configurations) {
    if (cfg->isActive()) {
      return cfg;
    }
  }
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END