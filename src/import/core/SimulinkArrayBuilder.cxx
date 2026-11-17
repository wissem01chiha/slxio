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

#include "SimulinkArrayBuilder.h"
#include "SimulinkObject.h"
#include "SimulinkParameterBuilder.h"
#include "SLXParameter.h"
#include "SLXSection.h"

namespace slxio
{
    namespace
    {
        ErrorCode ReadArrayNode(pugi::xml_node node, SimulinkArray& array,
                                SimulinkParameterBuilder& parameterBuilder);

        ErrorCode ReadObjectNode(pugi::xml_node node, SimulinkObject& object,
                                 SimulinkParameterBuilder& parameterBuilder)
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

                    const auto* parameterObject =
                        dynamic_cast<const SimulinkParameterObject*>(parameterResult.m_output.get());
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
                        ReadObjectNode(child, *nestedObject, parameterBuilder);
                    if (result != ErrorCode::Ok)
                    {
                        return result;
                    }
                    object.AddChild(nestedObject);
                }
                else if (child.name() == std::string_view(SLXParameter::SECTION_Array))
                {
                    auto nestedArray = std::make_shared<SimulinkArray>();
                    const ErrorCode result =
                        ReadArrayNode(child, *nestedArray, parameterBuilder);
                    if (result != ErrorCode::Ok)
                    {
                        return result;
                    }
                    object.AddChild(nestedArray);
                }
            }

            return ErrorCode::Ok;
        }

        ErrorCode ReadArrayNode(pugi::xml_node node, SimulinkArray& array,
                                SimulinkParameterBuilder& parameterBuilder)
        {
            if (!node || node.type() != pugi::node_element ||
                node.name() != std::string_view(SLXParameter::SECTION_Array))
            {
                return ErrorCode::InvalidArgument;
            }

            array.SetType(node.attribute(SLXParameter::PARAM_Type).as_string());
            array.SetName(node.attribute(SLXParameter::PARAM_PropName).as_string());
            array.SetDimension(node.attribute(SLXParameter::PARAM_Dimension).as_string());

            for (pugi::xml_node child = node.first_child(); child; child = child.next_sibling())
            {
                if (child.type() != pugi::node_element)
                {
                    continue;
                }

                if (child.name() == std::string_view(SLXParameter::SECTION_Object))
                {
                    auto nestedObject = std::make_shared<SimulinkObject>();
                    const ErrorCode result =
                        ReadObjectNode(child, *nestedObject, parameterBuilder);
                    if (result != ErrorCode::Ok)
                    {
                        return result;
                    }
                    array.AddChild(nestedObject);
                }
                else if (child.name() == std::string_view(SLXParameter::SECTION_Array))
                {
                    auto nestedArray = std::make_shared<SimulinkArray>();
                    const ErrorCode result =
                        ReadArrayNode(child, *nestedArray, parameterBuilder);
                    if (result != ErrorCode::Ok)
                    {
                        return result;
                    }
                    array.AddChild(nestedArray);
                }
            }

            return ErrorCode::Ok;
        }
    } // namespace

    SimulinkArrayObject::SimulinkArrayObject(std::shared_ptr<SimulinkArray> value)
        : m_value(std::move(value))
    {
    }

    const std::shared_ptr<SimulinkArray>& SimulinkArrayObject::GetValue() const noexcept
    {
        return m_value;
    }

    BuildResult SimulinkArrayBuilder::Build(const IDataObject& input)
    {
        const auto* sectionInput = dynamic_cast<const SLXSection*>(&input);
        if (sectionInput == nullptr)
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }

        auto array = std::make_shared<SimulinkArray>();
        SimulinkParameterBuilder parameterBuilder;
        const ErrorCode result =
            ReadArrayNode(sectionInput->GetNode(), *array, parameterBuilder);
        if (result != ErrorCode::Ok)
        {
            return {result, nullptr};
        }

        return {ErrorCode::Ok, std::make_unique<SimulinkArrayObject>(std::move(array))};
    }
} // namespace slxio
