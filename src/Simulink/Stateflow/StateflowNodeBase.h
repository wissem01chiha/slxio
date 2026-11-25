/*
 * Copyright 2025-2026 Wissem Chiha
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

#pragma once

#include "CommonPCH.h"
#include "StateflowElementBase.h"

namespace slxio
{
    class StateflowTransition;

    // base class for Stateflow nodes (elements that can be
    // connected by transitions).
    class StateflowNodeBase : public StateflowElementBase
    {
    public:
        virtual ~StateflowNodeBase() = default;

        void AddInTransition(const std::shared_ptr<StateflowTransition>& transition);
        void AddOutTransition(const std::shared_ptr<StateflowTransition>& transition);

        const std::vector<std::shared_ptr<StateflowTransition>>& GetInTransitions() const;
        const std::vector<std::shared_ptr<StateflowTransition>>& GetOutTransitions() const;

        void Remove();
        void RemoveInTransition(const std::shared_ptr<StateflowTransition>& transition);
        void RemoveOutTransition(const std::shared_ptr<StateflowTransition>& transition);

    protected:
        StateflowNodeBase() = default;
        StateflowNodeBase(const StateflowNodeBase& origNode) = default;

    private:
        std::vector<std::shared_ptr<StateflowTransition>> m_inTransitions;
        std::vector<std::shared_ptr<StateflowTransition>> m_outTransitions;
    };

}; // namespace slxio
