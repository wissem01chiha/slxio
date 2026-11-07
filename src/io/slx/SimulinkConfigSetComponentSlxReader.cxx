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

#include "SimulinkConfigSetComponentSlxReader.h"
#include "SLXParameter.h"
#include "SimulinkReaderResult.h"

#include <string_view>
#include <utility>

namespace slxio
{

    SimulinkReaderResult
    SimulinkConfigSetComponentSlxReader::Read(
        SLXSection serializedData, SimulinkConfigSetComponent &object) const
    {
        const pugi::xml_node node = serializedData.GetNode();
        if ( !node || node.type() != pugi::node_element ||
             node.name() != std::string_view(SLXParameter::SECTION_Object) ) {
            return SimulinkReaderResult::InvalidInput;
        }

        const pugi::xml_attribute classNameAttribute =
            node.attribute(SLXParameter::PARAM_ClassName);
        if ( !classNameAttribute || classNameAttribute.value()[0] == '\0' ) {
            return SimulinkReaderResult::InvalidInput;
        }

        SimulinkConfigSetComponent parsed(classNameAttribute.value());
        for ( pugi::xml_node child = node.first_child(); child; child = child.next_sibling() ) {
            if ( child.type() != pugi::node_element ||
                 child.name() != std::string_view(SLXParameter::SECTION_Parameter) ) {
                continue;
            }

            const pugi::xml_attribute nameAttribute = child.attribute(SLXParameter::PARAM_Name);
            if ( !nameAttribute || nameAttribute.value()[0] == '\0' ) {
                return SimulinkReaderResult::InvalidInput;
            }
            parsed.SetParam(nameAttribute.value(), child.child_value());
        }

        object = std::move(parsed);
        return SimulinkReaderResult::Success;
    }

}  // namespace slxio
