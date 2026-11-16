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

#include "StateflowEvent.h"

namespace slxio
{
    StateflowEvent::StateflowEvent() : StateflowElementBase()
    {
        // l.log(Logger::V_INFO, "StateflowEvent created.");
    }

    StateflowEvent::StateflowEvent(StateflowEvent& orig)
    {
    }

    void StateflowEvent::Remove(std::shared_ptr<StateflowElementBase> element)
    {
        if (GetParent() == nullptr)
        {
            // l.log(Logger::V_WARNING, "Event has no parent to be removed from.");
            return;
        }
        // getParent().removeEvent(this);
        return;
    }

}; // namespace slxio
