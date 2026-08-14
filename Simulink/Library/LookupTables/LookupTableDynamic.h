// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LOOKUPTABLEDYNAMIC_H
#define LOOKUPTABLEDYNAMIC_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT LookupTableDynamic : public IBlockParameters,
                                           public IBlockProperties
{
public:
    /** Default Constructor */
    LookupTableDynamic();

    /** Default Destructor */
    ~LookupTableDynamic();

    const std::string& GetLookupmeth() const;
    void SetLookupmeth(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

    const std::string& GetDosatur() const;
    void SetDosatur(const std::string& value);

private:
    std::string m_Lookupmeth;

    std::string m_Outdatatypestr;

    std::string m_Lockscale;

    std::string m_Rndmeth;

    std::string m_Dosatur;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // LOOKUPTABLEDYNAMIC_H
