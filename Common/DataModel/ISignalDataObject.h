// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISIGNALDATAOBJECT_H
#define ISIGNALDATAOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "IDataObject.h"
#include "ISignalObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ISignalDataObject
 * @brief Specialization of IDataObject for an ISignalObject-based type
 * This interface acts like a bridge so we don't need every signal type
 * to re‑implement IDataObject separately.
 * adding a new signal object implement only ISignalObject<T> (Base class for
 * all typed signals including SimulinkSignal one), this can be seen as adpater
 * for ISignalObject to IDataObject based so they can used directly as
 * IDataObjects eg ISignalDataObject<float> signalDataObj;
 * @example
 * @code{.cpp}
 * auto* floatSignal = new SignalFloat();
 * float value = 25.3f;
 * floatSignal->Initialize(value);
 * // wrapper
 * ISignalDataObject<float> dataObj;
 * dataObj.New();
 * dataObj.Initialize(floatSignal);
 * @endcode
 */
template <typename T>
class SLXIO_APIEXPORT ISignalDataObject : public IDataObject
{
public:
  ISignalDataObject()
    : m_signal(nullptr)
  {
  }
  virtual ~ISignalDataObject() = default;

  IDataObject* New() override { return new ISignalDataObject<T>(); }

  bool operator==(const IDataObject& other) override
  {
    const auto* otherObj = dynamic_cast<const ISignalDataObject<T>*>(&other);
    if (!otherObj || !m_signal || !otherObj->m_signal)
      return false;
    return m_signal->GetData() == otherObj->m_signal->GetData();
  }

  void* GetImplDataObject() const override { return m_signal; }

  std::string ToString() const override { return "ISignalDataObject <" + ">"; }

  bool Empty() const override { return m_signal ? m_signal->Empty() : true; }

private:
  ISignalObject<T>* m_signal;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ISIGNALDATAOBJECT_H
