#include "StateflowTarget.h"
#include "ErrorCode.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateflowTarget::StateflowTarget()
  : StateflowElementBase()
{
}

StateflowTarget::StateflowTarget(StateflowTarget& orig)
  : StateflowElementBase(orig)
{
}

slxReturnType StateflowTarget::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
{
  // CCSMPre.isFalse(getParent() == null,
  //                "Target has no parent to be removed from.");
  // getParent().removeTarget(this);
  return E_OK;
}

slxReturnType StateflowTarget::AddElement(std::shared_ptr<SimulinkElementBase> element)
{
  return E_OK;
}

std::string StateflowTarget::ToString() const
{
  return std::string("");
}

slxIdType StateflowTarget::GetElementId() const
{
  return (slxIdType)0;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END