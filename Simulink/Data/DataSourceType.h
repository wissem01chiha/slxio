// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATASOURCETYPE_H
#define DATASOURCETYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

enum class APIEXPORT DataSourceType
{
  ModelFile,
  MatFile,
  MatlabCode,
  MatlabFile
};

/// @brief Convert a C-string to a DataSourceType enum
DataSourceType toDataSourceType(const char* sldt);

/// @brief Convert a DataSourceType enum to its string representation
const char* toChar(DataSourceType sldst);

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DATASOURCETYPE_H