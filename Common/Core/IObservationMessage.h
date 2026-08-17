// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IOBSERVATIONMESSAGE_H
#define IOBSERVATIONMESSAGE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IObservationMessage
{
public:
    virtual ~IObservationMessage() = default;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IOBSERVATIONMESSAGE_H