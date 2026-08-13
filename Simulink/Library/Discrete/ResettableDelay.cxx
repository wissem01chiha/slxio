#include "ResettableDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ResettableDelay::ResettableDelay() {}

ResettableDelay::~ResettableDelay() {}

const std::string& ResettableDelay::GetDelaylengthsource() const
{
    return m_Delaylengthsource;
}

void ResettableDelay::SetDelaylengthsource(const std::string& value)
{
    m_Delaylengthsource = value;
}

const std::string& ResettableDelay::GetDelaylength() const
{
    return m_Delaylength;
}

void ResettableDelay::SetDelaylength(const std::string& value)
{
    m_Delaylength = value;
}

const std::string& ResettableDelay::GetDelaylengthupperlimit() const
{
    return m_Delaylengthupperlimit;
}

void ResettableDelay::SetDelaylengthupperlimit(const std::string& value)
{
    m_Delaylengthupperlimit = value;
}

const std::string& ResettableDelay::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void ResettableDelay::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& ResettableDelay::GetInitialcondition() const
{
    return m_Initialcondition;
}

void ResettableDelay::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& ResettableDelay::GetExternalreset() const
{
    return m_Externalreset;
}

void ResettableDelay::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& ResettableDelay::GetShowenableport() const
{
    return m_Showenableport;
}

void ResettableDelay::SetShowenableport(const std::string& value)
{
    m_Showenableport = value;
}

const std::string& ResettableDelay::GetPreventdirectfeedthrough() const
{
    return m_Preventdirectfeedthrough;
}

void ResettableDelay::SetPreventdirectfeedthrough(const std::string& value)
{
    m_Preventdirectfeedthrough = value;
}

const std::string& ResettableDelay::GetDiagnosticfordelaylength() const
{
    return m_Diagnosticfordelaylength;
}

void ResettableDelay::SetDiagnosticfordelaylength(const std::string& value)
{
    m_Diagnosticfordelaylength = value;
}

const std::string& ResettableDelay::GetRemovedelaylengthcheckingeneratedcode() const
{
    return m_Removedelaylengthcheckingeneratedcode;
}

void ResettableDelay::SetRemovedelaylengthcheckingeneratedcode(const std::string& value)
{
    m_Removedelaylengthcheckingeneratedcode = value;
}

const std::string& ResettableDelay::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void ResettableDelay::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& ResettableDelay::GetUsecircularbuffer() const
{
    return m_Usecircularbuffer;
}

void ResettableDelay::SetUsecircularbuffer(const std::string& value)
{
    m_Usecircularbuffer = value;
}

const std::string& ResettableDelay::GetSampletime() const
{
    return m_Sampletime;
}

void ResettableDelay::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& ResettableDelay::GetStatename() const
{
    return m_Statename;
}

void ResettableDelay::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& ResettableDelay::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void ResettableDelay::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& ResettableDelay::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void ResettableDelay::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& ResettableDelay::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void ResettableDelay::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& ResettableDelay::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void ResettableDelay::SetCodegenstatestoragetypequalifier(const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
