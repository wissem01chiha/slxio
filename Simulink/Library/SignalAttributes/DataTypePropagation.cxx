#include "DataTypePropagation.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataTypePropagation::DataTypePropagation() {}

DataTypePropagation::~DataTypePropagation() {}

const std::string& DataTypePropagation::GetPropdatatypemode() const
{
  return m_Propdatatypemode;
}

void DataTypePropagation::SetPropdatatypemode(const std::string& value)
{
  m_Propdatatypemode = value;
}

const std::string& DataTypePropagation::GetPropdatatype() const
{
  return m_Propdatatype;
}

void DataTypePropagation::SetPropdatatype(const std::string& value)
{
  m_Propdatatype = value;
}

const std::string& DataTypePropagation::GetIfrefdouble() const
{
  return m_Ifrefdouble;
}

void DataTypePropagation::SetIfrefdouble(const std::string& value)
{
  m_Ifrefdouble = value;
}

const std::string& DataTypePropagation::GetIfrefsingle() const
{
  return m_Ifrefsingle;
}

void DataTypePropagation::SetIfrefsingle(const std::string& value)
{
  m_Ifrefsingle = value;
}

const std::string& DataTypePropagation::GetIssigned() const
{
  return m_Issigned;
}

void DataTypePropagation::SetIssigned(const std::string& value)
{
  m_Issigned = value;
}

const std::string& DataTypePropagation::GetNumbitsbase() const
{
  return m_Numbitsbase;
}

void DataTypePropagation::SetNumbitsbase(const std::string& value)
{
  m_Numbitsbase = value;
}

const std::string& DataTypePropagation::GetNumbitsmult() const
{
  return m_Numbitsmult;
}

void DataTypePropagation::SetNumbitsmult(const std::string& value)
{
  m_Numbitsmult = value;
}

const std::string& DataTypePropagation::GetNumbitsadd() const
{
  return m_Numbitsadd;
}

void DataTypePropagation::SetNumbitsadd(const std::string& value)
{
  m_Numbitsadd = value;
}

const std::string& DataTypePropagation::GetNumbitsallowfinal() const
{
  return m_Numbitsallowfinal;
}

void DataTypePropagation::SetNumbitsallowfinal(const std::string& value)
{
  m_Numbitsallowfinal = value;
}

const std::string& DataTypePropagation::GetPropscalingmode() const
{
  return m_Propscalingmode;
}

void DataTypePropagation::SetPropscalingmode(const std::string& value)
{
  m_Propscalingmode = value;
}

const std::string& DataTypePropagation::GetPropscaling() const
{
  return m_Propscaling;
}

void DataTypePropagation::SetPropscaling(const std::string& value)
{
  m_Propscaling = value;
}

const std::string& DataTypePropagation::GetValuesusedbestprec() const
{
  return m_Valuesusedbestprec;
}

void DataTypePropagation::SetValuesusedbestprec(const std::string& value)
{
  m_Valuesusedbestprec = value;
}

const std::string& DataTypePropagation::GetSlopebase() const
{
  return m_Slopebase;
}

void DataTypePropagation::SetSlopebase(const std::string& value)
{
  m_Slopebase = value;
}

const std::string& DataTypePropagation::GetSlopemult() const
{
  return m_Slopemult;
}

void DataTypePropagation::SetSlopemult(const std::string& value)
{
  m_Slopemult = value;
}

const std::string& DataTypePropagation::GetSlopeadd() const
{
  return m_Slopeadd;
}

void DataTypePropagation::SetSlopeadd(const std::string& value)
{
  m_Slopeadd = value;
}

const std::string& DataTypePropagation::GetBiasbase() const
{
  return m_Biasbase;
}

void DataTypePropagation::SetBiasbase(const std::string& value)
{
  m_Biasbase = value;
}

const std::string& DataTypePropagation::GetBiasmult() const
{
  return m_Biasmult;
}

void DataTypePropagation::SetBiasmult(const std::string& value)
{
  m_Biasmult = value;
}

const std::string& DataTypePropagation::GetBiasadd() const
{
  return m_Biasadd;
}

void DataTypePropagation::SetBiasadd(const std::string& value)
{
  m_Biasadd = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
