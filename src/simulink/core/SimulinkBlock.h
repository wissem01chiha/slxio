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
#include "SimulinkElement.h"
#include "unordered_dense.h"
#include "SimulinkBlockType.h"
#include "SimulinkBlockCategory.h"

namespace slxio
{

    class SimulinkInPort;
    class SimulinkOutPort;
    class SimulinkAnnotation;

    class SimulinkBlock : public SimulinkElement
    {
    public:
        SimulinkBlock();
        SimulinkBlock(SimulinkBlock& origBlock);

        void AddSubBlock(const SimulinkBlock& subBlock);
        virtual void SetParent(SimulinkBlock parent) = 0;
        /**
         * If this block is of type 'Reference' this returns
         * Reference;source type of the reference. Otherwise
         * this just returns the type of the block.
         */
        std::string GetResolvedType();
        /**
         * Get named sub block or nullptr if no sub block with the given
         * name is present.
         */
        std::shared_ptr<SimulinkBlock> GetSubBlock(std::string name);

        std::set<SimulinkBlock> GetSubBlocks() const;

        std::string GetType() const;

        /** Returns whether this block has subBlocks. */
        bool HasSubBlocks();

        /**
         * Unlinks this object from the simulink tree. Also removes all sub-blocks,
         * ports and annotations
         */
        void Remove();

        /**
         * Unlinks this object from the simulink tree. Unlike remove() does
         * not unlink sub-blocks, ports and annotations.
         */
        void Detach();

        ~SimulinkBlock();

    private:
        ankerl::unordered_dense::map<std::string, SimulinkBlock> m_subBlocks;
        ankerl::unordered_dense::map<std::string, SimulinkInPort> m_inPorts;
        ankerl::unordered_dense::map<std::string, SimulinkOutPort> m_outPorts;
        std::vector<SimulinkAnnotation> m_annotations;
    };

}; // namespace slxio