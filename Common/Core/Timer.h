// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TIMER_H
#define TIMER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Timer
 * @brief Abstract class for all Timers
 */
class APIEXPORT Timer 
{
public:
  virtual ~Timer() =default;

  /** 
   * Call Start every time to reset the timer to zero.
   */
  virtual void Start() = 0;

  /**
   * Stops the timer and records the elapsed time.
   */
  virtual void Stop() = 0;

  /**
   * Resets the timer state and clears any recorded time.
   */
  virtual void Reset() = 0;

  /**
   * Checks whether the timer is currently running.
   */
  virtual bool IsRunning() const = 0;

  /**
   * Returns the precision or resolution of the timer in seconds.
   */
  virtual Float32 Precision() const = 0;

  /**
   * Obtains a timer measurement in seconds.
   */ 
  virtual Float32 Time() = 0;

protected:
  Timer() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // TIMER_H