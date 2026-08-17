// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTERVALTEST_H
#define INTERVALTEST_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IntervalTest : public IBlockParameters,
                                     public IBlockProperties
{
public:
    /** Default Constructor */
    IntervalTest();

    /** Default Destructor */
    ~IntervalTest();

    const std::string& GetIntervalclosedright() const;
    void SetIntervalclosedright(const std::string& value);

    const std::string& GetUplimit() const;
    void SetUplimit(const std::string& value);

    const std::string& GetIntervalclosedleft() const;
    void SetIntervalclosedleft(const std::string& value);

    const std::string& GetLowlimit() const;
    void SetLowlimit(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

private:
    std::string m_Intervalclosedright;

    std::string m_Uplimit;

    std::string m_Intervalclosedleft;

    std::string m_Lowlimit;

    std::string m_Outdatatypestr;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // INTERVALTEST_H
