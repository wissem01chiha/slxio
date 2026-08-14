// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IF_H
#define IF_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT If
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  If();

  /** Default Destructor */
  ~If();

  const std::string& GetNuminputs() const;
  void SetNuminputs(const std::string& value);

  const std::string& GetIfexpression() const;
  void SetIfexpression(const std::string& value);

  const std::string& GetElseifexpressions() const;
  void SetElseifexpressions(const std::string& value);

  const std::string& GetShowelse() const;
  void SetShowelse(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Numinputs;

  std::string m_Ifexpression;

  std::string m_Elseifexpressions;

  std::string m_Showelse;

  std::string m_Zerocross;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IF_H
