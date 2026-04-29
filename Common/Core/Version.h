// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VERSION_H
#define VERSION_H

#include "ABINamespaceMacro.h"
#include "PlatformTypes.h"
#include "APIExportMacro.h"
#include "VersionMacro.h"
#include "SimulinkVersion.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Version 
 * @brief Manage the version of the library.
 */  
class APIEXPORT Version final 
{
public:
/**
 * 
 */
  static UInt32 GetMajorVersion();

  /**
   * 
   */
  static UInt32 GetMinorVersion();

  /**
   * 
   */
  static UInt32 GetPatchVersion();

  /**
   * 
   */
  bool IsMajorVersionLessThan(UInt32 version);

  /**
   * 
   */
  bool IsMinorVersionLessThan(UInt32 version);

  /**
   * 
   */
  std::string GetVersionString();

private:
  Version() = default;
  ~Version() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* VERSION_H */