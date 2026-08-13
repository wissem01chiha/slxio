#include "Add.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Add::Add() {}

Add::~Add() {}

const std::string& Add::GetIconshape() const
{
    return m_Iconshape;
}

void Add::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Add::GetInputs() const
{
    return m_Inputs;
}

void Add::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Add::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Add::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Add::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Add::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Add::GetOutmin() const
{
    return m_Outmin;
}

void Add::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Add::GetOutmax() const
{
    return m_Outmax;
}

void Add::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Add::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Add::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Add::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Add::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Add::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Add::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Add::GetLockscale() const
{
    return m_Lockscale;
}

void Add::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Add::GetRndmeth() const
{
    return m_Rndmeth;
}

void Add::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Add::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Add::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Add::GetSampletime() const
{
    return m_Sampletime;
}

void Add::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
