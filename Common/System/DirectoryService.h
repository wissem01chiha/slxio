// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DIRECTORYSERVICE_H
#define DIRECTORYSERVICE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

class Directory;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class DirectoryService
 * @brief Provide some extra serivces for common system directory manipulations
 */
class SLXIO_APIEXPORT DirectoryService final
{
public:
  /** Default constructor. */
  DirectoryService() = default;

  /** Destructor. */
  ~DirectoryService() = default;

  /** Get a String Serialisation of the directory tree */
  static std::string toString(const Directory& directory);

  /** Get the current working directory. */
  static Directory GetWorkingDirectory(ReturnType* error);

  /**
   * Creates the directory structure for a given entry name.
   * The entry name can be in one of the following formats:
   * - "simulink/plugin/rels/" (a directory path)
   * - "simulink/blockdiagram.xml" (a file path)
   * This function ensures that the directory structure is created up
   * to the specified root folder (`dir`)
   */
  static ReturnType CreateDirectoryStructure(const std::string& structure);

  /** Create a system tempory directory and return it path */
  static std::string CreateTemporaryDirectory(ReturnType* error);

  /** same as CreateTemporaryDirectory using a prefix for directory name */
  static std::string CreatePrefixedTemporaryDirectory(
    const char* prefix, ReturnType* error);
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DIRECTORYSERVICE_H
