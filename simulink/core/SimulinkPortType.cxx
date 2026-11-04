#include "SimulinkPortType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

std::string ToString(SimulinkPortType type)
{
    switch (type)
    {
    case SimulinkPortType::Inport:
        return "Inport";

    case SimulinkPortType::Outport:
        return "Outport";

    case SimulinkPortType::Enable:
        return "Enable";

    case SimulinkPortType::Trigger:
        return "Trigger";

    case SimulinkPortType::State:
        return "State";

    case SimulinkPortType::LConn:
        return "LConn";

    case SimulinkPortType::RConn:
        return "RConn";

    case SimulinkPortType::IfAction:
        return "IfAction";
    default:
        return {};
    }

    return {};
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio