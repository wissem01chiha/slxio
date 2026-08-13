#include "DelayOneStep.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DelayOneStep::DelayOneStep() {}

DelayOneStep::~DelayOneStep() {}

const std::string& DelayOneStep::GetDelaylengthsource() const
{
    return m_Delaylengthsource;
}

void DelayOneStep::SetDelaylengthsource(const std::string& value)
{
    m_Delaylengthsource = value;
}

const std::string& DelayOneStep::GetDelaylength() const
{
    return m_Delaylength;
}

void DelayOneStep::SetDelaylength(const std::string& value)
{
    m_Delaylength = value;
}

const std::string& DelayOneStep::GetDelaylengthupperlimit() const
{
    return m_Delaylengthupperlimit;
}

void DelayOneStep::SetDelaylengthupperlimit(const std::string& value)
{
    m_Delaylengthupperlimit = value;
}

const std::string& DelayOneStep::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void DelayOneStep::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& DelayOneStep::GetInitialcondition() const
{
    return m_Initialcondition;
}

void DelayOneStep::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& DelayOneStep::GetExternalreset() const
{
    return m_Externalreset;
}

void DelayOneStep::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& DelayOneStep::GetShowenableport() const
{
    return m_Showenableport;
}

void DelayOneStep::SetShowenableport(const std::string& value)
{
    m_Showenableport = value;
}

const std::string& DelayOneStep::GetPreventdirectfeedthrough() const
{
    return m_Preventdirectfeedthrough;
}

void DelayOneStep::SetPreventdirectfeedthrough(const std::string& value)
{
    m_Preventdirectfeedthrough = value;
}

const std::string& DelayOneStep::GetDiagnosticfordelaylength() const
{
    return m_Diagnosticfordelaylength;
}

void DelayOneStep::SetDiagnosticfordelaylength(const std::string& value)
{
    m_Diagnosticfordelaylength = value;
}

const std::string& DelayOneStep::GetRemovedelaylengthcheckingeneratedcode() const
{
    return m_Removedelaylengthcheckingeneratedcode;
}

void DelayOneStep::SetRemovedelaylengthcheckingeneratedcode(const std::string& value)
{
    m_Removedelaylengthcheckingeneratedcode = value;
}

const std::string& DelayOneStep::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DelayOneStep::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DelayOneStep::GetUsecircularbuffer() const
{
    return m_Usecircularbuffer;
}

void DelayOneStep::SetUsecircularbuffer(const std::string& value)
{
    m_Usecircularbuffer = value;
}

const std::string& DelayOneStep::GetSampletime() const
{
    return m_Sampletime;
}

void DelayOneStep::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DelayOneStep::GetStatename() const
{
    return m_Statename;
}

void DelayOneStep::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& DelayOneStep::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DelayOneStep::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DelayOneStep::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DelayOneStep::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DelayOneStep::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DelayOneStep::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DelayOneStep::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void DelayOneStep::SetCodegenstatestoragetypequalifier(const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
