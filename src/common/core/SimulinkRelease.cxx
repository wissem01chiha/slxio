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

#include "SimulinkRelease.h"

namespace slxio
{
SimulinkReleaseHelper::SimulinkReleaseHelper(uint16_t year, char letter) : year_(year), letter_(letter)
{
}

std::optional<SimulinkReleaseHelper> SimulinkReleaseHelper::Parse(std::string_view s)
{
    if (s.size() != 6 || s[0] != 'R' || s[5] < 'a' || s[5] > 'b')
    {
        return std::nullopt;
    }

    uint16_t year = 0;
    for (size_t i = 1; i <= 4; ++i)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            return std::nullopt;
        }
        year = year * 10 + (s[i] - '0');
    }

    if (year < 2018 || year > 2025)
    {
        return std::nullopt;
    }

    char letter = s[5];
    return SimulinkReleaseHelper(year, letter);
}

uint16_t SimulinkReleaseHelper::Year() const
{
    return year_;
}

char SimulinkReleaseHelper::Letter() const
{
    return letter_;
}

SimulinkRelease SimulinkReleaseHelper::ToRelease() const
{
    const auto releaseIndex = (year_ - 2018) * 2 + (letter_ == 'b' ? 1 : 0);
    return static_cast<SimulinkRelease>(releaseIndex);
}

std::string SimulinkReleaseHelper::ToString() const
{
    return "R" + std::to_string(year_) + letter_;
}

bool SimulinkReleaseHelper::operator==(const SimulinkReleaseHelper& other) const
{
    return year_ == other.year_ && letter_ == other.letter_;
}

}; // namespace slxio