// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKVERSION_H
#define SIMULINKVERSION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

enum class SimulinkVersionRelease;

/**
 * @class SimulinkVersion
 * @brief Provides access to the Simulink version Supported
 */
class SLXIO_APIEXPORT SimulinkVersion final {
public:
  /** Returns the Simulink release year.  */
  static UInt16 Year();

  /** Returns the Simulink release letter.  */
  static char Release();

  /* Returns the Simulink version as a string. */
  static std::string ToString();

  /** Returns the Simulink release enumeration value.  */
  static SimulinkVersionRelease GetRelease();
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKVERSION_H
