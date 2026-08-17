// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef HITCROSSING_H
#define HITCROSSING_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT HitCrossing : public IBlockParameters,
                                    public IBlockProperties
{
public:
    /** Default Constructor */
    HitCrossing();

    /** Default Destructor */
    ~HitCrossing();

    const std::string& GetHitcrossingoffset() const;
    void SetHitcrossingoffset(const std::string& value);

    const std::string& GetHitcrossingdirection() const;
    void SetHitcrossingdirection(const std::string& value);

    const std::string& GetShowoutputport() const;
    void SetShowoutputport(const std::string& value);

    const std::string& GetHitcrossingoutputtype() const;
    void SetHitcrossingoutputtype(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Hitcrossingoffset;

    std::string m_Hitcrossingdirection;

    std::string m_Showoutputport;

    std::string m_Hitcrossingoutputtype;

    std::string m_Zerocross;

    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // HITCROSSING_H
