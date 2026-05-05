#include "StateflowChart.h"
#include "Logger.h"
#include "StateflowBlock.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

slxReturnType StateflowChart::AddElement(std::shared_ptr<SimulinkElementBase> element)
{
  // nodes.AddElement(node);
  // node.setParent(this);
  return E_OK;
}

slxReturnType StateflowChart::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
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

slxReturnType StateflowChart::setStateflowBlock(StateflowBlock stateflowBlock)
{
  // if (stateflowBlock != null) {
  //   CCSMPre.isTrue(this.stateflowBlock == null,
  //                  "Cannot set new Stateflow block.");
  // }
  // this.stateflowBlock = stateflowBlock;
  return E_OK;
}

slxIdType StateflowChart::GetElementId() const
{
  return (slxIdType)0;
}

bool StateflowChart::Contains(const slxIdType& id) const
{
  return false;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
