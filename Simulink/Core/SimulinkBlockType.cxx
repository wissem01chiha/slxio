#include "SimulinkBlockType.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlockType::SimulinkBlockType(Type type_) {
  this->type_ = type_;
}

SimulinkBlockType::Type SimulinkBlockType::toType(const char *typeName) {

  if (!typeName) {
    return SimulinkBlockType::Stop;
  }

  std::string s(typeName);

  if (s == "DigitalClock")
    return SimulinkBlockType::DigitalClock;
  else if (s == "Clock")
    return SimulinkBlockType::Clock;
  else if (s == "FromWorkspace")
    return SimulinkBlockType::FromWorkspace;
  else if (s == "FromFile")
    return SimulinkBlockType::FromFile;
  else if (s == "Step")
    return SimulinkBlockType::Step;
  else if (s == "UniformRandomNumber")
    return SimulinkBlockType::UniformRandomNumber;
  else if (s == "RandomNumber")
    return SimulinkBlockType::RandomNumber;
  else if (s == "ToWorkspace")
    return SimulinkBlockType::ToWorkspace;
  else if (s == "Stop")
    return SimulinkBlockType::Stop;
  else if (s == "ToFile")
    return SimulinkBlockType::ToFile;
  else if (s == "From")
    return SimulinkBlockType::From;
  else if (s == "Goto")
    return SimulinkBlockType::Goto;
  else if (s == "DataStoreRead")
    return SimulinkBlockType::DataStoreRead;
  else if (s == "DataStoreWrite")
    return SimulinkBlockType::DataStoreWrite;
  else if (s == "DataStoreMemory")
    return SimulinkBlockType::DataStoreMemory;
  else if (s == "GotoTagVisibility")
    return SimulinkBlockType::GotoTagVisibility;
  else if (s == "Assertion")
    return SimulinkBlockType::Assertion;
  else if (s == "Terminator")
    return SimulinkBlockType::Terminator;
  else if (s == "Ground")
    return SimulinkBlockType::Ground;
  else if (s == "Scope")
    return SimulinkBlockType::Scope;
  else if (s == "Constant")
    return SimulinkBlockType::Constant;
  else if (s == "Inport")
    return SimulinkBlockType::Inport;
  else if (s == "Outport")
    return SimulinkBlockType::Outport;
  else if (s == "Switch")
    return SimulinkBlockType::Switch;
  else if (s == "RelationalOperator")
    return SimulinkBlockType::RelationalOperator;
  else if (s == "Lookup2D")
    return SimulinkBlockType::Lookup2D;
  else if (s == "VariableTransportDelay")
    return SimulinkBlockType::VariableTransportDelay;
  else if (s == "DotProduct")
    return SimulinkBlockType::DotProduct;
  else if (s == "FunctionCallSplit")
    return SimulinkBlockType::FunctionCallSplit;
  else if (s == "ManualSwitch")
    return SimulinkBlockType::ManualSwitch;
  else if (s == "numInPorts")
    return SimulinkBlockType::numInPorts;
  else if (s == "numOutPorts")
    return SimulinkBlockType::numOutPorts;
  else
    return SimulinkBlockType::Stop;
}

const char *SimulinkBlockType::toString(Type type) {

  switch (type) {
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
    return "Unknown";
  }
}

 bool SimulinkBlockType::isA(SimulinkBlockType::Type type) {
   return this->type_ == type;
 }

std::string SimulinkBlockType::toString() {
  return std::string(this->toString(type_));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
