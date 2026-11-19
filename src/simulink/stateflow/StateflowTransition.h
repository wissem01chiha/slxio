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

#pragma once

#include "CommonPCH.h"
#include "StateflowElementBase.h"

namespace slxio
{
    class StateflowNodeBase;

    // A Stateflow transition.
    class StateflowTransition final
    {
    public:
        StateflowTransition(const std::shared_ptr<StateflowNodeBase>& dst);
        StateflowTransition(const std::shared_ptr<StateflowNodeBase>& src,
                            const std::shared_ptr<StateflowNodeBase>& dst);

        std::shared_ptr<StateflowNodeBase> GetSrc() const;
        std::shared_ptr<StateflowNodeBase> GetDst() const;
        std::string GetLabel() const;

        void Remove();

        std::string ToString() const;

    private:
        std::shared_ptr<StateflowNodeBase> src;
        std::shared_ptr<StateflowNodeBase> dst;
    };

}; // namespace slxio
