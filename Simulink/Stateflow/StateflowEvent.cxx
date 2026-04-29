#include "StateflowEvent.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowEvent::StateflowEvent()
  : StateflowElementBase()
{
  Logger& l = Logger::getInstance();
  //l.log(Logger::V_INFO, "StateflowEvent created.");
}

ReturnType StateflowEvent::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
{
  Logger& l = Logger::getInstance();
  if (getParent() == nullptr)
  {
    //l.log(Logger::V_WARNING, "Event has no parent to be removed from.");
    return E_FUNC_PARAM_NULL_PTR;
  }
  // getParent().removeEvent(this);
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
