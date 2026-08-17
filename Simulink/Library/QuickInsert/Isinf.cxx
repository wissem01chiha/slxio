#include "Isinf.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Isinf::Isinf() {}

Isinf::~Isinf() {}

const std::string& Isinf::GetOperator() const { return m_Operator; }

void Isinf::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Isinf::GetInputsamedt() const { return m_Inputsamedt; }

void Isinf::SetInputsamedt(const std::string& value) { m_Inputsamedt = value; }

const std::string& Isinf::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Isinf::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Isinf::GetZerocross() const { return m_Zerocross; }

void Isinf::SetZerocross(const std::string& value) { m_Zerocross = value; }

const std::string& Isinf::GetSampletime() const { return m_Sampletime; }

void Isinf::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Isinf::GetRndmeth() const { return m_Rndmeth; }

void Isinf::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
