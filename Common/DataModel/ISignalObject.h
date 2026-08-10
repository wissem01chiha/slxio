// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISIGNALOBJECT_H
#define ISIGNALOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "DataType.h"
#include "ILogger.h"
#include "DataModelECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ISignalObject
 */
template <typename T>
class SLXIO_APIEXPORT ISignalObject
{
public:
  virtual ISignalObject* New() = 0;
  virtual void Initialize(T& value) = 0;

  virtual void SetData(const std::vector<T>& data) = 0;
  virtual const std::vector<T>& GetData() const = 0;
  virtual std::vector<T>& GetData() = 0;
  virtual DataType GetDataType() = 0 ;
  virtual size_t Size() const = 0;
  virtual bool Empty() const =0;

  HError SetLogger(const ILogger* logger){ if(logger==nullptr){
    return E_ILOGGER_NULLPTR_RECEIVED;
  }
  m_logger = logger;
  return E_OK;
};
  const ILogger* GetLogger(){
    return m_logger;
  };

    SignalObject();

    virtual  ~SignalObject() = default;
protected:
  const ILogger* m_logger = nullptr;
  std::vector<T> m_buffer;
private:

};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ISIGNALOBJECT_H
