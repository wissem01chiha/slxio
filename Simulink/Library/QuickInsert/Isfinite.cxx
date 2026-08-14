#include "Isfinite.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Isfinite::Isfinite() {}

Isfinite::~Isfinite() {}

const std::string& Isfinite::GetOperator() const { return m_Operator; }

void Isfinite::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Isfinite::GetInputsamedt() const { return m_Inputsamedt; }

void Isfinite::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Isfinite::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Isfinite::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Isfinite::GetZerocross() const { return m_Zerocross; }

void Isfinite::SetZerocross(const std::string& value) { m_Zerocross = value; }

const std::string& Isfinite::GetSampletime() const { return m_Sampletime; }

void Isfinite::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Isfinite::GetRndmeth() const { return m_Rndmeth; }

void Isfinite::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
