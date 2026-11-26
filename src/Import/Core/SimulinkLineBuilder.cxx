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

#include "SimulinkLineBuilder.h"
#include "SimulinkParameterBuilder.h"

namespace slxio
{
    HError SimulinkLineParser::setInputData(const xmlNodePtr data)
    {
        if (data == nullptr)
        {
            // l.log(Logger::V_ERROR, "SimulinkLineParser:: null node pointer
            // received");
            return E_PARAMETER_NULL_PTR;
        }
        dataObject = data;
        return E_OK;
    }

    HError SimulinkLineParser::parse()
    {
        return E_OK;
    }

    SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
