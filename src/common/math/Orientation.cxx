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

#include "Orientation.h"

namespace slxio
{

    float GetDirection(Orientation Orientation)
    {
        switch (Orientation)
        {
        case Orientation::RIGHT:
            return 0;
        case Orientation::DOWN:
            return 270;
        case Orientation::LEFT:
            return 180;
        case Orientation::UP:
            return 90;
        default:
            throw std::logic_error("unknown orientation value");
        }
    }

    bool IsRotated(Orientation Orientation)
    {
        return Orientation == Orientation::DOWN || Orientation == Orientation::UP;
    }

    bool IsLeftOrUp(Orientation Orientation)
    {
        return Orientation == Orientation::LEFT || Orientation == Orientation::UP;
    }

    bool IsLeftOrDown(Orientation Orientation)
    {
        return Orientation == Orientation::LEFT || Orientation == Orientation::DOWN;
    }

    Orientation GetOpposite(Orientation Orientation)
    {
        switch (Orientation)
        {
        case Orientation::RIGHT:
            return Orientation::LEFT;
        case Orientation::LEFT:
            return Orientation::RIGHT;
        case Orientation::UP:
            return Orientation::DOWN;
        case Orientation::DOWN:
            return Orientation::UP;
        default:
            throw std::logic_error("unknown Orientation value");
        }
    }

    Orientation FromRotationValue(const char* str)
    {
        if (std::strcmp(str, "0") == 0)
            return Orientation::RIGHT;
        if (std::strcmp(str, "90") == 0)
            return Orientation::DOWN;
        if (std::strcmp(str, "180") == 0)
            return Orientation::LEFT;
        if (std::strcmp(str, "270") == 0)
            return Orientation::UP;

        return Orientation::RIGHT;
    }

}; // namespace slxio
