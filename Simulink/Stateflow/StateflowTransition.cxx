#include "StateflowTransition.h"
#include "Logger.h"
#include "StateflowNodeBase.h"
#include <cassert>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StateflowTransition::StateflowTransition(
  const std::shared_ptr<StateflowNodeBase>& dst)
  : dst(dst)
{
  assert(dst && "Destination may not be null");
  dst->addInTransition(
    std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
}

StateflowTransition::StateflowTransition(
  const std::shared_ptr<StateflowNodeBase>& src,
  const std::shared_ptr<StateflowNodeBase>& dst)
  : src(src)
  , dst(dst)
{
  assert(src && dst && "Neither src nor dst may be null");
  src->addOutTransition(
    std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
  dst->addInTransition(
    std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
}

std::shared_ptr<StateflowNodeBase> StateflowTransition::getSrc() const
{
  return src;
}
std::shared_ptr<StateflowNodeBase> StateflowTransition::getDst() const
{
  return dst;
}

std::string StateflowTransition::getLabel() const
{
  // Placeholder: integrate with parameter system
  return "labelString";
}

void StateflowTransition::RemoveElement()
{
  if (src)
  {
    src->removeOutTransition(
      std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
    src.reset();
  }
  if (dst)
  {
    dst->removeInTransition(
      std::shared_ptr<StateflowTransition>(this, [](StateflowTransition*) {}));
    dst.reset();
  }
}

std::string StateflowTransition::ToString() const
{
  if (!src)
  {
    return "-> " + std::string("[Node]");
  }
  return "[Node] -> [Node]";
}

SLXIO_ABI_NAMESPACE_END
};
