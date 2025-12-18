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

#ifndef SIMULINKLINE_H
#define SIMULINKLINE_H

#include "SimulinkPort.h"
#include "SimulinkElementBase.h"
#include "SimulinkElementType.h"
#include "ABINamespace.h"
#include "Type.h"
#include "APIExport.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/** @brief A Simulink line.*/
class APIEXPORT SimulinkLine final : public SimulinkElementBase {
public:
  SimulinkLine();
  SimulinkLine(const SimulinkLine &other);
  SimulinkLine(std::shared_ptr<SimulinkPort> pOut,
               std::shared_ptr<SimulinkPort> pIn);
  SimulinkLine &operator=(const SimulinkLine &) = delete;
  SimulinkLine(SimulinkPort sourcePort, SimulinkPort destPort);
  SimulinkElementType getType() const override;
  std::string toString() const override;
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;
  Index getID() const override;
  bool contains(uint32 id) const override;

private:
  Index lineId;
  std::shared_ptr<SimulinkPort> sourcePort;
  std::shared_ptr<SimulinkPort> destPort;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKLINE_H