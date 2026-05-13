// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIGNALOBJECT_H
#define SIGNALOBJECT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "DataObject.h"
#include "PlatformTypes.h"
#include "Signal.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SignalObject : public DataObject
{
public:
  SignalObject* New() override;
  bool operator==(const DataObject&) override;
  void* GetImplDataObject() const override;
  std::string toString() const override;
  bool Empty() override;
  SignalObject();

private:
    SignalPtr ImplDataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIGNALOBJECT_H
