/*
 * Copyright 2025-2026 Wissem Chiha
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

#include "SimulinkParameterBuilder.h"
#include "SimulinkDataTypeBuilder.h"
#include "SLXParameter.h"
#include "SLXSection.h"
#include "StringDataObject.h"

namespace slxio
{

    SimulinkParameterObject::SimulinkParameterObject(std::string name,
                                                     std::shared_ptr<SimulinkParameter> value)
        : m_name(std::move(name)), m_value(std::move(value))
    {
    }

    const std::string& SimulinkParameterObject::GetName() const noexcept
    {
        return m_name;
    }

    const std::shared_ptr<SimulinkParameter>& SimulinkParameterObject::GetValue() const noexcept
    {
        return m_value;
    }

    BuildResult SimulinkParameterBuilder::Build(const IDataObject& input)
    {
        const auto* sectionInput = dynamic_cast<const SLXSection*>(&input);
        if (sectionInput == nullptr)
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }

        const pugi::xml_node node = sectionInput->GetNode();
        if (!node || node.type() != pugi::node_element ||
            node.name() != std::string_view(SLXParameter::SECTION_Parameter))
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }

        SimulinkDataType dataType = SimulinkDataType::Auto;
        const char* className = node.attribute(SLXParameter::PARAM_Class).as_string();
        if (*className != '\0')
        {
            StringDataObject dataTypeInput(className);
            SimulinkDataTypeBuilder dataTypeBuilder;
            BuildResult dataTypeResult = dataTypeBuilder.Build(dataTypeInput);
            if (dataTypeResult.m_error != ErrorCode::Ok)
            {
                return {dataTypeResult.m_error, nullptr};
            }

            const auto* dataTypeObject =
                dynamic_cast<const SimulinkDataTypeObject*>(dataTypeResult.m_output.get());
            if (dataTypeObject == nullptr)
            {
                return {ErrorCode::InvalidArgument, nullptr};
            }
            dataType = dataTypeObject->GetValue();
        }

        auto parameter = std::make_shared<SimulinkParameter>(node.child_value());
        parameter->SetSimulinkDataType(dataType);

        return {ErrorCode::Ok,
                std::make_unique<SimulinkParameterObject>(
                    node.attribute(SLXParameter::PARAM_Name).as_string(), std::move(parameter))};
    }

}; // namespace slxio
