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
#include "SimulinkConfigSet.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSet::SimulinkConfigSet() : m_name(""), m_status(false)
{
}

std::string SimulinkConfigSet::ToString() const
{
    std::ostringstream oss;
    oss << "SimulinkConfigSet: " << m_name << " [status=" << (m_status ? "active" : "inactive") << "]\n";

    for (const auto& kv : m_parameters)
    {
        oss << "  " << kv.first << " = ";
        if (kv.second)
        {
            oss << kv.second->ToString();
        }
        else
        {
            oss << "\n";
        }
        oss << "\n";
    }

    return oss.str();
}

void SimulinkConfigSet::AddParam(const std::string& name, const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr || name.empty())
    {
        return;
    }
    if (name == "Solver")
    {
        m_parameters[name] = p;
    }
}

void SimulinkConfigSet::SetParam(const std::string& name, const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
}

std::shared_ptr<IParameterObjectBase> SimulinkConfigSet::GetParam(const std::string& name)
{
    return nullptr;
}

std::string SimulinkConfigSet::GetName() const
{
    return m_name;
}

HError SimulinkConfigSet::Deactivate()
{
    if (!m_status)
    {
        // logger.log(Logger::V_INFO, "Deactivating Simulink configuration set
        // ",
        //  object->getName());
    }
    m_status = false;
    return E_OK;
}

bool SimulinkConfigSet::IsActive() const
{
    return m_status;
}

HError SimulinkConfigSet::Activate()
{
    if (m_status)
    {
        return 0;
    }
    m_status = true;
    return E_OK;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
