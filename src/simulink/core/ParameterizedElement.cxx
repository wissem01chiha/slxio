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

#include "ParameterizedElement.h"
#include "SimulinkParameter.h"

namespace slxio
{

ParameterizedElement::ParameterizedElement() = default;

ParameterizedElement::ParameterizedElement(
    const ParameterizedElement& Other)
    : m_parameters(Other.m_parameters)
{
}

SimulinkParameterPtr
ParameterizedElement::GetDeclaredParameter(
    const std::string& Name) const
{
    auto It = m_parameters.find(Name);

    if (It == m_parameters.end())
    {
        return nullptr;
    }

    return It->second;
}

std::unordered_set<std::string>
ParameterizedElement::GetDeclaredParameterNames() const
{
    std::unordered_set<std::string> Names;

    for (const auto& [Name, Parameter] : m_parameters)
    {
        Names.insert(Name);
    }

    return Names;
}

std::string ParameterizedElement::String() const
{
    std::ostringstream Oss;

    Oss << "  Parameters:\n";

    for (const auto& [Name, Parameter] : m_parameters)
    {
        if (Parameter)
        {
            Oss << "    - " << Parameter->ToString() << '\n';
        }
    }

    return Oss.str();
}

SimulinkParameterPtr
ParameterizedElement::GetParameter(
    const std::string& Name) const
{
    auto Parameter = GetDeclaredParameter(Name);

    if (Parameter)
    {
        return Parameter;
    }

    return GetDefaultParameter(Name);
}

std::unordered_set<std::string>
ParameterizedElement::GetParameterNames() const
{
    auto Names = GetDefaultParameterNames();

    for (const auto& [Name, Parameter] : m_parameters)
    {
        Names.insert(Name);
    }

    return Names;
}

void ParameterizedElement::SetParameter(const std::string& Name,
    SimulinkParameterPtr Value)
{
    m_parameters[Name] = std::move(Value);
}

SimulinkParameterPtr
ParameterizedElement::GetDefaultParameter(
    const std::string& Name) const
{
    return nullptr;
}

std::unordered_set<std::string>
ParameterizedElement::GetDefaultParameterNames() const
{
    return {};
}

} // namespace slxio