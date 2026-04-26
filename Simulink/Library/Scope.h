// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "ABINamespaceMacro.h"
#include "PlatformTypes.h"

SLXIO_ABI_NAMESPACE_BEGIN

class Scope
{

  uint32 numInputPorts;
  bool floating;
  const char* scopeSpecificationString;
};

SLXIO_ABI_NAMESPACE_END