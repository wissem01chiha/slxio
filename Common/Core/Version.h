// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VERSION_H
#define VERSION_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
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
   * Default Constructor
   */
  Version() = default;

  /**
   * Returns the major version number of the library.
   */
  static UInt32 GetMajorVersion();

  /**
   * Returns the minor version number of the library.
   */
  static UInt32 GetMinorVersion();

  /**
   * Returns the patch version number of the library.
   */
  static UInt32 GetPatchVersion();

  /**
   * Checks if the current major version is less than the given version.
   */
  bool IsMajorVersionLessThan(UInt32 version);

  /**
   * Checks if the current minor version is less than the given version.
   */
  bool IsMinorVersionLessThan(UInt32 version);

  /**
   * Returns the full version string in "major.minor.patch" format.
   */
  static std::string GetVersionString();

  /**
   * Returns the Simulink Release year
   */
  static UInt8 GetSimulinkVersion();

  /**
   * Returns the Simulink Release tag
   */
  static const char* GetSimulinkRelease();
  /**
   * Returns the full Simulink version in "year.release" format
   */
  static std::string GetSimulinkVersionString();

  /**
   * Default Destructor
   */
  ~Version() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // VERSION_H