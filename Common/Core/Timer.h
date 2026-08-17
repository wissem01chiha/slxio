// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TIMER_H
#define TIMER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "IObservable.h"
#include "PlatformTypes.h"
#include "TimeStamp.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Timer
 * @brief High-resolution timer with observer notifications
 */
class SLXIO_APIEXPORT Timer final : public IObservable
{
public:
    using Clock = std::chrono::steady_clock;

    Timer();
    ~Timer();

    void Start();
    void Stop();
    void Reset();
    bool IsRunning() const;
    Float32 Precision() const;
    Float32 Time();

private:
    void NotifyState(const std::string& state);
    void NotifyTimeout();

    Clock::time_point m_startTime{};
    bool m_running{false};
    Clock::duration m_accumulated{Clock::duration::zero()};
    std::vector<IObserver*> m_observers;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TIMER_H
