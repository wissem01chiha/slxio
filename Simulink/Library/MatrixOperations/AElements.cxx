#include "AElements.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

AElements::AElements() {}

AElements::~AElements() {}

const std::string& AElements::GetNumberofdimensions() const
{
    return m_Numberofdimensions;
}

void AElements::SetNumberofdimensions(const std::string& value)
{
    m_Numberofdimensions = value;
}

const std::string& AElements::GetIndexmode() const
{
    return m_Indexmode;
}

void AElements::SetIndexmode(const std::string& value)
{
    m_Indexmode = value;
}

const std::string& AElements::GetIndexoptionarray() const
{
    return m_Indexoptionarray;
}

void AElements::SetIndexoptionarray(const std::string& value)
{
    m_Indexoptionarray = value;
}

const std::string& AElements::GetIndexparamarray() const
{
    return m_Indexparamarray;
}

void AElements::SetIndexparamarray(const std::string& value)
{
    m_Indexparamarray = value;
}

const std::string& AElements::GetOutputsizearray() const
{
    return m_Outputsizearray;
}

void AElements::SetOutputsizearray(const std::string& value)
{
    m_Outputsizearray = value;
}

const std::string& AElements::GetInputportwidth() const
{
    return m_Inputportwidth;
}

void AElements::SetInputportwidth(const std::string& value)
{
    m_Inputportwidth = value;
}

const std::string& AElements::GetSampletime() const
{
    return m_Sampletime;
}

void AElements::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& AElements::GetIndexoptions() const
{
    return m_Indexoptions;
}

void AElements::SetIndexoptions(const std::string& value)
{
    m_Indexoptions = value;
}

const std::string& AElements::GetIndices() const
{
    return m_Indices;
}

void AElements::SetIndices(const std::string& value)
{
    m_Indices = value;
}

const std::string& AElements::GetOutputsizes() const
{
    return m_Outputsizes;
}

void AElements::SetOutputsizes(const std::string& value)
{
    m_Outputsizes = value;
}

const std::string& AElements::GetRuntimerangechecks() const
{
    return m_Runtimerangechecks;
}

void AElements::SetRuntimerangechecks(const std::string& value)
{
    m_Runtimerangechecks = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
