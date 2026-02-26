#include "StateflowElementBase.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowElementBase::StateflowElementBase(const StateflowElementBase& orig)
{
  this->parent = orig.parent;
}

void StateflowElementBase::setParent(
  std::shared_ptr<SimulinkElementBase> parent)
{
  this->parent = parent;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END