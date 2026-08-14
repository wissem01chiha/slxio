// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TIMEDBASEDLINEARIZATION_H
#define TIMEDBASEDLINEARIZATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TimedBasedLinearization
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  TimedBasedLinearization();

  /** Default Destructor */
  ~TimedBasedLinearization();

  const std::string& GetLinearizationtime() const;
  void SetLinearizationtime(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Linearizationtime;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TIMEDBASEDLINEARIZATION_H
