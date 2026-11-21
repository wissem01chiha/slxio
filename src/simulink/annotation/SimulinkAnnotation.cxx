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

#include "SimulinkAnnotation.h"
#include "SimulinkAnnotationLayout.h"
#include "SimulinkAnnotationStyle.h"

namespace slxio
{
    SimulinkAnnotation::SimulinkAnnotation() : m_layout(nullptr), m_style(nullptr)
    {
    }

    SimulinkAnnotation::SimulinkAnnotation(const SimulinkAnnotation& other)
        : m_layout(other.m_layout), m_style(other.m_style), m_text(other.m_text)
    {
    }

    const std::string& SimulinkAnnotation::GetText() const
    {
        return m_text;
    }

    void SimulinkAnnotation::SetText(std::string text)
    {
        m_text = std::move(text);
    }

}; // namespace slxio