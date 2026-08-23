#include "ISimulinkBlock.h"
#include "SimulinkPortType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ISimulinkBlock::ISimulinkBlock() =default;

ISimulinkBlock::~ISimulinkBlock() =default;

HError ISimulinkBlock::AcceptInsert(ISimulinkElement& parent) { return E_OK; }

HError ISimulinkBlock::Insert(const std::shared_ptr<ISimulinkElement>& element)
{
    return E_OK;
}

SId ISimulinkBlock::GetId() const { return m_id; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
