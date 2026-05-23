// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWEVENT_H
#define STATEFLOWEVENT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "ErrorCode.h"
#include "StateflowElementBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Stateflow event object.
 */
class SLXIO_APIEXPORT StateflowEvent : public StateflowElementBase
{
public:
  StateflowEvent();
  StateflowEvent(StateflowEvent& orig);
  ReturnType RemoveElement(
    std::shared_ptr<SimulinkElementBase> element) override;

private:
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWEVENT_H
