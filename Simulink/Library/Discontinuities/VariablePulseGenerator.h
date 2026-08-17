// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VARIABLEPULSEGENERATOR_H
#define VARIABLEPULSEGENERATOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT VariablePulseGenerator : public IBlockParameters,
                                               public IBlockProperties
{
public:
    /** Default Constructor */
    VariablePulseGenerator();

    /** Default Destructor */
    ~VariablePulseGenerator();

    const std::string& GetAllowzeropulsewidth() const;
    void SetAllowzeropulsewidth(const std::string& value);

    const std::string& GetRunatfixedtimeintervals() const;
    void SetRunatfixedtimeintervals(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Allowzeropulsewidth;

    std::string m_Runatfixedtimeintervals;

    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // VARIABLEPULSEGENERATOR_H
