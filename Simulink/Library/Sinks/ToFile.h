// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TOFILE_H
#define TOFILE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ToFile
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  ToFile();

  /** Default Destructor */
  ~ToFile();

  const std::string& GetFilename() const;
  void SetFilename(const std::string& value);

  const std::string& GetMatrixname() const;
  void SetMatrixname(const std::string& value);

  const std::string& GetSaveformat() const;
  void SetSaveformat(const std::string& value);

  const std::string& GetDecimation() const;
  void SetDecimation(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Filename;

  std::string m_Matrixname;

  std::string m_Saveformat;

  std::string m_Decimation;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TOFILE_H
