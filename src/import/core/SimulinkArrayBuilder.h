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
#include "ISimulinkBuilder.h"
#include "SimulinkArray.h"

namespace slxio
{
    class SimulinkArrayObject final : public IDataObject
    {
    public:
        explicit SimulinkArrayObject(std::shared_ptr<SimulinkArray> value);
        const std::shared_ptr<SimulinkArray>& GetValue() const noexcept;

    private:
        std::shared_ptr<SimulinkArray> m_value;
    };

    class SimulinkArrayBuilder final : public ISimulinkBuilder
    {
    public:
        SimulinkArrayBuilder() = default;
        BuildResult Build(const IDataObject& input) override;
        ~SimulinkArrayBuilder() = default;
    };

}; // namespace slxio