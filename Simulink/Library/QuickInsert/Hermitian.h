// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef HERMITIAN_H
#define HERMITIAN_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Hermitian : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Hermitian();

  /** Default Destructor */
  ~Hermitian();

  const std::string& GetOperator() const;
  void SetOperator(const std::string& value);

  const std::string& GetAlgorithmmethod() const;
  void SetAlgorithmmethod(const std::string& value);

  const std::string& GetSignedpower() const;
  void SetSignedpower(const std::string& value);

  const std::string& GetOutputsignaltype() const;
  void SetOutputsignaltype(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

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

  const std::string& GetIntermediateresultsdatatypestr() const;
  void SetIntermediateresultsdatatypestr(const std::string& value);

  const std::string& GetAlgorithmtype() const;
  void SetAlgorithmtype(const std::string& value);

  const std::string& GetIterations() const;
  void SetIterations(const std::string& value);

private:

  std::string m_Operator;

  std::string m_Algorithmmethod;

  std::string m_Signedpower;

  std::string m_Outputsignaltype;

  std::string m_Sampletime;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

  std::string m_Intermediateresultsdatatypestr;

  std::string m_Algorithmtype;

  std::string m_Iterations;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // HERMITIAN_H
