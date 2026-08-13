// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DOCBLOCK_H
#define DOCBLOCK_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Docblock : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Docblock();

  /** Default Destructor */
  ~Docblock();

  const std::string& GetEcoderflag() const;
  void SetEcoderflag(const std::string& value);

  const std::string& GetDocumenttype() const;
  void SetDocumenttype(const std::string& value);

private:

  std::string m_Ecoderflag;

  std::string m_Documenttype;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DOCBLOCK_H
