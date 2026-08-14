#include "Step.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Step::Step() {}

Step::~Step() {}

const std::string& Step::GetTime() const { return m_Time; }

void Step::SetTime(const std::string& value) { m_Time = value; }

const std::string& Step::GetBefore() const { return m_Before; }

void Step::SetBefore(const std::string& value) { m_Before = value; }

const std::string& Step::GetAfter() const { return m_After; }

void Step::SetAfter(const std::string& value) { m_After = value; }

const std::string& Step::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Step::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Step::GetSampletime() const { return m_Sampletime; }

void Step::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Step::GetVectorparams1d() const { return m_Vectorparams1d; }

void Step::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Step::GetZerocross() const { return m_Zerocross; }

void Step::SetZerocross(const std::string& value) { m_Zerocross = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
