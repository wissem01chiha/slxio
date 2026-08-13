#include "Selector.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Selector::Selector() {}

Selector::~Selector() {}

const std::string& Selector::GetNumberofdimensions() const
{
    return m_Numberofdimensions;
}

void Selector::SetNumberofdimensions(const std::string& value)
{
    m_Numberofdimensions = value;
}

const std::string& Selector::GetIndexmode() const
{
    return m_Indexmode;
}

void Selector::SetIndexmode(const std::string& value)
{
    m_Indexmode = value;
}

const std::string& Selector::GetIndexoptionarray() const
{
    return m_Indexoptionarray;
}

void Selector::SetIndexoptionarray(const std::string& value)
{
    m_Indexoptionarray = value;
}

const std::string& Selector::GetIndexparamarray() const
{
    return m_Indexparamarray;
}

void Selector::SetIndexparamarray(const std::string& value)
{
    m_Indexparamarray = value;
}

const std::string& Selector::GetOutputsizearray() const
{
    return m_Outputsizearray;
}

void Selector::SetOutputsizearray(const std::string& value)
{
    m_Outputsizearray = value;
}

const std::string& Selector::GetInputportwidth() const
{
    return m_Inputportwidth;
}

void Selector::SetInputportwidth(const std::string& value)
{
    m_Inputportwidth = value;
}

const std::string& Selector::GetSampletime() const
{
    return m_Sampletime;
}

void Selector::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Selector::GetIndexoptions() const
{
    return m_Indexoptions;
}

void Selector::SetIndexoptions(const std::string& value)
{
    m_Indexoptions = value;
}

const std::string& Selector::GetIndices() const
{
    return m_Indices;
}

void Selector::SetIndices(const std::string& value)
{
    m_Indices = value;
}

const std::string& Selector::GetOutputsizes() const
{
    return m_Outputsizes;
}

void Selector::SetOutputsizes(const std::string& value)
{
    m_Outputsizes = value;
}

const std::string& Selector::GetRuntimerangechecks() const
{
    return m_Runtimerangechecks;
}

void Selector::SetRuntimerangechecks(const std::string& value)
{
    m_Runtimerangechecks = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
