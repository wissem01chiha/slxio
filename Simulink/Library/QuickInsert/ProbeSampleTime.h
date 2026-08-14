// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PROBESAMPLETIME_H
#define PROBESAMPLETIME_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ProbeSampleTime : public IBlockParameters,
                                        public IBlockProperties
{
public:
    /** Default Constructor */
    ProbeSampleTime();

    /** Default Destructor */
    ~ProbeSampleTime();

    const std::string& GetProbewidth() const;
    void SetProbewidth(const std::string& value);

    const std::string& GetProbesampletime() const;
    void SetProbesampletime(const std::string& value);

    const std::string& GetProbecomplexsignal() const;
    void SetProbecomplexsignal(const std::string& value);

    const std::string& GetProbesignaldimensions() const;
    void SetProbesignaldimensions(const std::string& value);

    const std::string& GetProbewidthdatatype() const;
    void SetProbewidthdatatype(const std::string& value);

    const std::string& GetProbesampletimedatatype() const;
    void SetProbesampletimedatatype(const std::string& value);

    const std::string& GetProbecomplexitydatatype() const;
    void SetProbecomplexitydatatype(const std::string& value);

    const std::string& GetProbedimensionsdatatype() const;
    void SetProbedimensionsdatatype(const std::string& value);

private:
    std::string m_Probewidth;

    std::string m_Probesampletime;

    std::string m_Probecomplexsignal;

    std::string m_Probesignaldimensions;

    std::string m_Probewidthdatatype;

    std::string m_Probesampletimedatatype;

    std::string m_Probecomplexitydatatype;

    std::string m_Probedimensionsdatatype;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // PROBESAMPLETIME_H
