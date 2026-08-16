#include "SimulinkParameterInformation.h"
#include "CoderInfo.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameterInformation::SimulinkParameterInformation()
    : m_min(0.0f), m_max(0.0f)
{
}

SimulinkParameterInformation::~SimulinkParameterInformation() = default;

const std::string& SimulinkParameterInformation::GetUnit() const
{
    return m_unit;
}
void SimulinkParameterInformation::SetUnit(const std::string& unit)
{
    m_unit = unit;
}

const std::string& SimulinkParameterInformation::GetDescription() const
{
    return m_description;
}
void SimulinkParameterInformation::SetDescription(const std::string& desc)
{
    m_description = desc;
}

const std::string& SimulinkParameterInformation::GetComplexity() const
{
    return m_complexity;
}
void SimulinkParameterInformation::SetComplexity(const std::string& comp)
{
    m_complexity = comp;
}

Float32 SimulinkParameterInformation::GetMin() const { return m_min; }
void SimulinkParameterInformation::SetMin(Float32 min) { m_min = min; }

Float32 SimulinkParameterInformation::GetMax() const { return m_max; }
void SimulinkParameterInformation::SetMax(Float32 max) { m_max = max; }

const std::vector<UInt16>& SimulinkParameterInformation::GetDimensions() const
{
    return m_dimensions;
}
void SimulinkParameterInformation::SetDimensions(
    const std::vector<UInt16>& dims)
{
    m_dimensions = dims;
}

void SimulinkParameterInformation::SetCoderInfo(
    const std::shared_ptr<CoderInfo>& coder)
{
    if (coder != nullptr)
    {
        m_coder = coder;
    }
}

std::shared_ptr<CoderInfo> SimulinkParameterInformation::GetCoderInfo() const
{
    return m_coder;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
