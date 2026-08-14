#include "Fix.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Fix::Fix() {}

Fix::~Fix() {}

const std::string& Fix::GetOperator() const { return m_Operator; }

void Fix::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Fix::GetSampletime() const { return m_Sampletime; }

void Fix::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
