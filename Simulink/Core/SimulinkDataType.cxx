#include "SimulinkDataType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

std::string ToString(SimulinkDataType type)
{
    switch (type)
    {
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
    case SimulinkDataType::Char:
        return "char";
    case SimulinkDataType::Auto:
        return "auto";
    }

    return {};
}

SimulinkDataType FromString(const std::string& str)
{
    if (str == "double")
        return SimulinkDataType::Double;
    if (str == "single")
        return SimulinkDataType::Single;
    if (str == "half")
        return SimulinkDataType::Half;
    if (str == "int8")
        return SimulinkDataType::Int8;
    if (str == "uint8")
        return SimulinkDataType::UInt8;
    if (str == "int16")
        return SimulinkDataType::Int16;
    if (str == "uint16")
        return SimulinkDataType::UInt16;
    if (str == "int32")
        return SimulinkDataType::Int32;
    if (str == "uint32")
        return SimulinkDataType::UInt32;
    if (str == "uint64")
        return SimulinkDataType::UInt64;
    if (str == "boolean" || str == "logical")
        return SimulinkDataType::Boolean;
    if (str == "string")
        return SimulinkDataType::String;
    if (str == "char")
        return SimulinkDataType::Char;
    if (str == "auto")
        return SimulinkDataType::Auto;

    throw std::invalid_argument("Unknown SimulinkDataType string: " + str);
}

bool IsNumeric(SimulinkDataType type)
{
    switch (type)
    {
    case SimulinkDataType::Double:
    case SimulinkDataType::Single:
    case SimulinkDataType::Half:
    case SimulinkDataType::Int8:
    case SimulinkDataType::UInt8:
    case SimulinkDataType::Int16:
    case SimulinkDataType::UInt16:
    case SimulinkDataType::Int32:
    case SimulinkDataType::UInt32:
    case SimulinkDataType::UInt64:
        return true;

    default:
        return false;
    }
}

bool IsFloatingPoint(SimulinkDataType type)
{
    return type == SimulinkDataType::Double ||
           type == SimulinkDataType::Single || type == SimulinkDataType::Half;
}

bool IsSigned(SimulinkDataType type)
{
    return type == SimulinkDataType::Int8 || type == SimulinkDataType::Int16 ||
           type == SimulinkDataType::Int32;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio