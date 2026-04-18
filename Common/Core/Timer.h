// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Timer_h__
#define __Timer_h__

#include "ABINamespace.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base Class for All Implemented Timers
 * @note Not Yet Used
 */
class Timer 
{
public:
  virtual ~Timer();

  /// @brief Call Start every time to reset the timer to zero.
  virtual void start() = 0;
  virtual void stop() = 0;
  virtual void reset() = 0;
  virtual bool is_running() const = 0;
  virtual Float precision() const = 0;
  /// @brief Obtains a timer measurement in seconds.
  /// @return The amount of time since the timer started.
  virtual Float time() = 0;

protected:
  Timer() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* __Timer_h__ */