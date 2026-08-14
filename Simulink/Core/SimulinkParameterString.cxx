#include "SimulinkParameterString.h"

#include "CoderInfo.h"
#include "ErrorCode.h"
#include "SimulinkDataType.h"

#include <sstream>

namespace slxio
{
std::string SimulinkParameterString::GetName() { return std::string(); }

std::vector<UInt16> SimulinkParameterString::GetDimensions()
{
    return std::vector<UInt16>();
}

std::string SimulinkParameterString::ToString() const { return std::string(); }

std::shared_ptr<CoderInfo> SimulinkParameterString::GetCoderInfo()
{
    return Coder;
}

Float32 SimulinkParameterString::GetMin() { return Float64(); }

Float32 slxio::SimulinkParameterString::GetMax() { return Float64(); }

SimulinkDataType SimulinkParameterString::GetDataType()
{
    return SimulinkDataType();
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio