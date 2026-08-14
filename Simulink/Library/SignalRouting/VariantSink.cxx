#include "VariantSink.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

VariantSink::VariantSink() {}

VariantSink::~VariantSink() {}

const std::string& VariantSink::GetVariantcontrols() const
{
    return m_Variantcontrols;
}

void VariantSink::SetVariantcontrols(const std::string& value)
{
    m_Variantcontrols = value;
}

const std::string& VariantSink::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void VariantSink::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& VariantSink::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void VariantSink::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& VariantSink::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void VariantSink::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& VariantSink::GetShowconditiononblock() const
{
    return m_Showconditiononblock;
}

void VariantSink::SetShowconditiononblock(const std::string& value)
{
    m_Showconditiononblock = value;
}

const std::string& VariantSink::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void VariantSink::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
