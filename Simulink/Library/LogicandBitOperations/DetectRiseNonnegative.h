// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DETECTRISENONNEGATIVE_H
#define DETECTRISENONNEGATIVE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DetectRiseNonnegative : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DetectRiseNonnegative();

  /** Default Destructor */
  ~DetectRiseNonnegative();

  const std::string& GetVinit() const;
  void SetVinit(const std::string& value);

  const std::string& GetInputprocessing() const;
  void SetInputprocessing(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

private:

  std::string m_Vinit;

  std::string m_Inputprocessing;

  std::string m_Outdatatypestr;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DETECTRISENONNEGATIVE_H
