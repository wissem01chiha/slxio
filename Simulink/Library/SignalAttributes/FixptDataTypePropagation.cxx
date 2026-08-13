#include "FixptDataTypePropagation.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptDataTypePropagation::FixptDataTypePropagation() {}

FixptDataTypePropagation::~FixptDataTypePropagation() {}

const std::string& FixptDataTypePropagation::GetPropdatatypemode() const
{
    return m_Propdatatypemode;
}

void FixptDataTypePropagation::SetPropdatatypemode(const std::string& value)
{
    m_Propdatatypemode = value;
}

const std::string& FixptDataTypePropagation::GetPropdatatype() const
{
    return m_Propdatatype;
}

void FixptDataTypePropagation::SetPropdatatype(const std::string& value)
{
    m_Propdatatype = value;
}

const std::string& FixptDataTypePropagation::GetIfrefdouble() const
{
    return m_Ifrefdouble;
}

void FixptDataTypePropagation::SetIfrefdouble(const std::string& value)
{
    m_Ifrefdouble = value;
}

const std::string& FixptDataTypePropagation::GetIfrefsingle() const
{
    return m_Ifrefsingle;
}

void FixptDataTypePropagation::SetIfrefsingle(const std::string& value)
{
    m_Ifrefsingle = value;
}

const std::string& FixptDataTypePropagation::GetIssigned() const
{
    return m_Issigned;
}

void FixptDataTypePropagation::SetIssigned(const std::string& value)
{
    m_Issigned = value;
}

const std::string& FixptDataTypePropagation::GetNumbitsbase() const
{
    return m_Numbitsbase;
}

void FixptDataTypePropagation::SetNumbitsbase(const std::string& value)
{
    m_Numbitsbase = value;
}

const std::string& FixptDataTypePropagation::GetNumbitsmult() const
{
    return m_Numbitsmult;
}

void FixptDataTypePropagation::SetNumbitsmult(const std::string& value)
{
    m_Numbitsmult = value;
}

const std::string& FixptDataTypePropagation::GetNumbitsadd() const
{
    return m_Numbitsadd;
}

void FixptDataTypePropagation::SetNumbitsadd(const std::string& value)
{
    m_Numbitsadd = value;
}

const std::string& FixptDataTypePropagation::GetNumbitsallowfinal() const
{
    return m_Numbitsallowfinal;
}

void FixptDataTypePropagation::SetNumbitsallowfinal(const std::string& value)
{
    m_Numbitsallowfinal = value;
}

const std::string& FixptDataTypePropagation::GetPropscalingmode() const
{
    return m_Propscalingmode;
}

void FixptDataTypePropagation::SetPropscalingmode(const std::string& value)
{
    m_Propscalingmode = value;
}

const std::string& FixptDataTypePropagation::GetPropscaling() const
{
    return m_Propscaling;
}

void FixptDataTypePropagation::SetPropscaling(const std::string& value)
{
    m_Propscaling = value;
}

const std::string& FixptDataTypePropagation::GetValuesusedbestprec() const
{
    return m_Valuesusedbestprec;
}

void FixptDataTypePropagation::SetValuesusedbestprec(const std::string& value)
{
    m_Valuesusedbestprec = value;
}

const std::string& FixptDataTypePropagation::GetSlopebase() const
{
    return m_Slopebase;
}

void FixptDataTypePropagation::SetSlopebase(const std::string& value)
{
    m_Slopebase = value;
}

const std::string& FixptDataTypePropagation::GetSlopemult() const
{
    return m_Slopemult;
}

void FixptDataTypePropagation::SetSlopemult(const std::string& value)
{
    m_Slopemult = value;
}

const std::string& FixptDataTypePropagation::GetSlopeadd() const
{
    return m_Slopeadd;
}

void FixptDataTypePropagation::SetSlopeadd(const std::string& value)
{
    m_Slopeadd = value;
}

const std::string& FixptDataTypePropagation::GetBiasbase() const
{
    return m_Biasbase;
}

void FixptDataTypePropagation::SetBiasbase(const std::string& value)
{
    m_Biasbase = value;
}

const std::string& FixptDataTypePropagation::GetBiasmult() const
{
    return m_Biasmult;
}

void FixptDataTypePropagation::SetBiasmult(const std::string& value)
{
    m_Biasmult = value;
}

const std::string& FixptDataTypePropagation::GetBiasadd() const
{
    return m_Biasadd;
}

void FixptDataTypePropagation::SetBiasadd(const std::string& value)
{
    m_Biasadd = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
