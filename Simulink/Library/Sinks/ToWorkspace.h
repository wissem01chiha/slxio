// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TOWORKSPACE_H
#define TOWORKSPACE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ToWorkspace : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ToWorkspace();

  /** Default Destructor */
  ~ToWorkspace();

  const std::string& GetVariablename() const;
  void SetVariablename(const std::string& value);

  const std::string& GetMaxdatapoints() const;
  void SetMaxdatapoints(const std::string& value);

  const std::string& GetDecimation() const;
  void SetDecimation(const std::string& value);

  const std::string& GetSaveformat() const;
  void SetSaveformat(const std::string& value);

  const std::string& GetSave2dsignal() const;
  void SetSave2dsignal(const std::string& value);

  const std::string& GetFixptasfi() const;
  void SetFixptasfi(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Variablename;

  std::string m_Maxdatapoints;

  std::string m_Decimation;

  std::string m_Saveformat;

  std::string m_Save2dsignal;

  std::string m_Fixptasfi;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TOWORKSPACE_H
