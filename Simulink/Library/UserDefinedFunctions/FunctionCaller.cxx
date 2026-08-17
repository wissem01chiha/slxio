#include "FunctionCaller.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

FunctionCaller::FunctionCaller() {}

FunctionCaller::~FunctionCaller() {}

const std::string& FunctionCaller::GetFunctionprototype() const
{
    return m_Functionprototype;
}

void FunctionCaller::SetFunctionprototype(const std::string& value)
{
    m_Functionprototype = value;
}

const std::string& FunctionCaller::GetInputargumentspecifications() const
{
    return m_Inputargumentspecifications;
}

void FunctionCaller::SetInputargumentspecifications(const std::string& value)
{
    m_Inputargumentspecifications = value;
}

const std::string& FunctionCaller::GetOutputargumentspecifications() const
{
    return m_Outputargumentspecifications;
}

void FunctionCaller::SetOutputargumentspecifications(const std::string& value)
{
    m_Outputargumentspecifications = value;
}

const std::string& FunctionCaller::GetSampletime() const
{
    return m_Sampletime;
}

void FunctionCaller::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FunctionCaller::GetAsynchronouscaller() const
{
    return m_Asynchronouscaller;
}

void FunctionCaller::SetAsynchronouscaller(const std::string& value)
{
    m_Asynchronouscaller = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
