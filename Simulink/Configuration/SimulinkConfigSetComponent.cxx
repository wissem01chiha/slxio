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

#include "SimulinkConfigSetComponent.h"

#include <utility>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSetComponent::SimulinkConfigSetComponent(std::string className)
    : m_className(std::move(className))
{
}

const std::string& SimulinkConfigSetComponent::GetComponentClassName() const noexcept
{
    return m_className;
}

void SimulinkConfigSetComponent::SetClassName(std::string className)
{
    m_className = std::move(className);
}

void SimulinkConfigSetComponent::SetParam(const std::string& name, std::string value)
{
    m_parameters[name] = std::move(value);
}

bool SimulinkConfigSetComponent::RemoveParam(const std::string& name)
{
    return m_parameters.erase(name) != 0;
}

const std::string* SimulinkConfigSetComponent::FindParam(const std::string& name) const noexcept
{
    const auto parameter = m_parameters.find(name);
    return parameter == m_parameters.end() ? nullptr : &parameter->second;
}

std::string* SimulinkConfigSetComponent::FindParam(const std::string& name) noexcept
{
    const auto parameter = m_parameters.find(name);
    return parameter == m_parameters.end() ? nullptr : &parameter->second;
}

const SimulinkConfigSetComponent::ParameterMap& SimulinkConfigSetComponent::GetParams() const noexcept
{
    return m_parameters;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio