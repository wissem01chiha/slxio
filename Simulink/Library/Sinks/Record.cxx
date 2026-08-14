#include "Record.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Record::Record() {}

Record::~Record() {}

const std::string& Record::GetNumports() const { return m_Numports; }

void Record::SetNumports(const std::string& value) { m_Numports = value; }

const std::string& Record::GetFramesettings() const { return m_Framesettings; }

void Record::SetFramesettings(const std::string& value)
{
    m_Framesettings = value;
}

const std::string& Record::GetLayout() const { return m_Layout; }

void Record::SetLayout(const std::string& value) { m_Layout = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
