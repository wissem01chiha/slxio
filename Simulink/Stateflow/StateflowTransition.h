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

#ifndef STATEFLOWTRANSITION_H
#define STATEFLOWTRANSITION_H

#include "ABINamespace.h"
#include <string>
#include "APIExport.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class StateflowNodeBase;

/**
 * @brief A Stateflow transition.
 */
class APIEXPORT StateflowTransition final {
public:
    StateflowTransition(const std::shared_ptr<StateflowNodeBase>& dst);
    StateflowTransition(const std::shared_ptr<StateflowNodeBase>& src,
                        const std::shared_ptr<StateflowNodeBase>& dst);

    std::shared_ptr<StateflowNodeBase> getSrc() const;
    std::shared_ptr<StateflowNodeBase> getDst() const;

    std::string getLabel() const; 
    void remove();

    std::string toString() const;

private:
    std::shared_ptr<StateflowNodeBase> src;
    std::shared_ptr<StateflowNodeBase> dst;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWTRANSITION_H