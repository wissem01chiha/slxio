// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILEBASE_H
#define SIMULINKFILEBASE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkFileBase
 * @brief Base class for all lower-level readers/writers of Simulink
 * file data. Provides a common metadata grouping that describes
 * essential information about a Simulink file, this class is intended
 * to be subclassed by specific file readers/writers that need
 * consistent metadata handling.
 */
class APIEXPORT SimulinkFileBase
{
public:
  /// @brief Convert metadata fields to a human-readable string.
  std::string ToString() const;

  /// @brief Default destructor.
  ~SimulinkFileBase() = default;

protected:
  SimulinkFileBase() = default;

  std::string category;
  std::string creator;
  std::string lastModifiedBy;
  std::string revision;
  std::string version;

  std::string contentType;
  std::string contentTypeFriendlyName;
  std::string matlabRelease;

  std::string matlabVersion;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKFILEBASE_H
