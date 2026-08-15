// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TIMESTAMP_H
#define TIMESTAMP_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class TimeStamp
 * @brief Lightweight wrapper around steady_clock::time_point
 */
class SLXIO_APIEXPORT TimeStamp final
{
public:
    TimeStamp();
    explicit TimeStamp(std::chrono::steady_clock::time_point tp);
    static TimeStamp Now();
    Float64 Elapsed(const TimeStamp& other) const;
    std::string ToString() const;

private:
    std::chrono::steady_clock::time_point m_time;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TIMESTAMP_H
