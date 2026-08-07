// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ARRAYLOGMESSAGE_H
#define ARRAYLOGMESSAGE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "DataType.h"
#include "ErrorManager.h"
#include "ErrorTypes.h"
#include "ILogMessage.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ArrayLogMessage
 * @brief Implementation of ILogMessage for std::array<T,N> based objects,
 * a fixed size logging message contain N elments of type T
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

  bool Empty() const override { return m_data.empty(); };

  /**
   * Since std::array is a fixed size at compile time, operator+ is not supported
   * we disable it, an error code is flagged and returns a nullptr object
   */
  std::unique_ptr<ILogMessage> operator+(const ILogMessage& rhs) const override
  {
    ErrorManager::GetInstance().SetResult(E_OPERATION_NOT_SUPPORTED);
    return nullptr;
  }

  DataType GetDataType() const override
  {
    return DataType::SLXIO_TYPE_ARRAYLOGMESSAGE;
  }
  ~ArrayLogMessage() = default;

private:
  std::array<T, N> m_data;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ARRAYLOGMESSAGE_H