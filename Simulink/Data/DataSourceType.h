// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DataSourceType_h
#define DataSourceType_h

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class DataSourceType
 * @brief
 */
class APIEXPORT DataSourceType
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
SLXIO_NAMESPACE_END

#endif // DataSourceType_h
