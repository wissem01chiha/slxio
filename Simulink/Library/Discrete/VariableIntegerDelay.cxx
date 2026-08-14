#include "VariableIntegerDelay.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

VariableIntegerDelay::VariableIntegerDelay() {}

VariableIntegerDelay::~VariableIntegerDelay() {}

const std::string& VariableIntegerDelay::GetDelaylengthsource() const
{
    return m_Delaylengthsource;
}

void VariableIntegerDelay::SetDelaylengthsource(const std::string& value)
{
    m_Delaylengthsource = value;
}

const std::string& VariableIntegerDelay::GetDelaylength() const
{
    return m_Delaylength;
}

void VariableIntegerDelay::SetDelaylength(const std::string& value)
{
    m_Delaylength = value;
}

const std::string& VariableIntegerDelay::GetDelaylengthupperlimit() const
{
    return m_Delaylengthupperlimit;
}

void VariableIntegerDelay::SetDelaylengthupperlimit(const std::string& value)
{
    m_Delaylengthupperlimit = value;
}

const std::string& VariableIntegerDelay::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void VariableIntegerDelay::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& VariableIntegerDelay::GetInitialcondition() const
{
    return m_Initialcondition;
}

void VariableIntegerDelay::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& VariableIntegerDelay::GetExternalreset() const
{
    return m_Externalreset;
}

void VariableIntegerDelay::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& VariableIntegerDelay::GetShowenableport() const
{
    return m_Showenableport;
}

void VariableIntegerDelay::SetShowenableport(const std::string& value)
{
    m_Showenableport = value;
}

const std::string& VariableIntegerDelay::GetPreventdirectfeedthrough() const
{
    return m_Preventdirectfeedthrough;
}

void VariableIntegerDelay::SetPreventdirectfeedthrough(const std::string& value)
{
    m_Preventdirectfeedthrough = value;
}

const std::string& VariableIntegerDelay::GetDiagnosticfordelaylength() const
{
    return m_Diagnosticfordelaylength;
}

void VariableIntegerDelay::SetDiagnosticfordelaylength(const std::string& value)
{
    m_Diagnosticfordelaylength = value;
}

const std::string&
VariableIntegerDelay::GetRemovedelaylengthcheckingeneratedcode() const
{
    return m_Removedelaylengthcheckingeneratedcode;
}

void VariableIntegerDelay::SetRemovedelaylengthcheckingeneratedcode(
    const std::string& value)
{
    m_Removedelaylengthcheckingeneratedcode = value;
}

const std::string& VariableIntegerDelay::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void VariableIntegerDelay::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& VariableIntegerDelay::GetUsecircularbuffer() const
{
    return m_Usecircularbuffer;
}

void VariableIntegerDelay::SetUsecircularbuffer(const std::string& value)
{
    m_Usecircularbuffer = value;
}

const std::string& VariableIntegerDelay::GetSampletime() const
{
    return m_Sampletime;
}

void VariableIntegerDelay::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& VariableIntegerDelay::GetStatename() const
{
    return m_Statename;
}

void VariableIntegerDelay::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string&
VariableIntegerDelay::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void VariableIntegerDelay::SetStatemustresolvetosignalobject(
    const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& VariableIntegerDelay::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void VariableIntegerDelay::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& VariableIntegerDelay::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void VariableIntegerDelay::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string&
VariableIntegerDelay::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void VariableIntegerDelay::SetCodegenstatestoragetypequalifier(
    const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
