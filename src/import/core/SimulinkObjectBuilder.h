/*
 * Copyright 2025-2026 Wissem Chiha
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
#include "SimulinkObject.h"

namespace slxio
{
    class SimulinkObjectObject final : public IDataObject
    {
    public:
        explicit SimulinkObjectObject(std::shared_ptr<SimulinkObject> value);
        const std::shared_ptr<SimulinkObject>& GetValue() const noexcept;

    private:
        std::shared_ptr<SimulinkObject> m_value;
    };

    class SimulinkObjectBuilder final : public ISimulinkBuilder
    {
    public:
        SimulinkObjectBuilder() = default;
        BuildResult Build(const IDataObject& input) override;
        ~SimulinkObjectBuilder() = default;
    };
} // namespace slxio
