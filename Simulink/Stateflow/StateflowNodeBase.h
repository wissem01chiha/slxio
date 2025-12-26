// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef STATEFLOWNODEBASE_H
#define STATEFLOWNODEBASE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "StateflowElementBase.h"
#include <memory>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class StateflowTransition;

/**
 * @brief Base class for Stateflow nodes (elements that can be connected by
 * transitions).
 */
class APIEXPORT StateflowNodeBase : public StateflowElementBase {
public:
  virtual ~StateflowNodeBase() = default;

  void addInTransition(const std::shared_ptr<StateflowTransition> &transition);
  void addOutTransition(const std::shared_ptr<StateflowTransition> &transition);

  const std::vector<std::shared_ptr<StateflowTransition>> &
  getInTransitions() const;
  const std::vector<std::shared_ptr<StateflowTransition>> &
  getOutTransitions() const;

  void remove();
  void
  removeInTransition(const std::shared_ptr<StateflowTransition> &transition);
  void
  removeOutTransition(const std::shared_ptr<StateflowTransition> &transition);

protected:
  StateflowNodeBase() = default;
  StateflowNodeBase(const StateflowNodeBase &) = default;

private:
  std::vector<std::shared_ptr<StateflowTransition>> inTransitions;
  std::vector<std::shared_ptr<StateflowTransition>> outTransitions;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWNODEBASE_H
