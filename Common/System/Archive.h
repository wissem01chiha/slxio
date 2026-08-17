// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ARCHIVE_H
#define ARCHIVE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Directory.h"
#include "File.h"
#include "PlatformTypes.h"
#include "SystemPCH.h"

namespace slxio
{
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

    /** Constructor given an expilcit file */
    Archive(const File& file);

    /** Create a Reference to an instance */
    Archive* New();

    /** Get the default archive file extension. */
    std::string GetArchiveExtension() const;

    /** Set the file extension. */
    void SetArchiveExtension(const char* ext);

    /* Set the archive directory folder is not given a temporary one will be
     * used as default */
    void SetArchiveDirectory(const Directory& directory);

    /** Get the archive directory object */
    Directory GetArchiveDirectory() const;

    /** Extract the archive if it is a ZIP archive. */
    HError Extract();

    /** Add a file to the Archive, if the file already there */
    HError Add(const File& file);

    /** Remove a file from teh archive, if the file exist else return and error
     */
    HError Remove(const File& file);

    /** Default Destructor */
    ~Archive() = default;

private:
    Directory directory;
    File file;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ARCHIVE_H
