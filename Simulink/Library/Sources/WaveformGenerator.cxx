#include "WaveformGenerator.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

WaveformGenerator::WaveformGenerator() {}

WaveformGenerator::~WaveformGenerator() {}

const std::string& WaveformGenerator::GetOutmin() const { return m_Outmin; }

void WaveformGenerator::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& WaveformGenerator::GetOutmax() const { return m_Outmax; }

void WaveformGenerator::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& WaveformGenerator::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void WaveformGenerator::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& WaveformGenerator::GetLockscale() const
{
    return m_Lockscale;
}

void WaveformGenerator::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& WaveformGenerator::GetRndmeth() const { return m_Rndmeth; }

void WaveformGenerator::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& WaveformGenerator::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void WaveformGenerator::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& WaveformGenerator::GetSelectedsignal() const
{
    return m_Selectedsignal;
}

void WaveformGenerator::SetSelectedsignal(const std::string& value)
{
    m_Selectedsignal = value;
}

const std::string& WaveformGenerator::GetSampletime() const
{
    return m_Sampletime;
}

void WaveformGenerator::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
