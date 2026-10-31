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
#include "SimulinkConfigSet.h"

#include <sstream>
#include <utility>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSet::SimulinkConfigSet(std::string name) : m_name(std::move(name))
{
}

const std::string& SimulinkConfigSet::GetName() const noexcept
{
    return m_name;
}

void SimulinkConfigSet::SetName(std::string name)
{
    m_name = std::move(name);
}

void SimulinkConfigSet::SetParam(const std::string& name, std::string value)
{
    m_parameters[name] = std::move(value);
}

bool SimulinkConfigSet::RemoveParam(const std::string& name)
{
    return m_parameters.erase(name) != 0;
}

const std::string* SimulinkConfigSet::FindParam(const std::string& name) const noexcept
{
    const auto parameter = m_parameters.find(name);
    return parameter == m_parameters.end() ? nullptr : &parameter->second;
}

const SimulinkConfigSet::ParameterMap& SimulinkConfigSet::GetParams() const noexcept
{
    return m_parameters;
}

SimulinkConfigSetComponent& SimulinkConfigSet::GetOrCreateComponent(const std::string& name, const std::string& className)
{
    auto& component = m_components[name];
    if (!className.empty())
    {
        component.SetClassName(className);
    }
    return component;
}

SimulinkConfigSetComponent* SimulinkConfigSet::FindComponent(const std::string& name) noexcept
{
    const auto component = m_components.find(name);
    return component == m_components.end() ? nullptr : &component->second;
}

const SimulinkConfigSetComponent* SimulinkConfigSet::FindComponent(const std::string& name) const noexcept
{
    const auto component = m_components.find(name);
    return component == m_components.end() ? nullptr : &component->second;
}

bool SimulinkConfigSet::RemoveComponent(const std::string& name)
{
    return m_components.erase(name) != 0;
}

const SimulinkConfigSet::ComponentMap& SimulinkConfigSet::GetComponents() const noexcept
{
    return m_components;
}

std::string SimulinkConfigSet::ToString() const
{
    std::ostringstream stream;
    stream << "SimulinkConfigSet: " << m_name << '\n';
    for (const auto& parameter : m_parameters)
    {
        stream << "  " << parameter.first << " = " << parameter.second << '\n';
    }
    for (const auto& component : m_components)
    {
        stream << "  [" << component.first;
        if (!component.second.GetComponentClassName().empty())
        {
            stream << " (" << component.second.GetComponentClassName() << ')';
        }
        stream << "]\n";
        for (const auto& parameter : component.second.GetParams())
        {
            stream << "    " << parameter.first << " = " << parameter.second << '\n';
        }
    }
    return stream.str();
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
