#include "RateLimiter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RateLimiter::RateLimiter() {}

RateLimiter::~RateLimiter() {}

const std::string& RateLimiter::GetRisingslewlimit() const
{
    return m_Risingslewlimit;
}

void RateLimiter::SetRisingslewlimit(const std::string& value)
{
    m_Risingslewlimit = value;
}

const std::string& RateLimiter::GetFallingslewlimit() const
{
    return m_Fallingslewlimit;
}

void RateLimiter::SetFallingslewlimit(const std::string& value)
{
    m_Fallingslewlimit = value;
}

const std::string& RateLimiter::GetSampletimemode() const
{
    return m_Sampletimemode;
}

void RateLimiter::SetSampletimemode(const std::string& value)
{
    m_Sampletimemode = value;
}

const std::string& RateLimiter::GetInitialcondition() const
{
    return m_Initialcondition;
}

void RateLimiter::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& RateLimiter::GetLinearizeasgain() const
{
    return m_Linearizeasgain;
}

void RateLimiter::SetLinearizeasgain(const std::string& value)
{
    m_Linearizeasgain = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
