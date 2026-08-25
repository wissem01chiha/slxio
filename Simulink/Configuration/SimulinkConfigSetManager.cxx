#include "SimulinkConfigSetManager.h"
#include "SimulinkConfigSet.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSetManager::SimulinkConfigSetManager()
    : m_configSet(std::vector<std::shared_ptr<SimulinkConfigSet>>())
{
}

std::shared_ptr<SimulinkConfigSet>
SimulinkConfigSetManager::GetActiveConfiguration() const
{

    for (const auto& cfg : m_configSet)
    {
        if (cfg->IsActive())
        {
            return cfg;
        }
    }
    return nullptr;
}

bool SimulinkConfigSetManager::HasConfiguration(
    const std::shared_ptr<SimulinkConfigSet>& cfg) const
{
    return std::find(m_configSet.begin(), m_configSet.end(), cfg) !=
           m_configSet.end();
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
