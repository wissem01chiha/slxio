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

#include "SimulinkArray.h"
#include "SimulinkParameter.h"
#include "SimulinkObject.h"
#include "SimulinkModel.h"

namespace slxio
{

    SimulinkArray::SimulinkArray()
        : m_index(""), m_type(""), m_name(""), m_dimension(""), m_model(nullptr) {};

    std::string SimulinkArray::ToString() const
    {
        std::ostringstream oss;

        oss << "SimulinkArray {\n";
        oss << "  Id: " << m_index << "\n";
        oss << "  Type: " << m_type << "\n";
        oss << "  Name: " << m_name << "\n";
        oss << "  Dimension: " << m_dimension << "\n";

        oss << "  Object Ids:\n";
        for (const auto& object : m_objects)
        {
            oss << "    - " << object << "\n";
        }

        oss << "  Arrays:\n";
        for (const auto& children : GetChildren())
        {
            oss << "    - " << children->ToString() << "\n";
        }

        oss << String() << "\n";
        oss << "}";

        return oss.str();
    }

    std::string SimulinkArray::GetName() const
    {
        return m_name;
    }

    void SimulinkArray::SetName(const std::string& name)
    {
        if (name.empty())
        {
            return;
        }
        else
        {
            m_name = name;
        }
        m_name = name;
    }

    void SimulinkArray::SetType(const std::string& type)
    {
        m_type = type;
    }

    std::string SimulinkArray::GetDimension() const
    {
        return m_dimension;
    }

    void SimulinkArray::SetDimension(const std::string& dimension)
    {
        m_dimension = dimension;
    }

    std::vector<std::shared_ptr<ISimulinkElement>> SimulinkArray::GetChildren() const
    {
        return m_children;
    }

    std::shared_ptr<SimulinkModel> SimulinkArray::GetModel() const
    {
        return m_model;
    }

}; // namespace slxio
