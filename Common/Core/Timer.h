// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TIMER_H
#define TIMER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <chrono>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Timer
 * @brief Abstract class for all Timers
 */
class SLXIO_APIEXPORT Timer final
{
public:
  using Clock = std::chrono::steady_clock;

  /**
   * Default Constructor
   */
  Timer() = default;

  /**
   * Default Destructor
   */
  ~Timer() = default;

  /**
   * Call Start every time to reset the timer to zero.
   */
  void Start();

  /**
   * Stops the timer and records the elapsed time.
   */
  void Stop();

  /**
   * Resets the timer state and clears any recorded time.
   */
  void Reset();

  /**
   * Checks whether the timer is currently running.
   */
  bool IsRunning() const;

  /**
   * Returns the precision or resolution of the timer in seconds.
   */
  Float32 Precision() const;

  /**
   * Obtains a timer measurement in seconds.
   */
  Float32 Time();

private:
  Clock::time_point StartTime;
  bool Running =false;
  Clock::duration Accumulated{ Clock::duration::zero() };
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // TIMER_H
