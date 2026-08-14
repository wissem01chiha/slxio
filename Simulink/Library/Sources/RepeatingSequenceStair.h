// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef REPEATINGSEQUENCESTAIR_H
#define REPEATINGSEQUENCESTAIR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT RepeatingSequenceStair : public IBlockParameters,
                                               public IBlockProperties
{
public:
    /** Default Constructor */
    RepeatingSequenceStair();

    /** Default Destructor */
    ~RepeatingSequenceStair();

    const std::string& GetOutvalues() const;
    void SetOutvalues(const std::string& value);

    const std::string& GetTsamp() const;
    void SetTsamp(const std::string& value);

    const std::string& GetOutmin() const;
    void SetOutmin(const std::string& value);

    const std::string& GetOutmax() const;
    void SetOutmax(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

private:
    std::string m_Outvalues;

    std::string m_Tsamp;

    std::string m_Outmin;

    std::string m_Outmax;

    std::string m_Outdatatypestr;

    std::string m_Lockscale;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // REPEATINGSEQUENCESTAIR_H
