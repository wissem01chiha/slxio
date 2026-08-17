// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MIN_H
#define MIN_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Min : public IBlockParameters, public IBlockProperties
{
public:
    /** Default Constructor */
    Min();

    /** Default Destructor */
    ~Min();

    const std::string& GetFunction() const;
    void SetFunction(const std::string& value);

    const std::string& GetInputs() const;
    void SetInputs(const std::string& value);

    const std::string& GetInputsamedt() const;
    void SetInputsamedt(const std::string& value);

    const std::string& GetCollapsemode() const;
    void SetCollapsemode(const std::string& value);

    const std::string& GetCollapsedim() const;
    void SetCollapsedim(const std::string& value);

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

    const std::string& GetSaturateonintegeroverflow() const;
    void SetSaturateonintegeroverflow(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Function;

    std::string m_Inputs;

    std::string m_Inputsamedt;

    std::string m_Collapsemode;

    std::string m_Collapsedim;

    std::string m_Outmin;

    std::string m_Outmax;

    std::string m_Outdatatypestr;

    std::string m_Lockscale;

    std::string m_Rndmeth;

    std::string m_Saturateonintegeroverflow;

    std::string m_Zerocross;

    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MIN_H
