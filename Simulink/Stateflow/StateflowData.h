// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

SLXIO_ABI_NAMESPACE_BEGIN

/** @brief A Stateflow data object.*/
class APIEXPORT StateflowData : public StateflowDeclBase
{
public:
  StateflowData() {}
  StateflowData(StateflowData& stateflowData) {}

  /** Remove this data object from the model. */
  void RemoveElement()
  {
    CCSMPre.isFalse(
      getParent() == null, "Data object has no parent to be removed from.");
    getParent().removeData(this);
  }

  /** Deep clone this data object. */
  StateflowData deepClone() { return new StateflowData(this); }
}

SLXIO_ABI_NAMESPACE_END