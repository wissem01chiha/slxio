// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MODELWORKSPACEPARAMETER_H
#define MODELWORKSPACEPARAMETER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IParameterDataObjectBase.h"
#include "IParameterObjectBase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class ModelWorkspace;

/**
 * @class ModelWorkspaceParameter
 * @brief Generic parameter stored in a ModelWorkspace.
 */
class SLXIO_APIEXPORT ModelWorkspaceParameter final
  : public IParameterObjectBase
{
public:
  ModelWorkspaceParameter();

  ModelWorkspaceParameter(
    const std::string& name,
    const std::shared_ptr<ModelWorkspace>& data);

  IParameterObjectBase* New() override;

  DataType GetDataType() const override;

  UInt16 Size() const override;

  void SetData(
    const std::shared_ptr<ModelWorkspace>& data);

  std::shared_ptr<ModelWorkspace> GetData() const;

  ~ModelWorkspaceParameter() override = default;

private:
  std::shared_ptr<ModelWorkspace> m_data;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MODELWORKSPACEPARAMETER_H