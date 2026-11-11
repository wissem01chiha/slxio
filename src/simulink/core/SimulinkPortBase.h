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

#include "SimulinkPortType.h"
#include "CommonPCH.h"

namespace slxio
{
    class SimulinkBlock;

    class SimulinkPortBase
    {
    public:
        SimulinkPortBase();

        SimulinkPortBase(std::shared_ptr<SimulinkBlock> block, std::string index);

        std::string ToString() const;

        virtual SimulinkPortType GetPortType() const = 0;

        std::string GetIndex() const;

        std::shared_ptr<SimulinkBlock> GetBlock() const;

        /**
         * This only sets the block to nullptr. Acutal remove
         * implementation is done in the sub classes.
         */
        virtual void Remove();

        ~SimulinkPortBase();

    private:
        std::string m_index;
        std::shared_ptr<SimulinkBlock> m_block;
    };

}; // namespace slxio
