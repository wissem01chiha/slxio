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
#include "ISimulinkBuilder.h"
#include "SimulinkParameter.h"

namespace slxio
{

    class SimulinkParameterObject final : public IDataObject
    {
    public:
        SimulinkParameterObject(std::string name, std::shared_ptr<SimulinkParameter> value);
        const std::string& GetName() const noexcept;
        const std::shared_ptr<SimulinkParameter>& GetValue() const noexcept;

    private:
        std::string m_name;
        std::shared_ptr<SimulinkParameter> m_value;
    };

    /**
     * @brief Builder for SimulinkParameter class
     * @example Definition of multiple parameter in slx file
     *  @code{.xml}
     * <P Name="LibraryLinkDisplay">disabled</P>
     * <P Name="ExtModeTrigLevel">0</P>
     * <P Name="Components" Class="double">[]</P>
     * <P Name="Extents" Class="double">[887.0, 452.0]</P>
     * <P Name="Visible" Class="logical">1</P>
     * <P Name="OverrideMode" Class="uint32">0U</P>
     * @endcode
     */
    class SimulinkParameterBuilder final : public ISimulinkBuilder
    {
    public:
        SimulinkParameterBuilder() = default;
        BuildResult Build(const IDataObject& input) override;
        ~SimulinkParameterBuilder() = default;
    };

}; // namespace slxio
