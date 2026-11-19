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

#include "StateflowTransition.h"
#include "StateflowNodeBase.h"

namespace slxio
{

    StateflowTransition::StateflowTransition(const std::shared_ptr<StateflowNodeBase>& dst)
        : dst(dst)
    {
        assert(dst && "Destination may not be null");
        dst->AddInTransition(
            std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
    }

    StateflowTransition::StateflowTransition(const std::shared_ptr<StateflowNodeBase>& src,
                                             const std::shared_ptr<StateflowNodeBase>& dst)
        : src(src), dst(dst)
    {
        assert(src && dst && "Neither src nor dst may be null");
        src->AddOutTransition(
            std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
        dst->AddInTransition(
            std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
    }

    std::shared_ptr<StateflowNodeBase> StateflowTransition::GetSrc() const
    {
        return src;
    }
    std::shared_ptr<StateflowNodeBase> StateflowTransition::GetDst() const
    {
        return dst;
    }

    std::string StateflowTransition::GetLabel() const
    {
        // Placeholder: integrate with parameter system
        return "labelString";
    }

    void StateflowTransition::Remove()
    {
        if (src)
        {
            src->RemoveOutTransition(
                std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
            src.reset();
        }
        if (dst)
        {
            dst->RemoveInTransition(
                std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
            dst.reset();
        }
    }

    std::string StateflowTransition::ToString() const
    {
        if (!src)
        {
            return "-> " + std::string("[Node]");
        }
        return "[Node] -> [Node]";
    }

}; // namespace slxio
