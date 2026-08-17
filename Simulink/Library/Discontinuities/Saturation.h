// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SATURATION_H
#define SATURATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Saturation : public IBlockParameters,
                                   public IBlockProperties
{
public:
    /** Default Constructor */
    Saturation();

    /** Default Destructor */
    ~Saturation();

    const std::string& GetUpperlimit() const;
    void SetUpperlimit(const std::string& value);

    const std::string& GetLowerlimit() const;
    void SetLowerlimit(const std::string& value);

    const std::string& GetLinearizeasgain() const;
    void SetLinearizeasgain(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetOutmin() const;
    void SetOutmin(const std::string& value);

    const std::string& GetOutmax() const;
    void SetOutmax(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

private:
    std::string m_Upperlimit;

    std::string m_Lowerlimit;

    std::string m_Linearizeasgain;

    std::string m_Zerocross;

    std::string m_Sampletime;

    std::string m_Outmin;

    std::string m_Outmax;

    std::string m_Outdatatypestr;

    std::string m_Lockscale;

    std::string m_Rndmeth;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SATURATION_H
