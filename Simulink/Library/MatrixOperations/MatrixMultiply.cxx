#include "MatrixMultiply.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

MatrixMultiply::MatrixMultiply() {}

MatrixMultiply::~MatrixMultiply() {}

const std::string& MatrixMultiply::GetInputs() const { return m_Inputs; }

void MatrixMultiply::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& MatrixMultiply::GetMultiplication() const
{
    return m_Multiplication;
}

void MatrixMultiply::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& MatrixMultiply::GetCollapsemode() const
{
    return m_Collapsemode;
}

void MatrixMultiply::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& MatrixMultiply::GetCollapsedim() const
{
    return m_Collapsedim;
}

void MatrixMultiply::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& MatrixMultiply::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void MatrixMultiply::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& MatrixMultiply::GetOutmin() const { return m_Outmin; }

void MatrixMultiply::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& MatrixMultiply::GetOutmax() const { return m_Outmax; }

void MatrixMultiply::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& MatrixMultiply::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MatrixMultiply::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MatrixMultiply::GetLockscale() const { return m_Lockscale; }

void MatrixMultiply::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& MatrixMultiply::GetRndmeth() const { return m_Rndmeth; }

void MatrixMultiply::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& MatrixMultiply::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void MatrixMultiply::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& MatrixMultiply::GetSampletime() const
{
    return m_Sampletime;
}

void MatrixMultiply::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
