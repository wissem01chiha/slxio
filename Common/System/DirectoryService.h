// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DIRECTORYSERVICE_H
#define DIRECTORYSERVICE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <memory>
#include <string>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Directory;

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
  static std::string ToString(const Directory& directory);

  /** Get the current working directory. */
  static Directory GetWorkingDirectory(int* error);

  /**
   * Creates the directory structure for a given entry name.
   * The entry name can be in one of the following formats:
   * - "simulink/plugin/rels/" (a directory path)
   * - "simulink/blockdiagram.xml" (a file path)
   * This function ensures that the directory structure is created up
   * to the specified root folder (`dir`)
   */
  static std::shared_ptr<Directory> CreateDirectoryStructure(
    const std::string& structure, int* error);

  /** Create a system temporary directory and retrun a pointer to it*/
  static std::shared_ptr<Directory> CreateTemporaryDirectory(int* error);

  /** same as CreateTemporaryDirectory using a prefix for directory name */
  static std::shared_ptr<Directory> CreatePrefixedTemporaryDirectory(
    const char* prefix, int* error);
};

SLXIO_ABI_NAMESPACE_END
};

#endif // DIRECTORYSERVICE_H
