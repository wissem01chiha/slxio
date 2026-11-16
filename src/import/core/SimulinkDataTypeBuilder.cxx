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

#include "SimulinkDataTypeBuilder.h"

namespace slxio
{
    HError SimulinkDataTypeParser::setInputData(const std::string data)
    {
        if (data.empty())
        {
            // l.log(Logger::V_ERROR, "SimulinkDataTypeParser:: empty data string");
            return E_INVALID_ARGUMENT;
        }
        dataObject = data;
        return E_OK;
    }

    HError SimulinkDataTypeParser::setInputData(const std::string& data)
    {
        if (data.length() == 0)
        {
            // l.log(Logger::V_ERROR,
      "SimulinkDataTypeParser:: null or empty input data received");
      return E_INVALID_ARGUMENT;
        }
        dataObject = std::string(data);
        return E_OK;
    }

    HError SimulinkDataTypeParser::parse()
    {
        static const std::unordered_map<std::string, SimulinkDataType> sldtMap = {
#define XX(enumVal, str) {str, enumVal},
            SIMULINKDATATYPE_MAP(XX)
#undef XX
        };

        auto it = sldtMap.find(dataObject);
        if (it != sldtMap.end())
        {
            ptr = std::make_shared<SimulinkDataType>(it->second);
            return E_OK;
        }
        // l.log(Logger::V_ERROR,
    "SimulinkDataTypeParser:: unrecognized data type string: " + dataObject);
    ptr = std::make_shared<SimulinkDataType>(SimulinkDataType::Auto);
    return E_INVALID_ARGUMENT;
    }

}; // namespace slxio
