#include "FirstOrderHold.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FirstOrderHold::FirstOrderHold() {}

FirstOrderHold::~FirstOrderHold() {}

const std::string& FirstOrderHold::GetInitialoutput() const
{
    return m_Initialoutput;
}

void FirstOrderHold::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& FirstOrderHold::GetOutputalgorithm() const
{
    return m_Outputalgorithm;
}

void FirstOrderHold::SetOutputalgorithm(const std::string& value)
{
    m_Outputalgorithm = value;
}

const std::string& FirstOrderHold::GetErrortolerance() const
{
    return m_Errortolerance;
}

void FirstOrderHold::SetErrortolerance(const std::string& value)
{
    m_Errortolerance = value;
}

const std::string& FirstOrderHold::GetAllowcontinuousinput() const
{
    return m_Allowcontinuousinput;
}

void FirstOrderHold::SetAllowcontinuousinput(const std::string& value)
{
    m_Allowcontinuousinput = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
