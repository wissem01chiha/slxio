// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ARCHIVE_H
#define ARCHIVE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

class File;
class Directory;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Archive
 * @brief A singleton class for managing archived file format
 */
class SLXIO_APIEXPORT Archive final
{
public:
  /** Default Constructor */
  Archive();

  /** Create a Reference to an instance */
  Archive* New();

  /** Get the default archive file extension. */
  const char* GetArchiveExtension() const;

  /** Set the file extension. */
  void SetArchiveExtension(const char* ext);

  /* Set the archive directory folder is not given a temporary one will be used
   * as default */
  void SetArchiveDirectory(const Directory& directory);

  /** Extract the archive if it is a ZIP archive. */
  ReturnType Extract();

  /** Add a file to the Archive */
  ReturnType Add(const File& file);

  /** Compress the directory content into a ZIP archive.*/
  ReturnType Compress();

  /** Default Destructor */
  ~Archive();

private:
  Directory& directory;
  File& file;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // ARCHIVE_H