#include "Isnan.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Isnan::Isnan() {}

Isnan::~Isnan() {}

const std::string& Isnan::GetOperator() const { return m_Operator; }

void Isnan::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Isnan::GetInputsamedt() const { return m_Inputsamedt; }

void Isnan::SetInputsamedt(const std::string& value) { m_Inputsamedt = value; }

const std::string& Isnan::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Isnan::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Isnan::GetZerocross() const { return m_Zerocross; }

void Isnan::SetZerocross(const std::string& value) { m_Zerocross = value; }

const std::string& Isnan::GetSampletime() const { return m_Sampletime; }

void Isnan::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Isnan::GetRndmeth() const { return m_Rndmeth; }

void Isnan::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
