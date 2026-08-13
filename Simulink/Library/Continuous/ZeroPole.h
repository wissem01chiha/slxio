// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ZEROPOLE_H
#define ZEROPOLE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ZeroPole : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ZeroPole();

  /** Default Destructor */
  ~ZeroPole();

  const std::string& GetZeros() const;
  void SetZeros(const std::string& value);

  const std::string& GetPoles() const;
  void SetPoles(const std::string& value);

  const std::string& GetGain() const;
  void SetGain(const std::string& value);

  const std::string& GetParametertunability() const;
  void SetParametertunability(const std::string& value);

  const std::string& GetAbsolutetolerance() const;
  void SetAbsolutetolerance(const std::string& value);

  const std::string& GetContinuousstateattributes() const;
  void SetContinuousstateattributes(const std::string& value);

private:

  std::string m_Zeros;

  std::string m_Poles;

  std::string m_Gain;

  std::string m_Parametertunability;

  std::string m_Absolutetolerance;

  std::string m_Continuousstateattributes;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ZEROPOLE_H
