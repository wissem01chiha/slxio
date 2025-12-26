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

#ifndef TIMER_H
#define TIMER_H

#include "ABINamespace.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base Class for All Implemented Timers
 * @note Not Yet Used
 */
class Timer {
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

#endif // TIMER_H