// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STEP_H
#define STEP_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Step : public IBlockParameters, public IBlockProperties
{
public:
    /** Default Constructor */
    Step();

    /** Default Destructor */
    ~Step();

    const std::string& GetTime() const;
    void SetTime(const std::string& value);

    const std::string& GetBefore() const;
    void SetBefore(const std::string& value);

    const std::string& GetAfter() const;
    void SetAfter(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetVectorparams1d() const;
    void SetVectorparams1d(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

private:
    std::string m_Time;

    std::string m_Before;

    std::string m_After;

    std::string m_Outdatatypestr;

    std::string m_Sampletime;

    std::string m_Vectorparams1d;

    std::string m_Zerocross;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STEP_H
