// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ASSERTION_H
#define ASSERTION_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Assertion : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Assertion();

  /** Default Destructor */
  ~Assertion();

  const std::string& GetEnabled() const;
  void SetEnabled(const std::string& value);

  const std::string& GetAssertionfailfcn() const;
  void SetAssertionfailfcn(const std::string& value);

  const std::string& GetStopwhenassertionfail() const;
  void SetStopwhenassertionfail(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Enabled;

  std::string m_Assertionfailfcn;

  std::string m_Stopwhenassertionfail;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ASSERTION_H
