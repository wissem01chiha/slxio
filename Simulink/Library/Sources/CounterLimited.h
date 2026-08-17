// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COUNTERLIMITED_H
#define COUNTERLIMITED_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT CounterLimited : public IBlockParameters,
                                       public IBlockProperties
{
public:
    /** Default Constructor */
    CounterLimited();

    /** Default Destructor */
    ~CounterLimited();

    const std::string& GetUplimit() const;
    void SetUplimit(const std::string& value);

    const std::string& GetTsamp() const;
    void SetTsamp(const std::string& value);

private:
    std::string m_Uplimit;

    std::string m_Tsamp;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // COUNTERLIMITED_H
