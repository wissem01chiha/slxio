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

#include "SimulinkElement.h"

namespace slxio
{

    HError ISimulinkElement::Insert(const std::shared_ptr<ISimulinkElement>& element)
    {
        return E_OPERATION_NOT_SUPPORTED;
    }

    std::shared_ptr<ISimulinkElement> ISimulinkElement::Find(const SId& id) const
    {
        auto it = m_children.find(id);
        if (it != m_children.end())
        {
            return it->second;
        }
        return nullptr;
    }

    std::shared_ptr<ISimulinkElement> ISimulinkElement::FindRecursive(const SId& id) const
    {
        auto direct = Find(id);
        if (direct)
            return direct;
        for (auto& child : m_childrenOrder)
        {
            auto nested = child->FindRecursive(id);
            if (nested)
                return nested;
        }
        return nullptr;
    }

    HError ISimulinkElement::Erase(const SId& id)
    {
        auto it = m_children.find(id);
        if (it == m_children.end())
        {
            return E_CHILD_NOT_FOUND;
        }

        m_children.erase(it);

        m_childrenOrder.erase(std::remove_if(m_childrenOrder.begin(),
                                             m_childrenOrder.end(),
                                             [&](const std::shared_ptr<ISimulinkElement>& child)
                                             { return child->GetId() == id; }),
                              m_childrenOrder.end());

        return E_OK;
    }

    void ISimulinkElement::Clear()
    {
        m_children.clear();
    }

    bool ISimulinkElement::Contains(const SId& id) const
    {
        return m_children.find(id) != m_children.end();
    }

    std::weak_ptr<ISimulinkElement> ISimulinkElement::GetParent() const
    {
        return m_parent;
    }

    std::string ISimulinkElement::ToString() const
    {
        return std::string("");
    }

    void ISimulinkElement::SetParent(const std::shared_ptr<ISimulinkElement>& parent)
    {
        m_parent = parent;
    }

    std::unordered_map<SId, std::shared_ptr<ISimulinkElement>>& ISimulinkElement::GetChildren()
    {
        return m_children;
    }

    const std::unordered_map<SId, std::shared_ptr<ISimulinkElement>>&
    ISimulinkElement::GetChildren() const
    {
        return m_children;
    }

    std::vector<std::shared_ptr<ISimulinkElement>>& ISimulinkElement::GetOrderedChildren()
    {
        return m_childrenOrder;
    }

    const std::vector<std::shared_ptr<ISimulinkElement>>&
    ISimulinkElement::GetOrderedChildren() const
    {
        return m_childrenOrder;
    }

}; // namespace slxio