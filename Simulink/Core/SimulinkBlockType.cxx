#include "SimulinkBlockType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

std::string ToString(SimulinkBlockType type)
{

    switch (type)
    {
    case SimulinkBlockType::Assertion:
        return "Assertion";
    case SimulinkBlockType::Terminator:
        return "Terminator";
    case SimulinkBlockType::Ground:
        return "Ground";
    case SimulinkBlockType::Scope:
        return "Scope";
    case SimulinkBlockType::Constant:
        return "Constant";
    default:
        return "";
    }
    return "";
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
