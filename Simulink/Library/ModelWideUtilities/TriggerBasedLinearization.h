// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRIGGERBASEDLINEARIZATION_H
#define TRIGGERBASEDLINEARIZATION_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TriggerBasedLinearization : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  TriggerBasedLinearization();

  /** Default Destructor */
  ~TriggerBasedLinearization();

  const std::string& GetTriggertype() const;
  void SetTriggertype(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Triggertype;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRIGGERBASEDLINEARIZATION_H
