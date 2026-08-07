#include "StateflowEvent.h"
#include "Logger.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StateflowEvent::StateflowEvent() : StateflowElementBase() {
  Logger &l = Logger::GetInstance();
  // l.log(Logger::V_INFO, "StateflowEvent created.");
}

HError
StateflowEvent::RemoveElement(std::shared_ptr<SimulinkElementBase> element) {
  Logger &l = Logger::GetInstance();
  if (getParent() == nullptr) {
    // l.log(Logger::V_WARNING, "Event has no parent to be removed from.");
    return E_PARAMETER_NULL_PTR;
  }
  // getParent().removeEvent(this);
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
