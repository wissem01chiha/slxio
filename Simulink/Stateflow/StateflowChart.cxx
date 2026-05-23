#include "StateflowChart.h"
#include "Logger.h"
#include "StateflowBlock.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ReturnType StateflowChart::AddElement(
  std::shared_ptr<SimulinkElementBase> element)
{
  // nodes.AddElement(node);
  // node.setParent(this);
  return E_OK;
}

ReturnType StateflowChart::RemoveElement(
  std::shared_ptr<SimulinkElementBase> element)
{
  // nodes.AddElement(node);
  // node.setParent(this);
  return E_OK;
}

std::shared_ptr<StateflowElementBase> StateflowChart::getParent() const
{
  return std::shared_ptr<StateflowElementBase>();
}

SimulinkElementType StateflowChart::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Chart);
}

std::string StateflowChart::getName()
{
  return std::string("");
}

std::vector<StateflowNodeBase> StateflowChart::getNodes()
{
  return std::vector<StateflowNodeBase>();
}

std::shared_ptr<StateflowBlock> StateflowChart::getStateflowBlock()
{
  return stateflowBlock;
};

std::string StateflowChart::ToString() const
{
  return std::string("");
}

ReturnType StateflowChart::setStateflowBlock(StateflowBlock stateflowBlock)
{
  // if (stateflowBlock != null) {
  //   CCSMPre.isTrue(this.stateflowBlock == null,
  //                  "Cannot set new Stateflow block.");
  // }
  // this.stateflowBlock = stateflowBlock;
  return E_OK;
}

IdType StateflowChart::GetElementId() const
{
  return (IdType)0;
}

bool StateflowChart::Contains(const IdType& id) const
{
  return false;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
