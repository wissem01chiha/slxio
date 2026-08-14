#include "ExtractBits.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ExtractBits::ExtractBits() {}

ExtractBits::~ExtractBits() {}

const std::string& ExtractBits::GetBitstoextract() const
{
  return m_Bitstoextract;
}

void ExtractBits::SetBitstoextract(const std::string& value)
{
  m_Bitstoextract = value;
}

const std::string& ExtractBits::GetNumbits() const
{
  return m_Numbits;
}

void ExtractBits::SetNumbits(const std::string& value)
{
  m_Numbits = value;
}

const std::string& ExtractBits::GetBitidxrange() const
{
  return m_Bitidxrange;
}

void ExtractBits::SetBitidxrange(const std::string& value)
{
  m_Bitidxrange = value;
}

const std::string& ExtractBits::GetOutscalingmode() const
{
  return m_Outscalingmode;
}

void ExtractBits::SetOutscalingmode(const std::string& value)
{
  m_Outscalingmode = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
