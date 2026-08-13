#include "Selector3.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Selector3::Selector3() {}

Selector3::~Selector3() {}

const std::string& Selector3::GetNumberofdimensions() const
{
    return m_Numberofdimensions;
}

void Selector3::SetNumberofdimensions(const std::string& value)
{
    m_Numberofdimensions = value;
}

const std::string& Selector3::GetIndexmode() const
{
    return m_Indexmode;
}

void Selector3::SetIndexmode(const std::string& value)
{
    m_Indexmode = value;
}

const std::string& Selector3::GetIndexoptionarray() const
{
    return m_Indexoptionarray;
}

void Selector3::SetIndexoptionarray(const std::string& value)
{
    m_Indexoptionarray = value;
}

const std::string& Selector3::GetIndexparamarray() const
{
    return m_Indexparamarray;
}

void Selector3::SetIndexparamarray(const std::string& value)
{
    m_Indexparamarray = value;
}

const std::string& Selector3::GetOutputsizearray() const
{
    return m_Outputsizearray;
}

void Selector3::SetOutputsizearray(const std::string& value)
{
    m_Outputsizearray = value;
}

const std::string& Selector3::GetInputportwidth() const
{
    return m_Inputportwidth;
}

void Selector3::SetInputportwidth(const std::string& value)
{
    m_Inputportwidth = value;
}

const std::string& Selector3::GetSampletime() const
{
    return m_Sampletime;
}

void Selector3::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Selector3::GetIndexoptions() const
{
    return m_Indexoptions;
}

void Selector3::SetIndexoptions(const std::string& value)
{
    m_Indexoptions = value;
}

const std::string& Selector3::GetIndices() const
{
    return m_Indices;
}

void Selector3::SetIndices(const std::string& value)
{
    m_Indices = value;
}

const std::string& Selector3::GetOutputsizes() const
{
    return m_Outputsizes;
}

void Selector3::SetOutputsizes(const std::string& value)
{
    m_Outputsizes = value;
}

const std::string& Selector3::GetRuntimerangechecks() const
{
    return m_Runtimerangechecks;
}

void Selector3::SetRuntimerangechecks(const std::string& value)
{
    m_Runtimerangechecks = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
