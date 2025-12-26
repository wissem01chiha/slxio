#include "StateflowTarget.h"
#include "Logger.h"

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
  return ErrorCode::SLX_OK;
}

ErrorCode StateflowTarget::add(std::shared_ptr<SimulinkElementBase> element) {
  return ErrorCode::SLX_OK;
}

std::string StateflowTarget::toString() const { return std::string(""); }

Index StateflowTarget::getID() const { return (Index)0; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END