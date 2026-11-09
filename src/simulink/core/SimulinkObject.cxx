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

namespace slxio
{

    SimulinkObject::~SimulinkObject() = default;

    ISimulinkElement* SimulinkObject::New() const
    {
        return new SimulinkObject(); // NOSONAR
    }

    HError SimulinkObject::AcceptInsert(ISimulinkElement& parent)
    {
        auto* object = dynamic_cast<SimulinkObject*>(&parent);
        if (object != nullptr)
        {
            object->Insert(shared_from_this());
        }
        else
        {
            return E_OPERATION_NOT_SUPPORTED;
        }
        return E_OK;
    }

    HError SimulinkObject::Insert(const std::shared_ptr<ISimulinkElement>& element)
    {
        if (element == nullptr)
        {
            return E_CHILD_NULLPTR_RECEIVED;
        }
        GetChildren()[element->GetId()] = element;
        GetOrderedChildren().push_back(element);
        // tell the element how is his parent
        element->SetParent(shared_from_this());
        return E_OK;
    }

    SId SimulinkObject::GetId() const
    {
        return m_id;
    }

    void SimulinkObject::SetId(const SId& id)
    {
        m_id = id;
    }

    void SimulinkObject::AddParam(const std::string& name,
                                  const std::shared_ptr<IParameterObjectBase>& p)
    {
        if (p == nullptr)
        {
            return;
        }
        m_parameters.push_back(p);
    }

    void SimulinkObject::SetParam(const std::string& name,
                                  const std::shared_ptr<IParameterObjectBase>& p)
    {
        if (p == nullptr)
        {
            return;
        }

        for (auto& param : m_parameters)
        {
            if (param->GetName() == name)
            {
                param = p;
                return;
            }
        }
        AddParam(name, p);
    }

    std::shared_ptr<IParameterObjectBase> SimulinkObject::GetParam(const std::string& name)
    {
        for (const auto& param : m_parameters)
        {
            if (param->GetName() == name)
            {
                return param;
            }
        }
        return nullptr;
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
        oss << "  ID: " << m_id << "\n";
        oss << "  Version: " << m_version << "\n";
        oss << "  Name: " << m_propName << "\n";
        oss << "  Class: " << m_className << "\n";

        oss << "  Objects:\n";
        for (const auto& obj : GetOrderedChildren())
        {
            if (obj)
            {
                oss << "    - " << obj->ToString() << "\n";
            }
        }

        oss << "  Arrays:\n";
        for (const auto& arr : m_arrays)
        {
            if (arr)
            {
                oss << "    - " << arr->ToString() << "\n";
            }
        }

        oss << "  Parameters:\n";
        for (const auto& param : m_parameters)
        {
            if (param)
            {
                oss << "    - " << param->ToString() << "\n";
            }
        }

        oss << "}";

        return oss.str();
    }

    std::shared_ptr<ISimulinkElement> SimulinkObject::GetArray(const SId& id) const
    {
        for (const auto& arr : m_arrays)
        {
            if (arr->GetId() == id)
            {
                return arr;
            }
        }
        return nullptr;
    }

}; // namespace slxio
