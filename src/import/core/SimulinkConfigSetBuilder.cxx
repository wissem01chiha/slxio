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

#include "SimulinkConfigSetBuilder.h"
#include "SimulinkArrayBuilder.h"
#include "SLXSection.h"
#include "SLXParameter.h"

namespace slxio
{

    SimulinkConfigSetObject::SimulinkConfigSetObject()
    {
    }

    SimulinkConfigSetObject::SimulinkConfigSetObject(SimulinkConfigSet value)
    {
    }

    SimulinkConfigSet SimulinkConfigSetObject::GetValue() const noexcept
    {
        return SimulinkConfigSet();
    }

    BuildResult SimulinkConfigSetBuilder::Build(const IDataObject& input)
    {
        const auto* sectionInput = dynamic_cast<const SLXSection*>(&input);
        if (sectionInput == nullptr)
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }
        const pugi::xml_node node = sectionInput->GetNode();
        pugi::xml_node configSetNode = node;
        if (!node || node.type() != pugi::node_element)
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }
        if (node.name() == std::string_view(SLXParameter::SECTION_ConfigSet))
        {
            configSetNode = node.child(SLXParameter::SECTION_Object);
        }
        if (!configSetNode || configSetNode.type() != pugi::node_element ||
            configSetNode.name() != std::string_view(SLXParameter::SECTION_Object))
        {
            return {ErrorCode::InvalidArgument, nullptr};
        }
        return {ErrorCode::Ok, nullptr};
    }
}; 