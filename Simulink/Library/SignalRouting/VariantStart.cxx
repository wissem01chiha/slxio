#include "VariantStart.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

VariantStart::VariantStart() {}

VariantStart::~VariantStart() {}

const std::string& VariantStart::GetVariantcontrols() const
{
    return m_Variantcontrols;
}

void VariantStart::SetVariantcontrols(const std::string& value)
{
    m_Variantcontrols = value;
}

const std::string& VariantStart::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void VariantStart::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& VariantStart::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void VariantStart::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& VariantStart::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void VariantStart::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& VariantStart::GetShowconditiononblock() const
{
    return m_Showconditiononblock;
}

void VariantStart::SetShowconditiononblock(const std::string& value)
{
    m_Showconditiononblock = value;
}

const std::string& VariantStart::GetVariantstartendtag() const
{
    return m_Variantstartendtag;
}

void VariantStart::SetVariantstartendtag(const std::string& value)
{
    m_Variantstartendtag = value;
}

const std::string& VariantStart::GetVariantpairedblock() const
{
    return m_Variantpairedblock;
}

void VariantStart::SetVariantpairedblock(const std::string& value)
{
    m_Variantpairedblock = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
