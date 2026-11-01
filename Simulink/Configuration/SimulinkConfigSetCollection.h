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

#pragma once

#include "SimulinkConfigSet.h"

namespace slxio
{

enum class ConfigSetCollectionResult
{
    Success,
    InvalidName,
    AlreadyExists,
    NotFound
};

/**
 * Owns model configuration sets and the model active-set selection.
 * The collection maintains the name index when a set is renamed. Removing the
 * active set clears selection.
 */
class SimulinkConfigSetCollection final
{
public:
    using ConfigSetMap = std::map<std::string, SimulinkConfigSet>;

    ConfigSetCollectionResult Add(SimulinkConfigSet configSet);
    ConfigSetCollectionResult Remove(const std::string& name);
    ConfigSetCollectionResult Rename(const std::string& name, std::string newName);
    ConfigSetCollectionResult SetActive(const std::string& name);
    void ClearActive() noexcept;

    SimulinkConfigSet* Find(const std::string& name) noexcept;
    const SimulinkConfigSet* Find(const std::string& name) const noexcept;
    SimulinkConfigSet* GetActive() noexcept;
    const SimulinkConfigSet* GetActive() const noexcept;

    const std::string& GetActiveName() const noexcept;
    const ConfigSetMap& GetConfigSets() const noexcept;
    bool Empty() const noexcept;
    std::size_t Size() const noexcept;

private:
    ConfigSetMap m_configSets;
    std::string m_activeName;
};

} // namespace slxio