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
#include "Point.h"

namespace slxio
{

Point::Point(const std::vector<uint32_t>& vec)
{
    if (vec.size() < 4)
    {
        // l.Log(Logger::V_ERROR,
        //  "Point constructor: vector too small to initialize Point!");
        x = y = width = height = 0;
    }
    else
    {
        x = vec[0];
        y = vec[1];
        width = vec[2];
        height = vec[3];
    }
}

std::vector<uint32_t> Point::toVector() const
{
    return {x, y, width, height};
}

}; // namespace slxio
