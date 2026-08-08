// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIGNALOBJECT_H
#define SIGNALOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SignalObject 
 * @brief 
 */
template<typename T>
class SLXIO_APIEXPORT SignalObject  {
public:
    SignalObject();
    explicit SignalObject(size_t size);
    ~SignalObject() = default;

    virtual void SetData(const std::vector<T>& data) = 0 ;
    virtual  const std::vector<T>& GetData() const = 0;
    virtual  std::vector<T>& GetData() = 0;

    virtual  size_t Size() const = 0 ;
protected:
    std::vector<T> m_buffer;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIGNALOBJECT_H
