#include "SimulinkConfigSetManager.h"
#include "SimulinkConfigSet.h"
#include <algorithm>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSetManager::SimulinkConfigSetManager()
  : l(Logger::GetInstance())
{
  cfgs = std::vector<std::shared_ptr<SimulinkConfigSet>>();
}

ReturnType SimulinkConfigSetManager::AddElement(
  std::shared_ptr<SimulinkConfigSet> cfg)
{
  if (cfg == nullptr)
  {
    // l.log(Logger::V_ERROR,
    //  "SimulinkConfigSetManager:: Cannot add a null configuration set.");
    return E_PARAMETER_NULL_PTR;
  }
  cfgs.push_back(cfg);
  return E_OK;
}

ReturnType SimulinkConfigSetManager::RemoveElement(
  std::shared_ptr<SimulinkConfigSet> cfg)
{

  if (cfg == nullptr)
  {
    // l.log(Logger::V_ERROR,
    //"SimulinkConfigSetManager:: Cannot remove a null configuration set.");
    return E_PARAMETER_NULL_PTR;
  }
  auto it = std::find(cfgs.begin(), cfgs.end(), cfg);
  if (it != cfgs.end())
  {
    cfgs.erase(it);
    return E_OK;
  }
  return E_OK;
}

std::shared_ptr<SimulinkConfigSet>
SimulinkConfigSetManager::getActiveConfiguration()
{

  for (const auto& cfg : cfgs)
  {
    if (cfg->isActive())
    {
      return cfg;
    }
  }
  return nullptr;
}

bool SimulinkConfigSetManager::hasConfigurationSet(
  const std::shared_ptr<SimulinkConfigSet>& cfg) const
{
  return std::find(cfgs.begin(), cfgs.end(), cfg) != cfgs.end();
}

SLXIO_ABI_NAMESPACE_END
};
