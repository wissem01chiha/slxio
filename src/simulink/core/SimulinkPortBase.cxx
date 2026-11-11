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

#include "SimulinkPortBase.h"
#include "SimulinkBlock.h"

namespace slxio
{

    SimulinkPortBase::SimulinkPortBase(std::shared_ptr<SimulinkBlock> block, std::string index)
        : m_index(index), m_block(block)
    {
    }

    SimulinkPortBase::~SimulinkPortBase()
    {
    }

    std::string SimulinkPortBase::ToString() const
    {
        std::ostringstream oss;

        oss << "SimulinkPort[Index=" << m_index;
        if (m_block)
        {
            oss << ", Block=" << m_block->ToString();
        }
        oss << "]";
        return oss.str();
    }

    std::shared_ptr<SimulinkBlock> SimulinkPortBase::GetBlock() const
    {
        return m_block;
    }

}; // namespace slxio
