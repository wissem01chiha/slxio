#include "StateflowBlock.h"
#include "Logger.h"
#include "StateflowChart.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StateflowBlock::StateflowBlock(StateflowBlock &block) {
  this->chart = block.chart;
}

StateflowBlock::StateflowBlock(StateflowChart &chart) {
  this->chart = std::make_shared<StateflowChart>();
}

std::shared_ptr<StateflowChart> StateflowBlock::getChart() { return chart; }

HError StateflowBlock::RemoveElement() { return E_OK; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
