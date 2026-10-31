#include "SimulinkConfigSetCollection.h"

#include <utility>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ConfigSetCollectionResult SimulinkConfigSetCollection::Add(SimulinkConfigSet configSet)
{
    if (configSet.GetName().empty())
    {
        return ConfigSetCollectionResult::InvalidName;
    }

    const std::string name = configSet.GetName();
    const auto inserted = m_configSets.emplace(name, std::move(configSet));
    return inserted.second ? ConfigSetCollectionResult::Success : ConfigSetCollectionResult::AlreadyExists;
}

ConfigSetCollectionResult SimulinkConfigSetCollection::Remove(const std::string& name)
{
    const auto found = m_configSets.find(name);
    if (found == m_configSets.end())
    {
        return ConfigSetCollectionResult::NotFound;
    }

    m_configSets.erase(found);
    if (m_activeName == name)
    {
        m_activeName.clear();
    }
    return ConfigSetCollectionResult::Success;
}

ConfigSetCollectionResult SimulinkConfigSetCollection::Rename(const std::string& name, std::string newName)
{
    if (newName.empty())
    {
        return ConfigSetCollectionResult::InvalidName;
    }

    const auto existing = m_configSets.find(name);
    if (existing == m_configSets.end())
    {
        return ConfigSetCollectionResult::NotFound;
    }
    if (name == newName)
    {
        return ConfigSetCollectionResult::Success;
    }
    if (m_configSets.find(newName) != m_configSets.end())
    {
        return ConfigSetCollectionResult::AlreadyExists;
    }

    SimulinkConfigSet configSet(existing->second);
    const bool wasActive = m_activeName == name;
    std::string renamedActive;
    if (wasActive)
    {
        renamedActive = newName;
    }
    configSet.SetName(newName);

    const auto inserted = m_configSets.emplace(newName, std::move(configSet));
    if (!inserted.second)
    {
        return ConfigSetCollectionResult::AlreadyExists;
    }
    m_configSets.erase(existing);
    if (wasActive)
    {
        m_activeName = std::move(renamedActive);
    }
    return ConfigSetCollectionResult::Success;
}

ConfigSetCollectionResult SimulinkConfigSetCollection::SetActive(const std::string& name)
{
    if (m_configSets.find(name) == m_configSets.end())
    {
        return ConfigSetCollectionResult::NotFound;
    }

    m_activeName = name;
    return ConfigSetCollectionResult::Success;
}

void SimulinkConfigSetCollection::ClearActive() noexcept
{
    m_activeName.clear();
}

SimulinkConfigSet* SimulinkConfigSetCollection::Find(const std::string& name) noexcept
{
    const auto found = m_configSets.find(name);
    return found == m_configSets.end() ? nullptr : &found->second;
}

const SimulinkConfigSet* SimulinkConfigSetCollection::Find(const std::string& name) const noexcept
{
    const auto found = m_configSets.find(name);
    return found == m_configSets.end() ? nullptr : &found->second;
}

SimulinkConfigSet* SimulinkConfigSetCollection::GetActive() noexcept
{
    return Find(m_activeName);
}

const SimulinkConfigSet* SimulinkConfigSetCollection::GetActive() const noexcept
{
    return Find(m_activeName);
}

const std::string& SimulinkConfigSetCollection::GetActiveName() const noexcept
{
    return m_activeName;
}

const SimulinkConfigSetCollection::ConfigSetMap& SimulinkConfigSetCollection::GetConfigSets() const noexcept
{
    return m_configSets;
}

bool SimulinkConfigSetCollection::Empty() const noexcept
{
    return m_configSets.empty();
}

std::size_t SimulinkConfigSetCollection::Size() const noexcept
{
    return m_configSets.size();
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
