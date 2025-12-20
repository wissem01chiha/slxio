#include "StateflowTarget.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowTarget::StateflowTarget() : StateflowElementBase() {}
StateflowTarget::StateflowTarget(StateflowTarget &orig)
    : StateflowElementBase(orig) {}

ErrorCode
StateflowTarget::remove(std::shared_ptr<SimulinkElementBase> element) {
    // CCSMPre.isFalse(getParent() == null,
    //                "Target has no parent to be removed from.");
    // getParent().removeTarget(this);
    return ErrorCode::Ok;
  }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END