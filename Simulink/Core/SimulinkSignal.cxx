#include "SimulinkSignal.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkSignal::SimulinkSignal()
  : Description("")
  , Complexity("auto")
  , DataType(SimulinkDataType::Auto)
  , Min(FloatMin)
  , Max(FloatMax)
{
}

ErrorCode SimulinkSignal::setDataType(SimulinkDataType dt)
{
  DataType = dt;
  return ErrorCode::E_OK;
}

SimulinkDataType SimulinkSignal::getDataType()
{
  return DataType;
}

ErrorCode SimulinkSignal::setDataType(const char* dt)
{

  if (strcmp(dt, "auto") == 0)
  {
    DataType = SimulinkDataType::Auto;
  }
  else if (strcmp(dt, "double") == 0)
  {
    DataType = SimulinkDataType::Double;
  }
  else if (strcmp(dt, "single") == 0)
  {
    DataType = SimulinkDataType::Single;
  }
  else if (strcmp(dt, "int8") == 0)
  {
    DataType = SimulinkDataType::Int8;
  }
  else if (strcmp(dt, "uint8") == 0)
  {
    DataType = SimulinkDataType::UInt8;
  }
  else if (strcmp(dt, "int16") == 0)
  {
    DataType = SimulinkDataType::Int16;
  }
  else if (strcmp(dt, "uint16") == 0)
  {
    DataType = SimulinkDataType::UInt16;
  }
  else if (strcmp(dt, "int32") == 0)
  {
    DataType = SimulinkDataType::Int32;
  }
  else if (strcmp(dt, "uint32") == 0)
  {
    DataType = SimulinkDataType::UInt32;
  }
  else if (strcmp(dt, "boolean") == 0)
  {
    DataType = SimulinkDataType::Boolean;
  }
  else if (strcmp(dt, "half") == 0)
  {
    DataType = SimulinkDataType::Half;
  }
  else if (strcmp(dt, "string") == 0)
  {
    DataType = SimulinkDataType::String;
  }
  else
  {
    return ErrorCode::SLX_EINVAR;
  }

  return ErrorCode::E_OK;
}
ErrorCode SimulinkSignal::setComplexityType(const char* ct)
{

  if (strcmp(ct, "auto") == 0)
  {
    Complexity = "auto";
  }
  else if (strcmp(ct, "real") == 0)
  {
    Complexity = "real";
  }
  else if (strcmp(ct, "complex") == 0)
  {
    Complexity = "complex";
  }
  else
  {
    return ErrorCode::SLX_EINVAR;
  }
  return ErrorCode::E_OK;
}

const char* SimulinkSignal::getComplexity()
{
  return Complexity;
}

std::vector<uint16> SimulinkSignal::getDimensions()
{
  return Dimensions;
}

CoderInfo SimulinkSignal::getCoderInfo()
{
  return coder;
}

const char* SimulinkSignal::getInitialValue()
{
  return InitialValue;
}

const char* SimulinkSignal::getDescription()
{
  return Description;
}

const char* SimulinkSignal::getDimensionsMode()
{
  return DimensionsMode;
}

const char* SimulinkSignal::getUnit()
{
  return Unit;
}

std::vector<Float32> SimulinkSignal::getSampleTime()
{
  return SampleTime;
}

ErrorCode SimulinkSignal::setRange(Float min, Float max)
{
  Min = min;
  Max = max;
  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
