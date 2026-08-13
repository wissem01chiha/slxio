// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATATYPEDUPLICATE1_H
#define DATATYPEDUPLICATE1_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataTypeDuplicate1 : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DataTypeDuplicate1();

  /** Default Destructor */
  ~DataTypeDuplicate1();

  const std::string& GetNuminputports() const;
  void SetNuminputports(const std::string& value);

private:

  std::string m_Numinputports;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DATATYPEDUPLICATE1_H
