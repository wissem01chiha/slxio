#include "StateflowState.h"
#include "Logger.h"
#include "StateflowNodeBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowState::StateflowState(StateflowState& orig) {}

ReturnType StateflowState::AddElement(
  std::shared_ptr<SimulinkElementBase> element)
{
  // nodes.AddElement(node);
  // node.setParent(this);
  return E_OK;
}

ReturnType StateflowState::RemoveElement(
  std::shared_ptr<SimulinkElementBase> element)
{
  // CCSMPre.isTrue(node.getParent() == this,
  //          "Node does not belong to this chart.");
  // nodes.RemoveElement(node);
  // node.setParent(null);
  return E_OK;
}

std::shared_ptr<StateflowElementBase> StateflowState::getParent() const
{
  return std::shared_ptr<StateflowElementBase>();
}

const std::vector<StateflowNodeBase>& StateflowState::getNodes() const
{
  return nodes;
}

SimulinkElementType StateflowState::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Unkown);
}

std::string StateflowState::ToString() const
{
  return std::string("");
}

IdType StateflowState::GetElementId() const
{
  return (IdType)0;
}

bool StateflowState::Contains(const IdType& id) const
{
  return false;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
