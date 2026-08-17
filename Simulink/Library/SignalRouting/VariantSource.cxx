#include "VariantSource.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

VariantSource::VariantSource() {}

VariantSource::~VariantSource() {}

const std::string& VariantSource::GetVariantcontrols() const
{
    return m_Variantcontrols;
}

void VariantSource::SetVariantcontrols(const std::string& value)
{
    m_Variantcontrols = value;
}

const std::string& VariantSource::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void VariantSource::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& VariantSource::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void VariantSource::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& VariantSource::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void VariantSource::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& VariantSource::GetShowconditiononblock() const
{
    return m_Showconditiononblock;
}

void VariantSource::SetShowconditiononblock(const std::string& value)
{
    m_Showconditiononblock = value;
}

const std::string& VariantSource::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void VariantSource::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& VariantSource::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void VariantSource::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
