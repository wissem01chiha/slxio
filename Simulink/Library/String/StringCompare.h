// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STRINGCOMPARE_H
#define STRINGCOMPARE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StringCompare : public IBlockParameters,
                                      public IBlockProperties
{
public:
    /** Default Constructor */
    StringCompare();

    /** Default Destructor */
    ~StringCompare();

    const std::string& GetCasesensitive() const;
    void SetCasesensitive(const std::string& value);

    const std::string& GetCompareoption() const;
    void SetCompareoption(const std::string& value);

    const std::string& GetNumberofcharacters() const;
    void SetNumberofcharacters(const std::string& value);

private:
    std::string m_Casesensitive;

    std::string m_Compareoption;

    std::string m_Numberofcharacters;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STRINGCOMPARE_H
