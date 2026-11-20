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

#include "SimulinkConfigSetComponentBuilder.h"
#include "SimulinkObjectBuilder.h"
#include "SimulinkParameter.h"
#include "SLXParameter.h"
#include "SLXSection.h"

namespace slxio
{
    SimulinkConfigSetComponentObject::SimulinkConfigSetComponentObject()
    {
    }

    SimulinkConfigSetComponentObject::SimulinkConfigSetComponentObject(
        SimulinkConfigSetComponent value)
        : m_value(std::move(value))
    {
    }

    SimulinkConfigSetComponent SimulinkConfigSetComponentObject::GetValue() const noexcept
    {
        return m_value;
    }

    BuildResult SimulinkConfigSetComponentBuilder::Build(const IDataObject& input)
    {
        const auto* sectionInput = dynamic_cast<const SLXSection*>(&input);
        if (sectionInput == nullptr)
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }
        SimulinkConfigSetComponent component;
        const pugi::xml_node node = sectionInput->GetNode();
        if (!node || node.type() != pugi::node_element ||
            node.name() != std::string_view(SLXParameter::SECTION_Object))
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }
        SimulinkObjectBuilder objBuilder;
        const auto objBuildResult = objBuilder.Build(input);
        if (objBuildResult.m_error != ErrorCode::Ok)
        {
            return {objBuildResult.m_error, nullptr};
        }
        const auto* output =
            dynamic_cast<const SimulinkObjectObject*>(objBuildResult.m_output.get());
        if (output == nullptr || output->GetValue() == nullptr)
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }

        const SimulinkObject& object = *output->GetValue();
        component.SetClassName(object.GetClassName());

        for (const std::string& name : object.GetDeclaredParameterNames())
        {
            const auto parameter = object.GetDeclaredParameter(name);
            if (parameter == nullptr)
            {
                return {ErrorCode::InvalidArgument, nullptr};
            }
            component.SetParam(name, parameter->GetValue());
        }

        return {ErrorCode::Ok,
                std::make_unique<SimulinkConfigSetComponentObject>(std::move(component))};
    }

} // namespace slxio
