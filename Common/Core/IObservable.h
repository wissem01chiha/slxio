// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IOBSERVABLE_H
#define IOBSERVABLE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "IObservationMessage.h"
#include "IObserver.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IObservable
 * @brief Abstract interface to let classes register observers
 */
class SLXIO_APIEXPORT IObservable
{
public:
    virtual ~IObservable() = default;
    virtual void Attach(IObserver* obs);
    virtual void Detach(IObserver* obs);

protected:
    virtual void Update(const IObservationMessage& msg);

private:
    std::vector<IObserver*> m_observers;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IOBSERVABLE_H