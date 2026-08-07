// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ARRAYLOGMESSAGE_H
#define ARRAYLOGMESSAGE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "ILogMessage.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ArrayLogMessage
 * @brief Implementation of ILogMessage for std::array<T,N> based objects
 */
template <typename T, size_t N>
class SLXIO_APIEXPORT ArrayLogMessage : public ILogMessage
{
public:
  ArrayLogMessage(std::array<T, N> d)
    : m_data(std::move(d))
  {
  }

  std::string ToString() const override
  {
    std::ostringstream oss;
    for (auto& s : m_data)
      oss << s << " ";
    return oss.str();
  }

  ArrayLogMessage operator+(const ArrayLogMessage& rhs) const override
  {
    std::array<T, N> combined = m_data;
    return ArrayLogMessage(combined);
  }

  ~ArrayLogMessage() = default;

private:
  std::array<T, N> m_data;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ARRAYLOGMESSAGE_H