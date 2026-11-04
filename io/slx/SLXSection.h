// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <pugixml.hpp>

namespace slxio
{

class SLXSection
{
public:
    SLXSection() = default;
    explicit SLXSection(pugi::xml_node node) : m_node(node)
    {
    }

    virtual ~SLXSection() = default;

    pugi::xml_node GetNode() const
    {
        return m_node;
    }

protected:
    pugi::xml_node m_node;
};

} // namespace slxio
