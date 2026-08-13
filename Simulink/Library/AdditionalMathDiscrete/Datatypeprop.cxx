#include "Datatypeprop.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Datatypeprop::Datatypeprop() {}

Datatypeprop::~Datatypeprop() {}

const std::string& Datatypeprop::GetPropdatatypemode() const
{
    return m_Propdatatypemode;
}

void Datatypeprop::SetPropdatatypemode(const std::string& value)
{
    m_Propdatatypemode = value;
}

const std::string& Datatypeprop::GetPropdatatype() const
{
    return m_Propdatatype;
}

void Datatypeprop::SetPropdatatype(const std::string& value)
{
    m_Propdatatype = value;
}

const std::string& Datatypeprop::GetIfrefdouble() const
{
    return m_Ifrefdouble;
}

void Datatypeprop::SetIfrefdouble(const std::string& value)
{
    m_Ifrefdouble = value;
}

const std::string& Datatypeprop::GetIfrefsingle() const
{
    return m_Ifrefsingle;
}

void Datatypeprop::SetIfrefsingle(const std::string& value)
{
    m_Ifrefsingle = value;
}

const std::string& Datatypeprop::GetIssigned() const
{
    return m_Issigned;
}

void Datatypeprop::SetIssigned(const std::string& value)
{
    m_Issigned = value;
}

const std::string& Datatypeprop::GetNumbitsbase() const
{
    return m_Numbitsbase;
}

void Datatypeprop::SetNumbitsbase(const std::string& value)
{
    m_Numbitsbase = value;
}

const std::string& Datatypeprop::GetNumbitsmult() const
{
    return m_Numbitsmult;
}

void Datatypeprop::SetNumbitsmult(const std::string& value)
{
    m_Numbitsmult = value;
}

const std::string& Datatypeprop::GetNumbitsadd() const
{
    return m_Numbitsadd;
}

void Datatypeprop::SetNumbitsadd(const std::string& value)
{
    m_Numbitsadd = value;
}

const std::string& Datatypeprop::GetNumbitsallowfinal() const
{
    return m_Numbitsallowfinal;
}

void Datatypeprop::SetNumbitsallowfinal(const std::string& value)
{
    m_Numbitsallowfinal = value;
}

const std::string& Datatypeprop::GetPropscalingmode() const
{
    return m_Propscalingmode;
}

void Datatypeprop::SetPropscalingmode(const std::string& value)
{
    m_Propscalingmode = value;
}

const std::string& Datatypeprop::GetPropscaling() const
{
    return m_Propscaling;
}

void Datatypeprop::SetPropscaling(const std::string& value)
{
    m_Propscaling = value;
}

const std::string& Datatypeprop::GetValuesusedbestprec() const
{
    return m_Valuesusedbestprec;
}

void Datatypeprop::SetValuesusedbestprec(const std::string& value)
{
    m_Valuesusedbestprec = value;
}

const std::string& Datatypeprop::GetSlopebase() const
{
    return m_Slopebase;
}

void Datatypeprop::SetSlopebase(const std::string& value)
{
    m_Slopebase = value;
}

const std::string& Datatypeprop::GetSlopemult() const
{
    return m_Slopemult;
}

void Datatypeprop::SetSlopemult(const std::string& value)
{
    m_Slopemult = value;
}

const std::string& Datatypeprop::GetSlopeadd() const
{
    return m_Slopeadd;
}

void Datatypeprop::SetSlopeadd(const std::string& value)
{
    m_Slopeadd = value;
}

const std::string& Datatypeprop::GetBiasbase() const
{
    return m_Biasbase;
}

void Datatypeprop::SetBiasbase(const std::string& value)
{
    m_Biasbase = value;
}

const std::string& Datatypeprop::GetBiasmult() const
{
    return m_Biasmult;
}

void Datatypeprop::SetBiasmult(const std::string& value)
{
    m_Biasmult = value;
}

const std::string& Datatypeprop::GetBiasadd() const
{
    return m_Biasadd;
}

void Datatypeprop::SetBiasadd(const std::string& value)
{
    m_Biasadd = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
