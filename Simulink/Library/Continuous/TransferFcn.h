// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRANSFERFCN_H
#define TRANSFERFCN_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TransferFcn : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  TransferFcn();

  /** Default Destructor */
  ~TransferFcn();

  const std::string& GetNumerator() const;
  void SetNumerator(const std::string& value);

  const std::string& GetDenominator() const;
  void SetDenominator(const std::string& value);

  const std::string& GetParametertunability() const;
  void SetParametertunability(const std::string& value);

  const std::string& GetAbsolutetolerance() const;
  void SetAbsolutetolerance(const std::string& value);

  const std::string& GetContinuousstateattributes() const;
  void SetContinuousstateattributes(const std::string& value);

private:

  std::string m_Numerator;

  std::string m_Denominator;

  std::string m_Parametertunability;

  std::string m_Absolutetolerance;

  std::string m_Continuousstateattributes;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRANSFERFCN_H
