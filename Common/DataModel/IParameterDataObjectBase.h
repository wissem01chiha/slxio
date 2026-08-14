// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IPARAMETERDATAOBJECTBASE_H
#define IPARAMETERDATAOBJECTBASE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "DataType.h"
#include "IDataObject.h"
#include "IParameterObjectBase.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IParameterDataObjectBase
 * @brief Concrete implementation of IDataObject using IParameterObjectBase.
 * Wraps a parameter object so it can be treated as a data object.
 */
class SLXIO_APIEXPORT IParameterDataObjectBase : public IDataObject
{
public:
    IParameterDataObjectBase* New() override;
    void Initialize(void* implDataObject) override;

    void* GetImplDataObject() const override;
    std::string ToString() const override;
    bool Empty() const override;
    bool operator==(const IDataObject& other) const override;
    DataType GetDataType() const override;

    virtual ~IParameterDataObjectBase()= default;

private:
    std::shared_ptr<IParameterObjectBase> m_param;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IPARAMETERDATAOBJECTBASE_H
