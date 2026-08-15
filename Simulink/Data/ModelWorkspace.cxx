#include "ModelWorkspace.h"
#include "DataECH.h"
#include "DataSourceType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

std::shared_ptr<IParameterObjectBase>
ModelWorkspace::GetVariable(const std::string& name) const
{
    auto it = m_variables.find(name);
    if (it != m_variables.end())
    {
        return it->second;
    }

    return nullptr;
}

HError
ModelWorkspace::AssignVariable(const std::string& name,
                               const std::shared_ptr<IParameterObjectBase>& p)
{
    if (!p)
    {
        return E_INVALID_ARGUMENT;
    }

    m_variables[name] = p;
    return E_OK;
}

HError ModelWorkspace::ClearVariable(const std::string& name)
{
    auto it = m_variables.find(name);
    if (it != m_variables.end())
    {
        m_variables.erase(it);
    }

    return E_OK;
}

HError ModelWorkspace::ClearAll()
{
    m_variables.clear();
    return E_OK;
}

std::shared_ptr<DataSourceType> ModelWorkspace::GetDataSourceType()
{
    return m_dataSource;
}

const std::string ModelWorkspace::GetFileName() { return m_fileName; }

std::string ModelWorkspace::GetMatlabCode() { return m_matlabCode; }

UInt16 ModelWorkspace::GetVariableCount() const
{
    return SLXIO_STATIC_CAST(UInt16, m_variables.size());
}

HError ModelWorkspace::SetLogger(ILogger* logger)
{
    if (logger == nullptr)
    {
        return E_ILOGGER_NULLPTR_RECEIVED;
    }

    m_logger = logger;
    return E_OK;
}

const ILogger* ModelWorkspace::GetLogger() { return m_logger; }

SLXIO_ABI_NAMESPACE_END
} // namespace slxio