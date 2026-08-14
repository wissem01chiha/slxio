// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MANUALSWITCH_H
#define MANUALSWITCH_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ManualSwitch
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  ManualSwitch();

  /** Default Destructor */
  ~ManualSwitch();

  const std::string& GetVarsize() const;
  void SetVarsize(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Varsize;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MANUALSWITCH_H
