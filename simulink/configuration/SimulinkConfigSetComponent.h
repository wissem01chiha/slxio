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

#include "CommonPCH.h"

namespace slxio
{

/**
 * A configuration component, such as Solver or ModelReference.
 * Component class names and string-valued parameters are retained so file data
 * that this library does not understand can still be round-tripped.
 */
class SimulinkConfigSetComponent final
{
public:
    using ParameterMap = std::map<std::string, std::string>;

    explicit SimulinkConfigSetComponent(std::string className = std::string());

    const std::string& GetComponentClassName() const noexcept;
    void SetClassName(std::string className);

    void SetParam(const std::string& name, std::string value);
    bool RemoveParam(const std::string& name);
    const std::string* FindParam(const std::string& name) const noexcept;
    std::string* FindParam(const std::string& name) noexcept;
    const ParameterMap& GetParams() const noexcept;

private:
    std::string m_className;
    ParameterMap m_parameters;
};

} // namespace slxio