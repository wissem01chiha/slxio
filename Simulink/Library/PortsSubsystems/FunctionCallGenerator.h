// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FUNCTIONCALLGENERATOR_H
#define FUNCTIONCALLGENERATOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FunctionCallGenerator : public IBlockParameters,
                                              public IBlockProperties
{
public:
    /** Default Constructor */
    FunctionCallGenerator();

    /** Default Destructor */
    ~FunctionCallGenerator();

    const std::string& GetSampleTime() const;
    void SetSampleTime(const std::string& value);

    const std::string& GetNumberofiterations() const;
    void SetNumberofiterations(const std::string& value);

    const std::string& GetDisallowwideoutput() const;
    void SetDisallowwideoutput(const std::string& value);

    const std::string& GetShowenableport() const;
    void SetShowenableport(const std::string& value);

private:
    std::string m_SampleTime;

    std::string m_Numberofiterations;

    std::string m_Disallowwideoutput;

    std::string m_Showenableport;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FUNCTIONCALLGENERATOR_H
