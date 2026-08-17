// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATASOURCETYPE_H
#define DATASOURCETYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class DataSourceType
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

    explicit DataSourceType(DataSourceType::Type type);
    static Type FromString(const std::string& sldt);
    static std::string ToString(Type type);
    Type GetType() const;
    ~DataSourceType() = default;

private:
    Type m_type;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DATASOURCETYPE_H
