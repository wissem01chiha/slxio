#include "SimulinkDataType.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkDataType toSimulinkDataType(bool)
{
  return SimulinkDataType::Boolean;
}

SimulinkDataType toSimulinkDataType(Float)
{
#ifdef USE_FLOAT16
  return SimulinkDataType::Half;
#elif defined(USE_FLOAT32)
  return SimulinkDataType::Single;
#elif defined(USE_FLOAT64)
  return SimulinkDataType::Double;
#elif defined(USE_FLOAT128)
  return SimulinkDataType::Double;
#else
  return SimulinkDataType::Double;
#endif
}

SimulinkDataType toSimulinkDataType(sint8)
{
  return SimulinkDataType::Int8;
}
SimulinkDataType toSimulinkDataType(sint16)
{
  return SimulinkDataType::Int16;
}
SimulinkDataType toSimulinkDataType(sint32)
{
  return SimulinkDataType::Int32;
}

SimulinkDataType toSimulinkDataType(uint8)
{
  return SimulinkDataType::UInt8;
}
SimulinkDataType toSimulinkDataType(uint16)
{
  return SimulinkDataType::UInt16;
}
SimulinkDataType toSimulinkDataType(uint32)
{
  return SimulinkDataType::UInt32;
}
SimulinkDataType toSimulinkDataType(uint64)
{
  return SimulinkDataType::UInt64;
}

SimulinkDataType toSimulinkDataType(const std::string&)
{
  return SimulinkDataType::String;
}

SimulinkDataType toSimulinkDataType(const char* cstr)
{
  std::string str(cstr);
  return toSimulinkDataType(str);
}

const char* toChar(SimulinkDataType sldt)
{
  switch (sldt)
  {
    case SimulinkDataType::Auto:
      return "auto";
    case SimulinkDataType::Double:
      return "double";
    case SimulinkDataType::Single:
      return "single";
    case SimulinkDataType::Half:
      return "half";
    case SimulinkDataType::Int8:
      return "int8";
    case SimulinkDataType::UInt8:
      return "uint8";
    case SimulinkDataType::Int16:
      return "int16";
    case SimulinkDataType::UInt16:
      return "uint16";
    case SimulinkDataType::Int32:
      return "int32";
    case SimulinkDataType::UInt32:
      return "uint32";
    case SimulinkDataType::UInt64:
      return "uint64";
    case SimulinkDataType::Boolean:
      return "boolean";
    case SimulinkDataType::String:
      return "string";
    default:
      return "unknown";
  }
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
