/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "SimulinkConfigSetManager.h"
#include "SimulinkConfigSet.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSetManager::SimulinkConfigSetManager() : m_configSet(std::vector<std::shared_ptr<SimulinkConfigSet>>())
{
}

std::shared_ptr<SimulinkConfigSet> SimulinkConfigSetManager::GetActiveConfiguration() const
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

bool SimulinkConfigSetManager::HasConfiguration(const std::shared_ptr<SimulinkConfigSet>& cfg) const
{
    return std::find(m_configSet.begin(), m_configSet.end(), cfg) != m_configSet.end();
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
