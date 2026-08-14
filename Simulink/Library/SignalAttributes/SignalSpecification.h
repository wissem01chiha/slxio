// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIGNALSPECIFICATION_H
#define SIGNALSPECIFICATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SignalSpecification : public IBlockParameters,
                                            public IBlockProperties
{
public:
    /** Default Constructor */
    SignalSpecification();

    /** Default Destructor */
    ~SignalSpecification();

    const std::string& GetOutmin() const;
    void SetOutmin(const std::string& value);

    const std::string& GetOutmax() const;
    void SetOutmax(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

    const std::string& GetBusoutputasstruct() const;
    void SetBusoutputasstruct(const std::string& value);

    const std::string& GetUnit() const;
    void SetUnit(const std::string& value);

    const std::string& GetDimensions() const;
    void SetDimensions(const std::string& value);

    const std::string& GetVarsizesig() const;
    void SetVarsizesig(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetSignaltype() const;
    void SetSignaltype(const std::string& value);

private:
    std::string m_Outmin;

    std::string m_Outmax;

    std::string m_Outdatatypestr;

    std::string m_Lockscale;

    std::string m_Busoutputasstruct;

    std::string m_Unit;

    std::string m_Dimensions;

    std::string m_Varsizesig;

    std::string m_Sampletime;

    std::string m_Signaltype;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIGNALSPECIFICATION_H
