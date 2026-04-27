#include "StateflowBlock.h"
#include "Logger.h"
#include "StateflowChart.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowBlock::StateflowBlock(StateflowBlock& block)
{
  this->chart = block.chart;
}

StateflowBlock::StateflowBlock(StateflowChart& chart)
{
  this->chart = std::make_shared<StateflowChart>();
}

std::shared_ptr<StateflowChart> StateflowBlock::getChart()
{
  return chart;
}

ErrorCode StateflowBlock::remove()
{
  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
