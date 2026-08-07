#include "StateflowChart.h"
#include "Logger.h"
#include "StateflowBlock.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

HError
StateflowChart::AddElement(std::shared_ptr<SimulinkElementBase> element) {
  // nodes.AddElement(node);
  // node.setParent(this);
  return E_OK;
}

HError
StateflowChart::RemoveElement(std::shared_ptr<SimulinkElementBase> element) {
  // nodes.AddElement(node);
  // node.setParent(this);
  return E_OK;
}

std::shared_ptr<StateflowElementBase> StateflowChart::getParent() const {
  return std::shared_ptr<StateflowElementBase>();
}

SimulinkElementType StateflowChart::GetType() const {
  return SimulinkElementType(SimulinkElementType::Chart);
}

std::string StateflowChart::getName() { return std::string(""); }

std::vector<StateflowNodeBase> StateflowChart::getNodes() {
  return std::vector<StateflowNodeBase>();
}

std::shared_ptr<StateflowBlock> StateflowChart::getStateflowBlock() {
  return stateflowBlock;
};

std::string StateflowChart::ToString() const { return std::string(""); }

HError StateflowChart::setStateflowBlock(StateflowBlock stateflowBlock) {
  // if (stateflowBlock != null) {
  //   CCSMPre.isTrue(this.stateflowBlock == null,
  //                  "Cannot set new Stateflow block.");
  // }
  // this.stateflowBlock = stateflowBlock;
  return E_OK;
}

SId StateflowChart::GetId() const { return (SId)0; }

bool StateflowChart::Contains(const SId &id) const { return false; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
