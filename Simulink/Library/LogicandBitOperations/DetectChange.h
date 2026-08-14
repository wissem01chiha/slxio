// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DETECTCHANGE_H
#define DETECTCHANGE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DetectChange
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  DetectChange();

  /** Default Destructor */
  ~DetectChange();

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

#endif // DETECTCHANGE_H
