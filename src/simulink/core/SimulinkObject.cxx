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

#include "SimulinkObject.h"
#include "SimulinkParameter.h"

namespace slxio
{

    SimulinkObject::SimulinkObject() : m_model(nullptr)
    {
    }

    std::string SimulinkObject::GetIndex() const
    {
        return m_index;
    }

    std::string SimulinkObject::GetName() const
    {
        return m_propName;
    }

    void SimulinkObject::SetName(const std::string& name)
    {
        if (!name.empty())
        {
            m_propName = name;
        }
    }

    std::string SimulinkObject::GetClassName() const
    {
        return m_className;
    }

    void SimulinkObject::SetClassName(const std::string& className)
    {
        m_className = className;
    }

    std::string SimulinkObject::GetVersion() const
    {
        return m_version;
    }

    void SimulinkObject::SetVersion(const std::string& version)
    {
        m_version = version;
    }

    std::string SimulinkObject::ToString() const
    {
        std::ostringstream oss;

        oss << "SimulinkObject {\n";
        oss << "  ID: " << m_index << "\n";
        oss << "  Version: " << m_version << "\n";
        oss << "  Name: " << m_propName << "\n";
        oss << "  Class: " << m_className << "\n";

        oss << "  Elements:\n";
        for (const auto& children : GetChildren())
        {
            oss << "    - " << children->ToString() << "\n";
        }

        oss << String() << "\n";
        oss << "}";

        return oss.str();
    }

    std::vector<std::shared_ptr<ISimulinkElement>> SimulinkObject::GetChildren() const
    {
        return m_children;
    }

    std::shared_ptr<SimulinkModel> SimulinkObject::GetModel() const
    {
        return m_model;
    }
}; // namespace slxio
