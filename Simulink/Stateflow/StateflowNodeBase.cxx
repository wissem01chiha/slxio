#include "StateflowNodeBase.h"

#include "Logger.h"
#include "StateflowTransition.h"

#include <algorithm>
#include <cassert>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

void StateflowNodeBase::addInTransition(
  const std::shared_ptr<StateflowTransition>& transition)
{
  if (transition->getDst().get() == this) {
    // Logger::GetInstance().log(
    //  Logger::V_ERROR, "Transition destination does not match this node");
    return;
  }
  inTransitions.push_back(transition);
}

void StateflowNodeBase::addOutTransition(
  const std::shared_ptr<StateflowTransition>& transition)
{
  assert(transition->getSrc().get() == this &&
         "Transition source does not match this node");
  outTransitions.push_back(transition);
}

const std::vector<std::shared_ptr<StateflowTransition>>&
StateflowNodeBase::getInTransitions() const
{
  return inTransitions;
}

const std::vector<std::shared_ptr<StateflowTransition>>&
StateflowNodeBase::getOutTransitions() const
{
  return outTransitions;
}

void StateflowNodeBase::RemoveElement()
{
  // TODO: implement removal from parent container
  for (auto& t : inTransitions) {
    t->RemoveElement();
  }
  for (auto& t : outTransitions) {
    t->RemoveElement();
  }
  inTransitions.clear();
  outTransitions.clear();
}

void StateflowNodeBase::removeInTransition(
  const std::shared_ptr<StateflowTransition>& transition)
{
  auto it = std::find(inTransitions.begin(), inTransitions.end(), transition);
  assert(it != inTransitions.end() && "Transition not found in inTransitions");
  inTransitions.erase(it);
}

void StateflowNodeBase::removeOutTransition(
  const std::shared_ptr<StateflowTransition>& transition)
{
  auto it = std::find(outTransitions.begin(), outTransitions.end(), transition);
  assert(it != outTransitions.end() &&
         "Transition not found in outTransitions");
  outTransitions.erase(it);
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
