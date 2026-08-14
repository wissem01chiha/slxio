#include "Docblock.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Docblock::Docblock() {}

Docblock::~Docblock() {}

const std::string& Docblock::GetEcoderflag() const { return m_Ecoderflag; }

void Docblock::SetEcoderflag(const std::string& value) { m_Ecoderflag = value; }

const std::string& Docblock::GetDocumenttype() const { return m_Documenttype; }

void Docblock::SetDocumenttype(const std::string& value)
{
    m_Documenttype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
