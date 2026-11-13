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

#include "SimulinkBlock.h"
#include "SimulinkInPort.h"
#include "SimulinkOutPort.h"
#include "SimulinkAnnotation.h"

namespace slxio
{
    SimulinkBlock::SimulinkBlock() : m_type(SimulinkBlockType::NotSupported), m_index("")
    {
    }
    SimulinkBlock::SimulinkBlock(const SimulinkBlockType& type) : m_type(type) {};

    SimulinkBlock::SimulinkBlock(const SimulinkBlock& origBlock)
    {
        m_type = origBlock.m_type;
        m_category = origBlock.m_category;
        m_annotations = origBlock.m_annotations;
        m_model = origBlock.m_model;
    }
    std::shared_ptr<SimulinkBlock> SimulinkBlock::GetSubBlock(std::string name)
    {
        return std::shared_ptr<SimulinkBlock>();
    }
    SimulinkBlockType SimulinkBlock::GetType() const
    {
        return m_type;
    }
    std::string SimulinkBlock::GetIndex() const
    {
        return m_index;
    }
    SimulinkBlockCategory SimulinkBlock::GetBlockCategory() const
    {
        return m_category;
    }
    bool SimulinkBlock::HasSubBlocks() const
    {
        return !m_subBlocks.empty();
    }

    void SimulinkBlock::Remove()
    {
        return;
    }

    std::vector<std::shared_ptr<ISimulinkElement>> SimulinkBlock::GetChildren() const
    {
        return {};
    }

    std::shared_ptr<SimulinkModel> SimulinkBlock::GetModel() const
    {
        return m_model;
    }

    error_code SimulinkBlock::AddSubBlock(const SimulinkBlock& subBlock)
    {
        auto it = m_subBlocks.find(subBlock.GetIndex());
        if (it != m_subBlocks.end())
        {
            return error_code::SubBlockAlreadyExist;
        }
        m_subBlocks[subBlock.GetIndex()] = subBlock;
        return error_code::Ok;
    }

    void SimulinkBlock::SetParent(const std::shared_ptr<SimulinkBlock> parent)
    {
        if (parent == nullptr)
        {
            return;
        }
        return;
    }
    void SimulinkBlock::Detach()
    {
        return;
    }
    std::string SimulinkBlock::ToString() const
    {
        return "";
    }
    SimulinkBlock::~SimulinkBlock()
    {
    }

}; // namespace slxio