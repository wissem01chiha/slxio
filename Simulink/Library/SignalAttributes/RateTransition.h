// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RATETRANSITION_H
#define RATETRANSITION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT RateTransition : public IBlockParameters,
                                       public IBlockProperties
{
public:
    /** Default Constructor */
    RateTransition();

    /** Default Destructor */
    ~RateTransition();

    const std::string& GetIntegrity() const;
    void SetIntegrity(const std::string& value);

    const std::string& GetDeterministic() const;
    void SetDeterministic(const std::string& value);

    const std::string& GetInitialcondition() const;
    void SetInitialcondition(const std::string& value);

    const std::string& GetOutportsampletimeopt() const;
    void SetOutportsampletimeopt(const std::string& value);

    const std::string& GetOutportsampletimemultiple() const;
    void SetOutportsampletimemultiple(const std::string& value);

    const std::string& GetOutportsampletime() const;
    void SetOutportsampletime(const std::string& value);

private:
    std::string m_Integrity;

    std::string m_Deterministic;

    std::string m_Initialcondition;

    std::string m_Outportsampletimeopt;

    std::string m_Outportsampletimemultiple;

    std::string m_Outportsampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RATETRANSITION_H
