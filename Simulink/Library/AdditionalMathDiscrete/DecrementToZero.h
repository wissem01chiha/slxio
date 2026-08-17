// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DECREMENTTOZERO_H
#define DECREMENTTOZERO_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DecrementToZero : public IBlockParameters,
                                        public IBlockProperties
{
public:
    /** Default Constructor */
    DecrementToZero();

    /** Default Destructor */
    ~DecrementToZero();

private:
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DECREMENTTOZERO_H
