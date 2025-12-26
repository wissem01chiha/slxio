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

#include "ABINamespace.h"
#include "APIExport.h"
#include "SimulinkElementBase.h"
#include "SimulinkElementType.h"
#include "SimulinkPort.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Simulink line.
 */
class APIEXPORT SimulinkLine final : public SimulinkElementBase {
public:
  SimulinkLine();
  SimulinkLine(const SimulinkLine &other);
  SimulinkLine(std::shared_ptr<SimulinkPort> pOut,
               std::shared_ptr<SimulinkPort> pIn);
  SimulinkLine &operator=(const SimulinkLine &) = delete;
  SimulinkLine(SimulinkPort sourcePort_, SimulinkPort destPort_);
  SimulinkElementType getType() const override;
  std::string toString() const override;
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;
  Index getID() const override;

  /**
   * @brief Check if the line ID matches the given identifier.
   * @param id The identifier to compare against.
   * @return True if the line ID equals the given id, false otherwise.
   */
  bool contains(const Index &id) const override;

  /**
   * @brief Check if the line is connected to both source and destination ports.
   * @details A line is considered connected if both the source and destination
   * ports are non-null (set during creation).
   * @return True if both ports are valid, false otherwise.
   */
  bool isConnected();

private:
  Index lineId;
  std::shared_ptr<SimulinkPort> sourcePort = nullptr;
  std::shared_ptr<SimulinkPort> destPort = nullptr;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKLINE_H