// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BACKLASH_H
#define BACKLASH_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Backlash : public IBlockParameters,
                                 public IBlockProperties
{
public:
    /** Default Constructor */
    Backlash();

    /** Default Destructor */
    ~Backlash();

    const std::string& GetBacklashwidth() const;
    void SetBacklashwidth(const std::string& value);

    const std::string& GetInitialoutput() const;
    void SetInitialoutput(const std::string& value);

    const std::string& GetInputprocessing() const;
    void SetInputprocessing(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Backlashwidth;

    std::string m_Initialoutput;

    std::string m_Inputprocessing;

    std::string m_Zerocross;

    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BACKLASH_H
