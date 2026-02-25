#include "StateflowState.h"
#include "Logger.h"
#include "StateflowNodeBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowState::StateflowState(StateflowState& orig) {}

ErrorCode StateflowState::add(std::shared_ptr<SimulinkElementBase> element)
{
  // nodes.add(node);
  // node.setParent(this);
  return ErrorCode::SLX_OK;
}

ErrorCode StateflowState::remove(std::shared_ptr<SimulinkElementBase> element)
{
  // CCSMPre.isTrue(node.getParent() == this,
  //          "Node does not belong to this chart.");
  // nodes.remove(node);
  // node.setParent(null);
  return ErrorCode::SLX_OK;
}

std::shared_ptr<StateflowElementBase> StateflowState::getParent() const
{
  return std::shared_ptr<StateflowElementBase>();
}

const std::vector<StateflowNodeBase>& StateflowState::getNodes() const
{
  return nodes;
}

SimulinkElementType StateflowState::getType() const
{
  return SimulinkElementType(SimulinkElementType::Unkown);
}

std::string StateflowState::toString() const
{
  return std::string("");
}

Index StateflowState::getID() const
{
  return (Index)0;
}

bool StateflowState::contains(const Index& id) const
{
  return false;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
