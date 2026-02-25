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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef STATEFLOWELEMENTBASE_H
#define STATEFLOWELEMENTBASE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "SimulinkElementBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base class for all Stateflow elements.
 */
class StateflowElementBase : public SimulinkElementBase
{
public:
  virtual ~StateflowElementBase() = default;
  StateflowElementBase& operator=(const StateflowElementBase&) = delete;

protected:
  StateflowElementBase() {}
  StateflowElementBase(const StateflowElementBase& orig);

  void setParent(std::shared_ptr<SimulinkElementBase> parent);
  virtual std::shared_ptr<StateflowElementBase> getParent() const = 0;
  std::shared_ptr<SimulinkElementBase> parent;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWELEMENTBASE_H