// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef NONNEGATIVE_H
#define NONNEGATIVE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Nonnegative : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Nonnegative();

  /** Default Destructor */
  ~Nonnegative();

  const std::string& GetRelop() const;
  void SetRelop(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

private:

  std::string m_Relop;

  std::string m_Outdatatypestr;

  std::string m_Zerocross;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // NONNEGATIVE_H
