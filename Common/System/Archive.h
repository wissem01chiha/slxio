// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

  /** Get the file extension. */
  const char* GetFileExtension() const;

  /** Set the file extension. */
  UInt32 SetFileExtension(const char* ext);

  /** Extract the current file if it is a ZIP archive. */
  UInt32 Unzip(const char* dir);

  /** Replace the current file in a compressed ZIP archive. */
  UInt32 Zip(const char* file, const char* entryName);


  const char* File::GetFileExtension() const
  {

    if (FilePath == "")
      return nullptr;

    const char* dot = strrchr(FilePath.c_str(), '.');
    if (!dot || dot == FilePath)
      return nullptr;

    return dot + 1;
  }


    /**
   * Compress the directory content into a ZIP archive.
   * Output file will be named <dirname>.zip.
   * If a new archive name is given, it will assume same as parent directory.
   */
  UInt32 Zip(const char* dir = "");
