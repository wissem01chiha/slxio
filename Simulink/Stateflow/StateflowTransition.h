// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWTRANSITION_H
#define STATEFLOWTRANSITION_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include <memory>
#include <string>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class StateflowNodeBase;

/**
 * @brief A Stateflow transition.
 */
class SLXIO_APIEXPORT StateflowTransition final
{
public:
  StateflowTransition(const std::shared_ptr<StateflowNodeBase>& dst);
  StateflowTransition(
    const std::shared_ptr<StateflowNodeBase>& src, const std::shared_ptr<StateflowNodeBase>& dst);

  std::shared_ptr<StateflowNodeBase> getSrc() const;
  std::shared_ptr<StateflowNodeBase> getDst() const;

  std::string getLabel() const;
  void RemoveElement();

  std::string ToString() const;

private:
  std::shared_ptr<StateflowNodeBase> src;
  std::shared_ptr<StateflowNodeBase> dst;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // STATEFLOWTRANSITION_H
