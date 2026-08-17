// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IOBSERVER_H
#define IOBSERVER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "IObservationMessage.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IObserver
 * @brief An abstract One-to-One Observer design Interface
 */
class SLXIO_APIEXPORT IObserver
{
public:
    virtual ~IObserver() = default;

    /**  when the observable updates its state */
    virtual void Update(const IObservationMessage& msg) = 0;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IOBSERVER_H