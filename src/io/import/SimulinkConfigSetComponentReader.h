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

#include "SimulinkConfigSetComponent.h"
#include "SimulinkReader.h"
#include "SimulinkObjectReader.h"

namespace slxio
{

    template <typename T>
    class SimulinkConfigSetComponentReader : public SimulinkReader<T, SimulinkConfigSetComponent>
    {
        SimulinkReaderResult
        Read(T serializedData, SimulinkConfigSetComponent &object) const override
        {
            //SimulinkObject parsed;
            //SimulinkObjectReader<T> objectReader;
            //const auto result = reader.Read(std::move(serializedData), parsed);
            //if ( result != SimulinkReaderResult::Success ) {
            //    return result;
            //}
            //             SimulinkConfigSetComponent converted(parsed.GetClassName());
            // for (const auto &parameter : parsed.GetParams()) {
            //     const auto stringParameter =
            //         std::dynamic_pointer_cast<IParameterObject<std::string>>(parameter);
            //     if (!stringParameter) {
            //         return SimulinkReaderResult::InvalidInput;
            //     }

            //     converted.SetParam(parameter->GetName(), stringParameter->GetValue());
            // }
            // object = std::move(converted);
            return SimulinkReaderResult::NotImplemented;
        }
    };

}  // namespace slxio
