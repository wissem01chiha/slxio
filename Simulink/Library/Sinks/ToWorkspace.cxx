#include "ToWorkspace.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ToWorkspace::ToWorkspace() {}

ToWorkspace::~ToWorkspace() {}

const std::string& ToWorkspace::GetVariablename() const
{
    return m_Variablename;
}

void ToWorkspace::SetVariablename(const std::string& value)
{
    m_Variablename = value;
}

const std::string& ToWorkspace::GetMaxdatapoints() const
{
    return m_Maxdatapoints;
}

void ToWorkspace::SetMaxdatapoints(const std::string& value)
{
    m_Maxdatapoints = value;
}

const std::string& ToWorkspace::GetDecimation() const
{
    return m_Decimation;
}

void ToWorkspace::SetDecimation(const std::string& value)
{
    m_Decimation = value;
}

const std::string& ToWorkspace::GetSaveformat() const
{
    return m_Saveformat;
}

void ToWorkspace::SetSaveformat(const std::string& value)
{
    m_Saveformat = value;
}

const std::string& ToWorkspace::GetSave2dsignal() const
{
    return m_Save2dsignal;
}

void ToWorkspace::SetSave2dsignal(const std::string& value)
{
    m_Save2dsignal = value;
}

const std::string& ToWorkspace::GetFixptasfi() const
{
    return m_Fixptasfi;
}

void ToWorkspace::SetFixptasfi(const std::string& value)
{
    m_Fixptasfi = value;
}

const std::string& ToWorkspace::GetSampletime() const
{
    return m_Sampletime;
}

void ToWorkspace::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
