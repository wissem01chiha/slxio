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

#include "SimulinkReleaseHandler.h"

namespace slxio
{
    SimulinkReleaseHandler::SimulinkReleaseHandler(uint16_t year, char letter)
        : year_(year), letter_(letter)
    {
    }
    std::optional<SimulinkReleaseHandler>
    SimulinkReleaseHandler::Parse(std::string_view s)
    {
        if ( s.size() != 6 || s[0] != 'R' || s[5] < 'a' || s[5] > 'b' )
            return std::nullopt;

        uint16_t year = 0;
        for ( size_t i = 1; i <= 4; ++i ) {
            if ( s[i] < '0' || s[i] > '9' )
                return std::nullopt;
            year = year * 10 + (s[i] - '0');
        }

        char letter = s[5];
        return SimulinkReleaseHandler(year, letter);
    }
    uint16_t
    SimulinkReleaseHandler::Year() const
    {
        return year_;
    }
    char
    SimulinkReleaseHandler::Letter() const
    {
        return letter_;
    }
    std::string
    SimulinkReleaseHandler::ToString() const
    {
        return "R" + std::to_string(year_) + letter_;
    }
    bool
    SimulinkReleaseHandler::operator==(const SimulinkReleaseHandler &other) const
    {
        return year_ == other.year_ && letter_ == other.letter_;
    }
};  // namespace slxio