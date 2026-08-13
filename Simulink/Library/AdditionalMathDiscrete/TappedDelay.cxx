#include "TappedDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TappedDelay::TappedDelay() {}

TappedDelay::~TappedDelay() {}

const std::string& TappedDelay::GetVinit() const
{
    return m_Vinit;
}

void TappedDelay::SetVinit(const std::string& value)
{
    m_Vinit = value;
}

const std::string& TappedDelay::GetSamptime() const
{
    return m_Samptime;
}

void TappedDelay::SetSamptime(const std::string& value)
{
    m_Samptime = value;
}

const std::string& TappedDelay::GetNumdelays() const
{
    return m_Numdelays;
}

void TappedDelay::SetNumdelays(const std::string& value)
{
    m_Numdelays = value;
}

const std::string& TappedDelay::GetDelayorder() const
{
    return m_Delayorder;
}

void TappedDelay::SetDelayorder(const std::string& value)
{
    m_Delayorder = value;
}

const std::string& TappedDelay::GetIncludecurrent() const
{
    return m_Includecurrent;
}

void TappedDelay::SetIncludecurrent(const std::string& value)
{
    m_Includecurrent = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
