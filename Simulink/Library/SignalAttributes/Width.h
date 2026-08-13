// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef WIDTH_H
#define WIDTH_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Width : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Width();

  /** Default Destructor */
  ~Width();

  const std::string& GetOutdatatypemode() const;
  void SetOutdatatypemode(const std::string& value);

  const std::string& GetDatatype() const;
  void SetDatatype(const std::string& value);

  const std::string& GetAlwaysuseconstantsampletime() const;
  void SetAlwaysuseconstantsampletime(const std::string& value);

private:

  std::string m_Outdatatypemode;

  std::string m_Datatype;

  std::string m_Alwaysuseconstantsampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // WIDTH_H
