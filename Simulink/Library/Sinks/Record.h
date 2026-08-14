// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RECORD_H
#define RECORD_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Record
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Record();

  /** Default Destructor */
  ~Record();

  const std::string& GetNumports() const;
  void SetNumports(const std::string& value);

  const std::string& GetFramesettings() const;
  void SetFramesettings(const std::string& value);

  const std::string& GetLayout() const;
  void SetLayout(const std::string& value);

private:
  std::string m_Numports;

  std::string m_Framesettings;

  std::string m_Layout;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RECORD_H
