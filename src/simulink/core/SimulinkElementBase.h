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

namespace slxio
{
    class SimulinkBlock;
    class SimulinkModel;

    class SimulinkElementBase
    {
    public:
        SimulinkElementBase();
        SimulinkElementBase(SimulinkElementBase& other);

        std::string GetId() const;
        SimulinkModel& GetModel() const;
        std::string GetName() const;

        // Returns the parent block (may be null).
        SimulinkBlock GetParent() const;

        // Remove this element from the model.
        void Remove();

        std::string ToString() const;

    protected:
        void SetParent(SimulinkBlock parent);

    private:
        SimulinkBlock& parent;
    };

}; // namespace slxio