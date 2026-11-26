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

#include "SimulinkObjectBuilder.h"
#include "SimulinkArrayBuilder.h"
#include "SimulinkParameterBuilder.h"
#include "SLXParameter.h"
#include "SLXSection.h"
#include <charconv>

namespace slxio
{
    namespace
    {
        ErrorCode ReadObjectNode(pugi::xml_node node,
                                 SimulinkObject& object,
                                 SimulinkParameterBuilder& parameterBuilder,
                                 SimulinkArrayBuilder& arrayBuilder)
        {
            if (!node || node.type() != pugi::node_element ||
                node.name() != std::string_view(SLXParameter::SECTION_Object))
            {
                return ErrorCode::InvalidArgument;
            }

            const pugi::xml_attribute idAttribute = node.attribute(SLXParameter::PARAM_ObjectID);
            if (idAttribute)
            {
                const std::string_view idText(idAttribute.value());
                unsigned long long parsedId = 0;
                const auto parseResult =
                    std::from_chars(idText.data(), idText.data() + idText.size(), parsedId);
                if (parseResult.ec != std::errc() ||
                    parseResult.ptr != idText.data() + idText.size())
                {
                    return ErrorCode::InvalidArgument;
                }
                object.SetIndex(std::to_string(parsedId));
            }

            object.SetName(node.attribute(SLXParameter::PARAM_PropName).as_string());
            object.SetClassName(node.attribute(SLXParameter::PARAM_ClassName).as_string());
            object.SetVersion(node.attribute(SLXParameter::PARAM_Version).as_string());

            for (pugi::xml_node child = node.first_child(); child; child = child.next_sibling())
            {
                if (child.type() != pugi::node_element)
                {
                    continue;
                }

                if (child.name() == std::string_view(SLXParameter::SECTION_Parameter))
                {
                    BuildResult parameterResult = parameterBuilder.Build(SLXSection(child));
                    if (parameterResult.m_error != ErrorCode::Ok)
                    {
                        return parameterResult.m_error;
                    }

                    const auto* parameterObject = dynamic_cast<const SimulinkParameterObject*>(
                        parameterResult.m_output.get());
                    if (parameterObject == nullptr || parameterObject->GetValue() == nullptr)
                    {
                        return ErrorCode::InvalidArgument;
                    }
                    object.SetParameter(parameterObject->GetName(), parameterObject->GetValue());
                    continue;
                }

                if (child.name() == std::string_view(SLXParameter::SECTION_Object))
                {
                    auto nestedObject = std::make_shared<SimulinkObject>();
                    const ErrorCode result =
                        ReadObjectNode(child, *nestedObject, parameterBuilder, arrayBuilder);
                    if (result != ErrorCode::Ok)
                    {
                        return result;
                    }
                    object.AddChild(nestedObject);
                }
                else if (child.name() == std::string_view(SLXParameter::SECTION_Array))
                {
                    BuildResult arrayResult = arrayBuilder.Build(SLXSection(child));
                    if (arrayResult.m_error != ErrorCode::Ok)
                    {
                        return arrayResult.m_error;
                    }

                    const auto* arrayObject =
                        dynamic_cast<const SimulinkArrayObject*>(arrayResult.m_output.get());
                    if (arrayObject == nullptr || arrayObject->GetValue() == nullptr)
                    {
                        return ErrorCode::InvalidArgument;
                    }
                    object.AddChild(arrayObject->GetValue());
                }
            }

            return ErrorCode::Ok;
        }
    } // namespace

    SimulinkObjectObject::SimulinkObjectObject(std::shared_ptr<SimulinkObject> value)
        : m_value(std::move(value))
    {
    }

    const std::shared_ptr<SimulinkObject>& SimulinkObjectObject::GetValue() const noexcept
    {
        return m_value;
    }

    BuildResult SimulinkObjectBuilder::Build(const IDataObject& input)
    {
        const auto* sectionInput = dynamic_cast<const SLXSection*>(&input);
        if (sectionInput == nullptr)
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }

        auto object = std::make_shared<SimulinkObject>();
        SimulinkParameterBuilder parameterBuilder;
        SimulinkArrayBuilder arrayBuilder;
        const ErrorCode result =
            ReadObjectNode(sectionInput->GetNode(), *object, parameterBuilder, arrayBuilder);
        if (result != ErrorCode::Ok)
        {
            return {result, nullptr};
        }

        return {ErrorCode::Ok, std::make_unique<SimulinkObjectObject>(std::move(object))};
    }
} // namespace slxio
