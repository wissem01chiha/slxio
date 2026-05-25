// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKLINE_H
#define SIMULINKLINE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Logger.h"
#include "PlatformTypes.h"
#include "SimulinkElementBase.h"
#include "SimulinkElementType.h"
#include "SimulinkPort.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkLine
 * @brief A Simulink line.
 */
class SLXIO_APIEXPORT SimulinkLine final : public SimulinkElementBase
{
public:
  SimulinkLine();
  SimulinkLine(const SimulinkLine& other);
  SimulinkLine(
    std::shared_ptr<SimulinkPort> pOut, std::shared_ptr<SimulinkPort> pIn);
  SimulinkLine& operator=(const SimulinkLine&) = delete;
  SimulinkLine(SimulinkPort sourcePort_, SimulinkPort destPort);

  /**
   *
   */
  SimulinkElementType GetElementType() const override;

  /**
   *
   */
  std::string ToString() const override;

  /**
   *
   */
  ReturnType RemoveElement(
    std::shared_ptr<SimulinkElementBase> element) override;

  /**
   *
   */
  ReturnType AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  /**
   *
   */
  IdType GetElementId() const override;

  /**
   * Check if the line Id matches the given identifier.
   */
  bool Contains(const IdType& id) const override;

  /**
   * Check if the line is connected to both source and
   * destination ports. A line is considered connected if both the source and
   * destination ports are non-null (set during creation).
   */
  bool IsConnected();

  /**
   *
   */
  std::shared_ptr<SimulinkPort> GetSourcePort();

  /**
   *
   */
  std::shared_ptr<SimulinkPort> GetDestPort();

  /**
   *
   */
  Logger& GetLogger();

private:
  IdType Id;
  Logger& logger;
  std::shared_ptr<SimulinkPort> SourcePort;
  std::shared_ptr<SimulinkPort> DestPort;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKLINE_H
