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

#include "SimulationSettingsBuilder.h"

namespace slxio
{
    SimulationSettingsObject::SimulationSettingsObject(std::shared_ptr<SimulationSettings> value)
        : m_value(std::move(value))
    {
    }

    const std::shared_ptr<SimulationSettings>& SimulationSettingsObject::GetValue() const noexcept
    {
        return m_value;
    }

    BuildResult SimulationSettingsBuilder::Build(const IDataObject& input)
    {
        return {ErrorCode::Ok, nullptr};
    }

} // namespace slxio
