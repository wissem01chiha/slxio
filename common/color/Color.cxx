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

#include "Color.h"

namespace slxio
{

std::vector<uint32_t> Color::toVector() const
{
    return {r, g, b, a};
}
Color::Color() : r(0), g(0), b(0), a(255)
{
}
Color::Color(uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) : r(red), g(green), b(blue), a(alpha)
{
}
bool Color::operator==(const Color& other) const
{
    return (r == other.r) && (g == other.g) && (b == other.b) && (a == other.a);
}
bool Color::operator!=(const Color& other) const
{
    return !(*this == other);
}

Color Color::fromVector(const std::vector<uint32_t>& vec)
{
    if (vec.size() >= 4)
    {
        return Color(vec[0], vec[1], vec[2], vec[3]);
    }
    return Color(vec.size() > 0 ? vec[0] : 0, vec.size() > 1 ? vec[1] : 0, vec.size() > 2 ? vec[2] : 0, 255);
}

}; // namespace slxio
