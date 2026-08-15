#include "SimulinkDataType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkDataType::SimulinkDataType(Type type) : m_type(type) {}

SimulinkDataType::Type SimulinkDataType::GetType() const { return m_type; }

std::string SimulinkDataType::ToString() const
{
    switch (m_type)
    {
    case Type::Double:
        return "double";
    case Type::Single:
        return "single";
    case Type::Half:
        return "half";
    case Type::Int8:
        return "int8";
    case Type::UInt8:
        return "uint8";
    case Type::Int16:
        return "int16";
    case Type::UInt16:
        return "uint16";
    case Type::Int32:
        return "int32";
    case Type::UInt32:
        return "uint32";
    case Type::UInt64:
        return "uint64";
    case Type::Boolean:
        return "boolean";
    case Type::String:
        return "string";
    case Type::Char:
        return "char";
    case Type::Auto:
        return "auto";
    }
    return "";
}

SimulinkDataType SimulinkDataType::FromString(const std::string& str)
{
    if (str == "double")
        return SimulinkDataType(Type::Double);
    if (str == "single")
        return SimulinkDataType(Type::Single);
    if (str == "half")
        return SimulinkDataType(Type::Half);
    if (str == "int8")
        return SimulinkDataType(Type::Int8);
    if (str == "uint8")
        return SimulinkDataType(Type::UInt8);
    if (str == "int16")
        return SimulinkDataType(Type::Int16);
    if (str == "uint16")
        return SimulinkDataType(Type::UInt16);
    if (str == "int32")
        return SimulinkDataType(Type::Int32);
    if (str == "uint32")
        return SimulinkDataType(Type::UInt32);
    if (str == "uint64")
        return SimulinkDataType(Type::UInt64);
    if (str == "boolean" || str == "logical")
        return SimulinkDataType(Type::Boolean);
    if (str == "string")
        return SimulinkDataType(Type::String);
    if (str == "char")
        return SimulinkDataType(Type::Char);
    if (str == "auto")
        return SimulinkDataType(Type::Auto);
    throw std::invalid_argument("Unknown SimulinkDataType string: " + str);
}

bool SimulinkDataType::isNumeric() const
{
    return m_type == Type::Double || m_type == Type::Single ||
           m_type == Type::Half || m_type == Type::Int8 ||
           m_type == Type::UInt8 || m_type == Type::Int16 ||
           m_type == Type::UInt16 || m_type == Type::Int32 ||
           m_type == Type::UInt32 || m_type == Type::UInt64;
}

bool SimulinkDataType::isFloatingPoint() const
{
    return m_type == Type::Double || m_type == Type::Single ||
           m_type == Type::Half;
}

bool SimulinkDataType::isSigned() const
{
    return m_type == Type::Int8 || m_type == Type::Int16 ||
           m_type == Type::Int32;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
