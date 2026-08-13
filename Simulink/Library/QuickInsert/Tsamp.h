// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TSAMP_H
#define TSAMP_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Tsamp : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Tsamp();

  /** Default Destructor */
  ~Tsamp();

  const std::string& GetTsampmathop() const;
  void SetTsampmathop(const std::string& value);

  const std::string& GetWeightvalue() const;
  void SetWeightvalue(const std::string& value);

  const std::string& GetTsampmathimp() const;
  void SetTsampmathimp(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetRndmeth() const;
  void SetRndmeth(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

private:

  std::string m_Tsampmathop;

  std::string m_Weightvalue;

  std::string m_Tsampmathimp;

  std::string m_Outdatatypestr;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TSAMP_H
