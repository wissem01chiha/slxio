// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SUBSTRING_H
#define SUBSTRING_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Substring : public IBlockParameters,
                                  public IBlockProperties
{
public:
    /** Default Constructor */
    Substring();

    /** Default Destructor */
    ~Substring();

    const std::string& GetInheritmaximumlength() const;
    void SetInheritmaximumlength(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetStringfromidxtoend() const;
    void SetStringfromidxtoend(const std::string& value);

private:
    std::string m_Inheritmaximumlength;

    std::string m_Outdatatypestr;

    std::string m_Stringfromidxtoend;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SUBSTRING_H
