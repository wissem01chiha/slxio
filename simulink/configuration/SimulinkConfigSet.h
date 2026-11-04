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

#include "SimulinkConfigSetComponent.h"
#include "CommonPCH.h"

namespace slxio
{

/**
 * A named, copyable collection of a Simulink model configuration settings.
 * Active-set state belongs to SimulinkConfigSetCollection.
 * Component/property values remain strings to preserve MATLAB expressions and
 * settings introduced by Simulink versions this library does not yet support.
 */
class SimulinkConfigSet final
{
public:
    using ParameterMap = std::map<std::string, std::string>;
    using ComponentMap = std::map<std::string, SimulinkConfigSetComponent>;

    explicit SimulinkConfigSet(std::string name = std::string());

    const std::string& GetName() const noexcept;

    void SetParam(const std::string& name, std::string value);
    bool RemoveParam(const std::string& name);
    const std::string* FindParam(const std::string& name) const noexcept;
    const ParameterMap& GetParams() const noexcept;

    SimulinkConfigSetComponent& GetOrCreateComponent(const std::string& name, const std::string& className = std::string());
    SimulinkConfigSetComponent* FindComponent(const std::string& name) noexcept;
    const SimulinkConfigSetComponent* FindComponent(const std::string& name) const noexcept;
    bool RemoveComponent(const std::string& name);
    const ComponentMap& GetComponents() const noexcept;

    std::string ToString() const;

private:
    friend class SimulinkConfigSetCollection;

    void SetName(std::string name);

    std::string m_name;
    ParameterMap m_parameters;
    ComponentMap m_components;
};

} // namespace slxio
