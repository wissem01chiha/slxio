#include "EventListener.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

EventListener::EventListener() {}

EventListener::~EventListener() {}

const std::string& EventListener::GetEventtype() const
{
    return m_Eventtype;
}

void EventListener::SetEventtype(const std::string& value)
{
    m_Eventtype = value;
}

const std::string& EventListener::GetEventname() const
{
    return m_Eventname;
}

void EventListener::SetEventname(const std::string& value)
{
    m_Eventname = value;
}

const std::string& EventListener::GetVariant() const
{
    return m_Variant;
}

void EventListener::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& EventListener::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void EventListener::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& EventListener::GetGeneratepreprocessorconditionals() const
{
    return m_Generatepreprocessorconditionals;
}

void EventListener::SetGeneratepreprocessorconditionals(const std::string& value)
{
    m_Generatepreprocessorconditionals = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
