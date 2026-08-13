#include "IntegerToBitConverter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IntegerToBitConverter::IntegerToBitConverter() {}

IntegerToBitConverter::~IntegerToBitConverter() {}

const std::string& IntegerToBitConverter::GetNbits() const
{
    return m_Nbits;
}

void IntegerToBitConverter::SetNbits(const std::string& value)
{
    m_Nbits = value;
}

const std::string& IntegerToBitConverter::GetSignedinputvalues() const
{
    return m_Signedinputvalues;
}

void IntegerToBitConverter::SetSignedinputvalues(const std::string& value)
{
    m_Signedinputvalues = value;
}

const std::string& IntegerToBitConverter::GetBitorder() const
{
    return m_Bitorder;
}

void IntegerToBitConverter::SetBitorder(const std::string& value)
{
    m_Bitorder = value;
}

const std::string& IntegerToBitConverter::GetOutdtype() const
{
    return m_Outdtype;
}

void IntegerToBitConverter::SetOutdtype(const std::string& value)
{
    m_Outdtype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
