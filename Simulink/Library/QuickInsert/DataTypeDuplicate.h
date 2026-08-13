// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATATYPEDUPLICATE_H
#define DATATYPEDUPLICATE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataTypeDuplicate : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DataTypeDuplicate();

  /** Default Destructor */
  ~DataTypeDuplicate();

  const std::string& GetNuminputports() const;
  void SetNuminputports(const std::string& value);

private:

  std::string m_Numinputports;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DATATYPEDUPLICATE_H
