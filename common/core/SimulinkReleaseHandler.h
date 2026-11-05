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

namespace slxio
{

enum class SimulinkRelease;

class SimulinkReleaseHandler final
{
public:
    SimulinkReleaseHandler(uint16_t year, char letter);
    static std::optional<SimulinkReleaseHandler> Parse(std::string_view s);

    uint16_t Year() const;
    char Letter() const;
    constexpr uint32_t Ordinal() const
    {
        return year_ * 2u + (letter_ == 'b');
    }
    /// "R2023b"
    std::string ToString() const;

/// only if the compiler support c++20
#if __cplusplus >= 202002L
    constexpr auto operator<=>(const SimulinkReleaseHandler& o) const
    {
        return Ordinal() <=> o.Ordinal();
    }
#endif
    bool operator==(const SimulinkReleaseHandler&) const;

private:
    uint16_t year_;
    char letter_;
};

}; // namespace slxio
