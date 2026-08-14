// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PERMUTEDIMENSIONS_H
#define PERMUTEDIMENSIONS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT PermuteDimensions : public IBlockParameters,
                                          public IBlockProperties
{
public:
    /** Default Constructor */
    PermuteDimensions();

    /** Default Destructor */
    ~PermuteDimensions();

    const std::string& GetOrder() const;
    void SetOrder(const std::string& value);

private:
    std::string m_Order;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // PERMUTEDIMENSIONS_H
