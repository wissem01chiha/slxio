// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCOLOR_H
#define SIMULINKCOLOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Color.h"
#include "PlatformTypes.h"
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT SimulinkColor final
{
public:
  std::string name;
  std::string hexValue;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKCOLOR_H
