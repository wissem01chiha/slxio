#include "StateflowChart.h"
#include "Logger.h"
#include "StateflowBlock.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode StateflowChart::add(std::shared_ptr<SimulinkElementBase> element) {
  // nodes.add(node);
  // node.setParent(this);
  return ErrorCode::SLX_OK;
}

ErrorCode StateflowChart::remove(std::shared_ptr<SimulinkElementBase> element) {
  // nodes.add(node);
  // node.setParent(this);
  return ErrorCode::SLX_OK;
}

std::shared_ptr<StateflowElementBase> StateflowChart::getParent() const {
  return std::shared_ptr<StateflowElementBase>();
}

SimulinkElementType StateflowChart::getType() const {
  return SimulinkElementType(SimulinkElementType::Chart);
}

std::string StateflowChart::getName() { return std::string(""); }

std::vector<StateflowNodeBase> StateflowChart::getNodes() {
  return std::vector<StateflowNodeBase>();
}

std::shared_ptr<StateflowBlock> StateflowChart::getStateflowBlock() {
  return stateflowBlock;
};

std::string StateflowChart::toString() const { return std::string(""); }

ErrorCode StateflowChart::setStateflowBlock(StateflowBlock stateflowBlock) {
  // if (stateflowBlock != null) {
  //   CCSMPre.isTrue(this.stateflowBlock == null,
  //                  "Cannot set new Stateflow block.");
  // }
  // this.stateflowBlock = stateflowBlock;
  return ErrorCode::SLX_OK;
}

Index StateflowChart::getID() const { return (Index)0; }

bool StateflowChart::contains(const Index &id) const { return false; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
