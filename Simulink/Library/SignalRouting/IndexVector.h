// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INDEXVECTOR_H
#define INDEXVECTOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IndexVector
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  IndexVector();

  /** Default Destructor */
  ~IndexVector();

  const std::string& GetDataportorder() const;
  void SetDataportorder(const std::string& value);

  const std::string& GetInputs() const;
  void SetInputs(const std::string& value);

  const std::string& GetDataportindices() const;
  void SetDataportindices(const std::string& value);

  const std::string& GetDataportfordefault() const;
  void SetDataportfordefault(const std::string& value);

  const std::string& GetDiagnosticfordefault() const;
  void SetDiagnosticfordefault(const std::string& value);

  const std::string& GetInputsamedt() const;
  void SetInputsamedt(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetRndmeth() const;
  void SetRndmeth(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetAllowdiffinputsizes() const;
  void SetAllowdiffinputsizes(const std::string& value);

private:
  std::string m_Dataportorder;

  std::string m_Inputs;

  std::string m_Dataportindices;

  std::string m_Dataportfordefault;

  std::string m_Diagnosticfordefault;

  std::string m_Inputsamedt;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

  std::string m_Sampletime;

  std::string m_Allowdiffinputsizes;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // INDEXVECTOR_H
