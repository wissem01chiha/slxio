// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATASOURCETYPE_H
#define DATASOURCETYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class DataSourceType
 * @brief
 */
class SLXIO_APIEXPORT DataSourceType final 
{
public:
  enum class Type
  {
    ModelFile,
    MatFile,
    MatlabCode,
    MatlabFile
  };

  /**
   * Constructor
   */
  explicit DataSourceType(DataSourceType::Type type);

  /**
   * Convert a C-string to a DataSourceType enum.
   */
  static Type FromString(const char* sldt);

  /**
   * Convert a DataSourceType enum to its string representation.
   */
  static const char* ToString(Type type);

private:
  Type InternalDataSourceType;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DATASOURCETYPE_H
