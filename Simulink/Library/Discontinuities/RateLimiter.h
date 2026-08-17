// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RATELIMITER_H
#define RATELIMITER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT RateLimiter : public IBlockParameters,
                                    public IBlockProperties
{
public:
    /** Default Constructor */
    RateLimiter();

    /** Default Destructor */
    ~RateLimiter();

    const std::string& GetRisingslewlimit() const;
    void SetRisingslewlimit(const std::string& value);

    const std::string& GetFallingslewlimit() const;
    void SetFallingslewlimit(const std::string& value);

    const std::string& GetSampletimemode() const;
    void SetSampletimemode(const std::string& value);

    const std::string& GetInitialcondition() const;
    void SetInitialcondition(const std::string& value);

    const std::string& GetLinearizeasgain() const;
    void SetLinearizeasgain(const std::string& value);

private:
    std::string m_Risingslewlimit;

    std::string m_Fallingslewlimit;

    std::string m_Sampletimemode;

    std::string m_Initialcondition;

    std::string m_Linearizeasgain;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RATELIMITER_H
