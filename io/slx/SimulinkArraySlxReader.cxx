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

#include "SimulinkArraySlxReader.h"
#include "SimulinkArray.h"
#include "SimulinkDataType.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"
#include "SimulinkReaderResult.h"
#include "SLXParameter.h"

#include <charconv>
#include <limits>
#include <memory>
#include <stdexcept>
#include <string_view>
#include <system_error>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

namespace
{

SimulinkReaderResult ReadArrayNode(pugi::xml_node node, SimulinkArray& array);

SimulinkReaderResult ReadObjectNode(pugi::xml_node node, SimulinkObject& object)
{
    const pugi::xml_attribute idAttribute = node.attribute(SLXParameter::PARAM_ObjectID);
    if (idAttribute)
    {
        const std::string_view idText(idAttribute.value());
        unsigned long long parsedId = 0;
        const auto parseResult =
            std::from_chars(idText.data(), idText.data() + idText.size(), parsedId);
        if (parseResult.ec != std::errc() || parseResult.ptr != idText.data() + idText.size() ||
            parsedId > std::numeric_limits<SId>::max())
        {
            return SimulinkReaderResult::InvalidInput;
        }
        object.SetId(static_cast<SId>(parsedId));
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
            auto parameter = std::make_shared<SimulinkParameter>(child.child_value());
            const char* name = child.attribute(SLXParameter::PARAM_Name).as_string();
            parameter->SetName(name);

            const char* dataType = child.attribute(SLXParameter::PARAM_Class).as_string();
            if (*dataType != '\0')
            {
                try
                {
                    parameter->SetSimulinkDataType(FromString(dataType));
                }
                catch (const std::invalid_argument&)
                {
                    // Unknown Simulink types remain represented as Auto.
                }
            }
            object.AddParam(name, parameter);
            continue;
        }

        std::shared_ptr<ISimulinkElement> element;
        if (child.name() == std::string_view(SLXParameter::SECTION_Object))
        {
            auto nestedObject = std::make_shared<SimulinkObject>();
            const SimulinkReaderResult result = ReadObjectNode(child, *nestedObject);
            if (result != SimulinkReaderResult::Success)
            {
                return result;
            }
            element = std::move(nestedObject);
        }
        else if (child.name() == std::string_view(SLXParameter::SECTION_Array))
        {
            auto nestedArray = std::make_shared<SimulinkArray>();
            const SimulinkReaderResult result = ReadArrayNode(child, *nestedArray);
            if (result != SimulinkReaderResult::Success)
            {
                return result;
            }
            element = std::move(nestedArray);
        }

        if (element && object.Insert(element) != E_OK)
        {
            return SimulinkReaderResult::Failure;
        }
    }

    return SimulinkReaderResult::Success;
}

SimulinkReaderResult ReadArrayNode(pugi::xml_node node, SimulinkArray& array)
{
    if (!node || node.type() != pugi::node_element ||
        node.name() != std::string_view(SLXParameter::SECTION_Array))
    {
        return SimulinkReaderResult::InvalidInput;
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

        std::shared_ptr<ISimulinkElement> element;
        if (child.name() == std::string_view(SLXParameter::SECTION_Object))
        {
            auto nestedObject = std::make_shared<SimulinkObject>();
            const SimulinkReaderResult result = ReadObjectNode(child, *nestedObject);
            if (result != SimulinkReaderResult::Success)
            {
                return result;
            }
            element = std::move(nestedObject);
        }
        else if (child.name() == std::string_view(SLXParameter::SECTION_Array))
        {
            auto nestedArray = std::make_shared<SimulinkArray>();
            const SimulinkReaderResult result = ReadArrayNode(child, *nestedArray);
            if (result != SimulinkReaderResult::Success)
            {
                return result;
            }
            element = std::move(nestedArray);
        }

        if (element && array.Insert(element) != E_OK)
        {
            return SimulinkReaderResult::Failure;
        }
    }

    return SimulinkReaderResult::Success;
}

} // namespace

SimulinkReaderResult SimulinkArraySlxReader::Read(SLXSection serializedData,
                                                  SimulinkArray& object) const
{
    return ReadArrayNode(serializedData.GetNode(), object);
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
