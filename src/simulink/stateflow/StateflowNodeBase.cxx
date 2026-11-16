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

#include "StateflowNodeBase.h"
#include "StateflowTransition.h"

namespace slxio
{
    void StateflowNodeBase::AddInTransition(const std::shared_ptr<StateflowTransition>& transition)
    {
        if (transition->GetDst().get() == this)
        {
            // Logger::GetInstance().log(
            //  Logger::V_ERROR, "Transition destination does not match this node");
            return;
        }
        m_inTransitions.push_back(transition);
    }

    void StateflowNodeBase::AddOutTransition(const std::shared_ptr<StateflowTransition>& transition)
    {
        assert(transition->GetSrc().get() == this && "Transition source does not match this node");
        m_outTransitions.push_back(transition);
    }

    const std::vector<std::shared_ptr<StateflowTransition>>&
    StateflowNodeBase::GetInTransitions() const
    {
        return m_inTransitions;
    }

    const std::vector<std::shared_ptr<StateflowTransition>>&
    StateflowNodeBase::GetOutTransitions() const
    {
        return m_outTransitions;
    }

    void StateflowNodeBase::Remove()
    {
        // TODO: implement removal from parent container
        for (auto& t : m_inTransitions)
        {
            t->Remove();
        }
        for (auto& t : m_outTransitions)
        {
            t->Remove();
        }
        m_inTransitions.clear();
        m_outTransitions.clear();
    }

    void
    StateflowNodeBase::RemoveInTransition(const std::shared_ptr<StateflowTransition>& transition)
    {
        auto it = std::find(m_inTransitions.begin(), m_inTransitions.end(), transition);
        assert(it != m_inTransitions.end() && "Transition not found in inTransitions");
        m_inTransitions.erase(it);
    }

    void
    StateflowNodeBase::RemoveOutTransition(const std::shared_ptr<StateflowTransition>& transition)
    {
        auto it = std::find(m_outTransitions.begin(), m_outTransitions.end(), transition);
        assert(it != m_outTransitions.end() && "Transition not found in outTransitions");
        m_outTransitions.erase(it);
    }

}; // namespace slxio
