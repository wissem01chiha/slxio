#include "StateflowEvent.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowEvent::StateflowEvent() : StateflowElementBase() {
  Logger &l = Logger::getInstance();
  l.log(Logger::V_INFO, "StateflowEvent created.");
}

ErrorCode StateflowEvent::remove(std::shared_ptr<SimulinkElementBase> element) {
  Logger &l = Logger::getInstance();
  if (getParent() == nullptr) {
    l.log(Logger::V_WARNING, "Event has no parent to be removed from.");
    return ErrorCode::SLX_ENULLPTR;
  }
  // getParent().removeEvent(this);
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
