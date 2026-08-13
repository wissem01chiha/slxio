// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef EXPONENTIALLOOKUP_H
#define EXPONENTIALLOOKUP_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ExponentialLookup : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ExponentialLookup();

  /** Default Destructor */
  ~ExponentialLookup();

  const std::string& GetFormula() const;
  void SetFormula(const std::string& value);

  const std::string& GetNumdatapoints() const;
  void SetNumdatapoints(const std::string& value);

  const std::string& GetOutputwordlength() const;
  void SetOutputwordlength(const std::string& value);

  const std::string& GetInternalrulepriority() const;
  void SetInternalrulepriority(const std::string& value);

private:

  std::string m_Formula;

  std::string m_Numdatapoints;

  std::string m_Outputwordlength;

  std::string m_Internalrulepriority;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // EXPONENTIALLOOKUP_H
