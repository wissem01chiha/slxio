// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PLAYBACK_H
#define PLAYBACK_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Playback : public IBlockParameters,
                                 public IBlockProperties
{
public:
    /** Default Constructor */
    Playback();

    /** Default Destructor */
    ~Playback();

    const std::string& GetNumports() const;
    void SetNumports(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetPortunits() const;
    void SetPortunits(const std::string& value);

    const std::string& GetPortdimensions() const;
    void SetPortdimensions(const std::string& value);

    const std::string& GetPortdimsmodes() const;
    void SetPortdimsmodes(const std::string& value);

    const std::string& GetPortcomplexity() const;
    void SetPortcomplexity(const std::string& value);

    const std::string& GetPortsampletimes() const;
    void SetPortsampletimes(const std::string& value);

    const std::string& GetGroupby() const;
    void SetGroupby(const std::string& value);

    const std::string& GetExtrapolationbeforefirstdatapoint() const;
    void SetExtrapolationbeforefirstdatapoint(const std::string& value);

    const std::string& GetExtrapolationafterlastdatapoint() const;
    void SetExtrapolationafterlastdatapoint(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetSignals() const;
    void SetSignals(const std::string& value);

private:
    std::string m_Numports;

    std::string m_Outdatatypestr;

    std::string m_Portunits;

    std::string m_Portdimensions;

    std::string m_Portdimsmodes;

    std::string m_Portcomplexity;

    std::string m_Portsampletimes;

    std::string m_Groupby;

    std::string m_Extrapolationbeforefirstdatapoint;

    std::string m_Extrapolationafterlastdatapoint;

    std::string m_Zerocross;

    std::string m_Signals;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // PLAYBACK_H
