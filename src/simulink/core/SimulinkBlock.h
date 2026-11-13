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
#include "Error.h"
#include "SimulinkElement.h"
#include "unordered_dense.h"
#include "SimulinkBlockType.h"
#include "SimulinkBlockCategory.h"

namespace slxio
{
    class SimulinkInPort;
    class SimulinkOutPort;
    class SimulinkAnnotation;
    class SimulinkModel;

    class SimulinkBlock : public SimulinkElement
    {
    public:
        SimulinkBlock();
        explicit SimulinkBlock(const SimulinkBlockType& type);
        SimulinkBlock(const SimulinkBlock& origBlock);

        std::vector<std::shared_ptr<ISimulinkElement>> GetChildren() const override;

        std::shared_ptr<SimulinkModel> GetModel() const override;

        error_code AddSubBlock(const SimulinkBlock& subBlock);

        virtual void SetParent(const std::shared_ptr<SimulinkBlock> parent);

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

        SimulinkBlockType GetType() const;

        std::string GetIndex() const;

        SimulinkBlockCategory GetBlockCategory() const;

        /** Returns whether this block has subBlocks. */
        bool HasSubBlocks() const;

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

        std::string ToString() const override;

        ~SimulinkBlock();

    private:
        std::string m_index;
        SimulinkBlockType m_type;
        SimulinkBlockCategory m_category;
        std::shared_ptr<SimulinkModel> m_model;
        std::vector<SimulinkAnnotation> m_annotations;
        ankerl::unordered_dense::map<std::string, SimulinkBlock> m_subBlocks;
        ankerl::unordered_dense::map<std::string, SimulinkInPort> m_inPorts;
        ankerl::unordered_dense::map<std::string, SimulinkOutPort> m_outPorts;
    };

}; // namespace slxio