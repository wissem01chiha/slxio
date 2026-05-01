// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Logger.h"
#include "SimulinkContent.h"
#include "SimulinkFileBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkFileParser;

/*
 * @brief SimulinkFile is a facade combining metadata and content
 * for a Simulink .slx file. Metadata is inherited from
 * SimulinkFileBase, while file contents are delegated to
 * SimulinkContent.
 */
class APIEXPORT SimulinkFile final : public SimulinkFileBase
{
public:
  friend class SimulinkFileParser;

  SimulinkFile();

  /// @brief  Retrieve the content of the Simulink file as a SimulinkContent
  /// object.
  const SimulinkContent& getContent() const;

  ~SimulinkFile() = default;

private:
  Logger& l;
  SimulinkContent content;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
