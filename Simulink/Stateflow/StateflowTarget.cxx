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

ReturnType StateflowTarget::RemoveElement(
  std::shared_ptr<SimulinkElementBase> element)
{
  // CCSMPre.isFalse(getParent() == null,
  //                "Target has no parent to be removed from.");
  // getParent().removeTarget(this);
  return E_OK;
}

ReturnType StateflowTarget::AddElement(
  std::shared_ptr<SimulinkElementBase> element)
{
  return E_OK;
}

std::string StateflowTarget::ToString() const
{
  return std::string("");
}

IdType StateflowTarget::GetElementId() const
{
  return (IdType)0;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
