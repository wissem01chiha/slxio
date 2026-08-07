#include "StateflowElementBase.h"
#include "Logger.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StateflowElementBase::StateflowElementBase(const StateflowElementBase &orig) {
  this->parent = orig.parent;
}

void StateflowElementBase::setParent(
    std::shared_ptr<SimulinkElementBase> parent) {
  this->parent = parent;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
