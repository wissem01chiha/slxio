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

#pragma once

#include "CommonPCH.h"

namespace slxio
{
    struct Rectangle;
    class Color;

    // Encapsulates all information required for layouting
    // a rectangular element.
    class RectangleLayoutBase
    {
    public:
        RectangleLayoutBase();
        RectangleLayoutBase(Rectangle& position, Color& foregroundColor, Color& backgroundColor);
        virtual ~RectangleLayoutBase() = default;

    protected:
        Rectangle& m_position;
        Color& m_foregroundColor;
        Color& m_backgroundColor;
    };

}; // namespace slxio