// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKAPPEARANCE_H
#define IBLOCKAPPEARANCE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"
#include "PlatformTypes.h"

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

    virtual std::string GetBackgroundColor() const = 0;
    virtual std::string GetBlockMirror() const = 0;
    virtual UInt32 GetBlockRotation() const = 0;
    virtual std::string GetDropShadow() const = 0;
    virtual std::string GetFontAngle() const = 0;
    virtual std::string GetFontName() const = 0;
    virtual UInt32 GetFontSize() const = 0;
    virtual std::string GetFontWeight() const = 0;
    virtual std::string GetForegroundColor() const = 0;
    virtual std::string GetHideAutomaticName() const = 0;
    virtual std::string GetNamePlacement() const = 0;
    virtual std::string GetOrientation() const = 0;
    virtual std::vector<UInt32> GetPosition() const = 0;
    virtual std::string GetShowName() const = 0;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IBLOCKAPPEARANCE_H
