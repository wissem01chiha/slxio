#include "StateflowEvent.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowEvent::StateflowEvent() : StateflowElementBase() {
Logger& l= Logger::getInstance();
  l.log(Logger::V_INFO, "StateflowEvent created.");
}

ErrorCode StateflowEvent::remove(std::shared_ptr<SimulinkElementBase> element) 
  {
    // CCSMPre.isFalse(getParent() == null,
    //                 "Event has no parent to be removed from.");
    // getParent().removeEvent(this);
    return ErrorCode::Ok;
  }


SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

