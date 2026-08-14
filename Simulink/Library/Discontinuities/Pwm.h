// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PWM_H
#define PWM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Pwm : public IBlockParameters, public IBlockProperties
{
public:
    /** Default Constructor */
    Pwm();

    /** Default Destructor */
    ~Pwm();

    const std::string& GetPeriod() const;
    void SetPeriod(const std::string& value);

    const std::string& GetInitialdelay() const;
    void SetInitialdelay(const std::string& value);

    const std::string& GetDisallowzerodutycycle() const;
    void SetDisallowzerodutycycle(const std::string& value);

    const std::string& GetRunatfixedtimeintervals() const;
    void SetRunatfixedtimeintervals(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Period;

    std::string m_Initialdelay;

    std::string m_Disallowzerodutycycle;

    std::string m_Runatfixedtimeintervals;

    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // PWM_H
