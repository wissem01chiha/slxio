// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Timer_h__
#define __Timer_h__

#include "ABINamespaceMacro.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Timer
 * @brief  Abstract class for all Timers
 */
class Timer 
{
public:
  virtual ~Timer();

  /** 
   * Call Start every time to reset the timer to zero.
   */
  virtual void Start() = 0;

  /**
   *  
   */
  virtual void Stop() = 0;

  /**
   * 
   */
  virtual void Reset() = 0;

  /**
   * 
   */
  virtual bool IsRunning() const = 0;

  /**
   * 
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

#endif /* __Timer_h__ */