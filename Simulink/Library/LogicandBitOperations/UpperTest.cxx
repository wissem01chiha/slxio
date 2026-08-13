#include "UpperTest.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UpperTest::UpperTest() {}

UpperTest::~UpperTest() {}

const std::string& UpperTest::GetOperator() const
{
    return m_Operator;
}

void UpperTest::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& UpperTest::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void UpperTest::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& UpperTest::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void UpperTest::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& UpperTest::GetZerocross() const
{
    return m_Zerocross;
}

void UpperTest::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& UpperTest::GetSampletime() const
{
    return m_Sampletime;
}

void UpperTest::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& UpperTest::GetRndmeth() const
{
    return m_Rndmeth;
}

void UpperTest::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
