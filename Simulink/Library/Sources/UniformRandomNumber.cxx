#include "UniformRandomNumber.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

UniformRandomNumber::UniformRandomNumber() {}

UniformRandomNumber::~UniformRandomNumber() {}

const std::string& UniformRandomNumber::GetMinimum() const { return m_Minimum; }

void UniformRandomNumber::SetMinimum(const std::string& value)
{
    m_Minimum = value;
}

const std::string& UniformRandomNumber::GetMaximum() const { return m_Maximum; }

void UniformRandomNumber::SetMaximum(const std::string& value)
{
    m_Maximum = value;
}

const std::string& UniformRandomNumber::GetSeed() const { return m_Seed; }

void UniformRandomNumber::SetSeed(const std::string& value) { m_Seed = value; }

const std::string& UniformRandomNumber::GetSampletime() const
{
    return m_Sampletime;
}

void UniformRandomNumber::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& UniformRandomNumber::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void UniformRandomNumber::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
