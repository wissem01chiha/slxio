#include "BitToIntegerConverter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitToIntegerConverter::BitToIntegerConverter() {}

BitToIntegerConverter::~BitToIntegerConverter() {}

const std::string& BitToIntegerConverter::GetNbits() const
{
  return m_Nbits;
}

void BitToIntegerConverter::SetNbits(const std::string& value)
{
  m_Nbits = value;
}

const std::string& BitToIntegerConverter::GetBitorder() const
{
  return m_Bitorder;
}

void BitToIntegerConverter::SetBitorder(const std::string& value)
{
  m_Bitorder = value;
}

const std::string& BitToIntegerConverter::GetSignedoutputvalues() const
{
  return m_Signedoutputvalues;
}

void BitToIntegerConverter::SetSignedoutputvalues(const std::string& value)
{
  m_Signedoutputvalues = value;
}

const std::string& BitToIntegerConverter::GetOutdtype() const
{
  return m_Outdtype;
}

void BitToIntegerConverter::SetOutdtype(const std::string& value)
{
  m_Outdtype = value;
}

const std::string& BitToIntegerConverter::GetOutdtypesigned() const
{
  return m_Outdtypesigned;
}

void BitToIntegerConverter::SetOutdtypesigned(const std::string& value)
{
  m_Outdtypesigned = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
