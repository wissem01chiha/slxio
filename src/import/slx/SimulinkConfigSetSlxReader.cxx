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

#include "SimulinkConfigSetSlxReader.h"
#include "SimulinkConfigSetComponentSlxReader.h"
#include "SimulinkConfigSet.h"
#include "SimulinkReaderResult.h"
#include "SLXParameter.h"

namespace slxio
{

    SimulinkReaderResult SimulinkConfigSetSlxReader::Read(SLXSection serializedData,
                                                          SimulinkConfigSet& object) const
    {
        const pugi::xml_node node = serializedData.GetNode();
        if (!node || node.type() != pugi::node_element)
        {
            return SimulinkReaderResult::InvalidInput;
        }

        pugi::xml_node configSetNode = node;
        if (node.name() == std::string_view(SLXParameter::SECTION_ConfigSet))
        {
            configSetNode = node.child(SLXParameter::SECTION_Object);
        }
        if (!configSetNode || configSetNode.type() != pugi::node_element ||
            configSetNode.name() != std::string_view(SLXParameter::SECTION_Object))
        {
            return SimulinkReaderResult::InvalidInput;
        }

        const pugi::xml_attribute classNameAttribute =
            configSetNode.attribute(SLXParameter::PARAM_ClassName);
        if (!classNameAttribute ||
            classNameAttribute.value() != std::string_view(SLXParameter::PARAM_ConfigSet))
        {
            return SimulinkReaderResult::InvalidInput;
        }

        pugi::xml_node componentsArray;
        std::string name;
        for (pugi::xml_node child = configSetNode.first_child(); child;
             child = child.next_sibling())
        {
            if (child.type() != pugi::node_element)
            {
                continue;
            }

            if (child.name() == std::string_view(SLXParameter::SECTION_Parameter))
            {
                const pugi::xml_attribute nameAttribute = child.attribute(SLXParameter::PARAM_Name);
                if (!nameAttribute || nameAttribute.value()[0] == '\0')
                {
                    return SimulinkReaderResult::InvalidInput;
                }

                if (nameAttribute.value() == std::string_view(SLXParameter::PARAM_Name))
                {
                    name = child.child_value();
                }
            }
            else if (child.name() == std::string_view(SLXParameter::SECTION_Array))
            {
                const pugi::xml_attribute propNameAttribute =
                    child.attribute(SLXParameter::PARAM_PropName);
                if (propNameAttribute &&
                    propNameAttribute.value() == std::string_view("Components"))
                {
                    if (componentsArray)
                    {
                        return SimulinkReaderResult::InvalidInput;
                    }
                    componentsArray = child;
                }
            }
        }

        if (!componentsArray)
        {
            return SimulinkReaderResult::InvalidInput;
        }

        SimulinkConfigSet parsed(std::move(name));
        for (pugi::xml_node child = configSetNode.first_child(); child;
             child = child.next_sibling())
        {
            if (child.type() != pugi::node_element ||
                child.name() != std::string_view(SLXParameter::SECTION_Parameter))
            {
                continue;
            }

            const pugi::xml_attribute nameAttribute = child.attribute(SLXParameter::PARAM_Name);
            parsed.SetParam(nameAttribute.value(), child.child_value());
        }

        const SimulinkConfigSetComponentSlxReader componentReader;
        for (pugi::xml_node child = componentsArray.first_child(); child;
             child = child.next_sibling())
        {
            if (child.type() != pugi::node_element)
            {
                continue;
            }
            if (child.name() != std::string_view(SLXParameter::SECTION_Object))
            {
                return SimulinkReaderResult::InvalidInput;
            }

            SimulinkConfigSetComponent component;
            const SimulinkReaderResult result = componentReader.Read(SLXSection(child), component);
            if (result != SimulinkReaderResult::Success)
            {
                return result;
            }

            const std::string& componentClassName = component.GetComponentClassName();
            parsed.GetOrCreateComponent(componentClassName, componentClassName) =
                std::move(component);
        }

        object = std::move(parsed);
        return SimulinkReaderResult::Success;
    }

}; // namespace slxio
