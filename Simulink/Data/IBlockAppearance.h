// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKAPPEARANCE_H
#define IBLOCKAPPEARANCE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include <string>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IBlockAppearance
 * @brief Interface for Simulink block appearance properties
 */
class SLXIO_APIEXPORT IBlockAppearance
{
public:
    virtual ~IBlockAppearance() = default;

    /// Background color
    virtual std::string GetBackgroundColor() const = 0;

    /// Block mirror
    virtual std::string GetBlockMirror() const = 0;

    /// Rotation angle
    virtual int GetBlockRotation() const = 0;

    /// Drop shadow
    virtual std::string GetDropShadow() const = 0;

    /// Font angle
    virtual std::string GetFontAngle() const = 0;

    /// Font name
    virtual std::string GetFontName() const = 0;

    /// Font size
    virtual int GetFontSize() const = 0;

    /// Font weight
    virtual std::string GetFontWeight() const = 0;

    /// Foreground color
    virtual std::string GetForegroundColor() const = 0;

    /// Hide automatic name
    virtual std::string GetHideAutomaticName() const = 0;

    /// Name placement
    virtual std::string GetNamePlacement() const = 0;

    /// Orientation
    virtual std::string GetOrientation() const = 0;

    /// Position vector
    virtual std::vector<int> GetPosition() const = 0;

    /// Show block name
    virtual std::string GetShowName() const = 0;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IBLOCKAPPEARANCE_H
