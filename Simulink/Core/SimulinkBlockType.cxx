#include "SimulinkBlockType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlockType::SimulinkBlockType(Type m_type) { this->m_type = m_type; }

std::string SimulinkBlockType::ToString() const
{

    switch (m_type)
    {
    case SimulinkBlockType::DigitalClock:
        return "DigitalClock";
    case SimulinkBlockType::Clock:
        return "Clock";
    case SimulinkBlockType::FromWorkspace:
        return "FromWorkspace";
    case SimulinkBlockType::FromFile:
        return "FromFile";
    case SimulinkBlockType::Step:
        return "Step";
    case SimulinkBlockType::UniformRandomNumber:
        return "UniformRandomNumber";
    case SimulinkBlockType::RandomNumber:
        return "RandomNumber";
    case SimulinkBlockType::ToWorkspace:
        return "ToWorkspace";
    case SimulinkBlockType::Stop:
        return "Stop";
    case SimulinkBlockType::ToFile:
        return "ToFile";
    case SimulinkBlockType::From:
        return "From";
    case SimulinkBlockType::Goto:
        return "Goto";
    case SimulinkBlockType::DataStoreRead:
        return "DataStoreRead";
    case SimulinkBlockType::DataStoreWrite:
        return "DataStoreWrite";
    case SimulinkBlockType::DataStoreMemory:
        return "DataStoreMemory";
    case SimulinkBlockType::GotoTagVisibility:
        return "GotoTagVisibility";
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
    case SimulinkBlockType::Inport:
        return "Inport";
    case SimulinkBlockType::Outport:
        return "Outport";
    case SimulinkBlockType::Switch:
        return "Switch";
    case SimulinkBlockType::RelationalOperator:
        return "RelationalOperator";
    case SimulinkBlockType::Lookup2D:
        return "Lookup2D";
    case SimulinkBlockType::VariableTransportDelay:
        return "VariableTransportDelay";
    case SimulinkBlockType::DotProduct:
        return "DotProduct";
    case SimulinkBlockType::FunctionCallSplit:
        return "FunctionCallSplit";
    case SimulinkBlockType::ManualSwitch:
        return "ManualSwitch";
    case SimulinkBlockType::numInPorts:
        return "numInPorts";
    case SimulinkBlockType::numOutPorts:
        return "numOutPorts";
    default:
        return "";
    }
    return "";
}

bool SimulinkBlockType::isA(SimulinkBlockType::Type type) const
{
    return this->m_type == type;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
