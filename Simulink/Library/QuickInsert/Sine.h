// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SINE_H
#define SINE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Sine : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Sine();

  /** Default Destructor */
  ~Sine();

  const std::string& GetNumdatapoints() const;
  void SetNumdatapoints(const std::string& value);

  const std::string& GetOutputwordlength() const;
  void SetOutputwordlength(const std::string& value);

  const std::string& GetInternalrulepriority() const;
  void SetInternalrulepriority(const std::string& value);

private:

  std::string m_Numdatapoints;

  std::string m_Outputwordlength;

  std::string m_Internalrulepriority;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SINE_H
