#include "StateflowTarget.h"
#include "ErrorCode.h"
#include "Logger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StateflowTarget::StateflowTarget()
  : StateflowElementBase()
{
}

StateflowTarget::StateflowTarget(StateflowTarget& orig)
  : StateflowElementBase(orig)
{
}

ReturnType StateflowTarget::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
{
  // CCSMPre.isFalse(getParent() == null,
  //                "Target has no parent to be removed from.");
  // getParent().removeTarget(this);
  return E_OK;
}

ReturnType StateflowTarget::AddElement(std::shared_ptr<SimulinkElementBase> element)
{
  return E_OK;
}

std::string StateflowTarget::toString() const
{
  return std::string("");
}

IdType StateflowTarget::GetId() const
{
  return (IdType)0;
}

SLXIO_ABI_NAMESPACE_END
};
