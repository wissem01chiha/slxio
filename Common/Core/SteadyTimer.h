// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STEADYTIMER_H
#define STEADYTIMER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "Timer.h"
#include <chrono>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SteadyTimer
 * @brief Implementation of timing utility that uses monotonic
 * std::chrono::steady_clock.
 */
class APIEXPORT SteadyTimer final : public Timer
{
public:
    SteadyTimer() = default;
    void Start() override;
    void Stop() override;
    void Reset() override;
    bool IsRunning() const override;
    Float32 Precision() const override;
    Float32 Time() override;
    ~SteadyTimer() = default;
private:
    using Clock = std::chrono::steady_clock;
    Clock::time_point StartTime;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STEADYTIMER_H