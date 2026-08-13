#include "Delay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Delay::Delay() {}

Delay::~Delay() {}

const std::string& Delay::GetDelaylengthsource() const
{
    return m_Delaylengthsource;
}

void Delay::SetDelaylengthsource(const std::string& value)
{
    m_Delaylengthsource = value;
}

const std::string& Delay::GetDelaylength() const
{
    return m_Delaylength;
}

void Delay::SetDelaylength(const std::string& value)
{
    m_Delaylength = value;
}

const std::string& Delay::GetDelaylengthupperlimit() const
{
    return m_Delaylengthupperlimit;
}

void Delay::SetDelaylengthupperlimit(const std::string& value)
{
    m_Delaylengthupperlimit = value;
}

const std::string& Delay::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void Delay::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& Delay::GetInitialcondition() const
{
    return m_Initialcondition;
}

void Delay::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& Delay::GetExternalreset() const
{
    return m_Externalreset;
}

void Delay::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& Delay::GetShowenableport() const
{
    return m_Showenableport;
}

void Delay::SetShowenableport(const std::string& value)
{
    m_Showenableport = value;
}

const std::string& Delay::GetPreventdirectfeedthrough() const
{
    return m_Preventdirectfeedthrough;
}

void Delay::SetPreventdirectfeedthrough(const std::string& value)
{
    m_Preventdirectfeedthrough = value;
}

const std::string& Delay::GetDiagnosticfordelaylength() const
{
    return m_Diagnosticfordelaylength;
}

void Delay::SetDiagnosticfordelaylength(const std::string& value)
{
    m_Diagnosticfordelaylength = value;
}

const std::string& Delay::GetRemovedelaylengthcheckingeneratedcode() const
{
    return m_Removedelaylengthcheckingeneratedcode;
}

void Delay::SetRemovedelaylengthcheckingeneratedcode(const std::string& value)
{
    m_Removedelaylengthcheckingeneratedcode = value;
}

const std::string& Delay::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void Delay::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& Delay::GetUsecircularbuffer() const
{
    return m_Usecircularbuffer;
}

void Delay::SetUsecircularbuffer(const std::string& value)
{
    m_Usecircularbuffer = value;
}

const std::string& Delay::GetSampletime() const
{
    return m_Sampletime;
}

void Delay::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Delay::GetStatename() const
{
    return m_Statename;
}

void Delay::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& Delay::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void Delay::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& Delay::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void Delay::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& Delay::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void Delay::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& Delay::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void Delay::SetCodegenstatestoragetypequalifier(const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
