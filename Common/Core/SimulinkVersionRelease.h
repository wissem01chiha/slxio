// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKVERSIONRELEASE_H
#define SIMULINKVERSIONRELEASE_H

#include "ABINamespaceMacro.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @enum SimulinkVersionRelease
 * @brief Enumeration class containing all Simulink© Releases
 * supported, this may grow by time, adding support/patches for newer
 * releases, note that slxio and Simulink DO NOT follow the same versioning
 * system!
 */
enum class SimulinkVersionRelease
{
  R2018a,
  R2018b,
  R2019a,
  R2019b,
  R2020a,
  R2020b,
  R2021a,
  R2021b,
  R2022a,
  R2022b,
  R2023a,
  R2023b,
  R2024a,
  R2024b,
  R2025a,
  R2025b
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKVERSIONRELEASE_H