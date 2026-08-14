#include "MatlabSystem.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

MatlabSystem::MatlabSystem() {}

MatlabSystem::~MatlabSystem() {}

const std::string& MatlabSystem::GetSystem() const { return m_System; }

void MatlabSystem::SetSystem(const std::string& value) { m_System = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
