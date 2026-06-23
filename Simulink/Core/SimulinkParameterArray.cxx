#include "CoderInfo.h"
#include "SimulinkParameterArray.h"
#include "SimulinkDataType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN


std::string slxio::SimulinkParameterArray::GetName()
{
  return Name;
}

std::vector<UInt16> SimulinkParameterArray::GetDimensions()
{
  return Dimensions;
}

std::string SimulinkParameterArray::ToString() const
{
  return std::string();
}

std::shared_ptr<CoderInfo> SimulinkParameterArray::GetCoderInfo()
{
  return Coder;
}

SimulinkDataType SimulinkParameterArray::GetDataType()
{
  return DataType;
}

SLXIO_ABI_NAMESPACE_END
};
