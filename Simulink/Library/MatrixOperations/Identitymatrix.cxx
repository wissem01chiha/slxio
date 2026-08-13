#include "Identitymatrix.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Identitymatrix::Identitymatrix() {}

Identitymatrix::~Identitymatrix() {}

const std::string& Identitymatrix::GetInheritoutputportattributes() const
{
    return m_Inheritoutputportattributes;
}

void Identitymatrix::SetInheritoutputportattributes(const std::string& value)
{
    m_Inheritoutputportattributes = value;
}

const std::string& Identitymatrix::GetOutputdimensions() const
{
    return m_Outputdimensions;
}

void Identitymatrix::SetOutputdimensions(const std::string& value)
{
    m_Outputdimensions = value;
}

const std::string& Identitymatrix::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Identitymatrix::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Identitymatrix::GetSampletime() const
{
    return m_Sampletime;
}

void Identitymatrix::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
