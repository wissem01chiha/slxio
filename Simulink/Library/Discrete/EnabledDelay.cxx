#include "EnabledDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

EnabledDelay::EnabledDelay() {}

EnabledDelay::~EnabledDelay() {}

const std::string& EnabledDelay::GetDelaylengthsource() const
{
  return m_Delaylengthsource;
}

void EnabledDelay::SetDelaylengthsource(const std::string& value)
{
  m_Delaylengthsource = value;
}

const std::string& EnabledDelay::GetDelaylength() const
{
  return m_Delaylength;
}

void EnabledDelay::SetDelaylength(const std::string& value)
{
  m_Delaylength = value;
}

const std::string& EnabledDelay::GetDelaylengthupperlimit() const
{
  return m_Delaylengthupperlimit;
}

void EnabledDelay::SetDelaylengthupperlimit(const std::string& value)
{
  m_Delaylengthupperlimit = value;
}

const std::string& EnabledDelay::GetInitialconditionsource() const
{
  return m_Initialconditionsource;
}

void EnabledDelay::SetInitialconditionsource(const std::string& value)
{
  m_Initialconditionsource = value;
}

const std::string& EnabledDelay::GetInitialcondition() const
{
  return m_Initialcondition;
}

void EnabledDelay::SetInitialcondition(const std::string& value)
{
  m_Initialcondition = value;
}

const std::string& EnabledDelay::GetExternalreset() const
{
  return m_Externalreset;
}

void EnabledDelay::SetExternalreset(const std::string& value)
{
  m_Externalreset = value;
}

const std::string& EnabledDelay::GetShowenableport() const
{
  return m_Showenableport;
}

void EnabledDelay::SetShowenableport(const std::string& value)
{
  m_Showenableport = value;
}

const std::string& EnabledDelay::GetPreventdirectfeedthrough() const
{
  return m_Preventdirectfeedthrough;
}

void EnabledDelay::SetPreventdirectfeedthrough(const std::string& value)
{
  m_Preventdirectfeedthrough = value;
}

const std::string& EnabledDelay::GetDiagnosticfordelaylength() const
{
  return m_Diagnosticfordelaylength;
}

void EnabledDelay::SetDiagnosticfordelaylength(const std::string& value)
{
  m_Diagnosticfordelaylength = value;
}

const std::string& EnabledDelay::GetRemovedelaylengthcheckingeneratedcode()
  const
{
  return m_Removedelaylengthcheckingeneratedcode;
}

void EnabledDelay::SetRemovedelaylengthcheckingeneratedcode(
  const std::string& value)
{
  m_Removedelaylengthcheckingeneratedcode = value;
}

const std::string& EnabledDelay::GetInputprocessing() const
{
  return m_Inputprocessing;
}

void EnabledDelay::SetInputprocessing(const std::string& value)
{
  m_Inputprocessing = value;
}

const std::string& EnabledDelay::GetUsecircularbuffer() const
{
  return m_Usecircularbuffer;
}

void EnabledDelay::SetUsecircularbuffer(const std::string& value)
{
  m_Usecircularbuffer = value;
}

const std::string& EnabledDelay::GetSampletime() const
{
  return m_Sampletime;
}

void EnabledDelay::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& EnabledDelay::GetStatename() const
{
  return m_Statename;
}

void EnabledDelay::SetStatename(const std::string& value)
{
  m_Statename = value;
}

const std::string& EnabledDelay::GetStatemustresolvetosignalobject() const
{
  return m_Statemustresolvetosignalobject;
}

void EnabledDelay::SetStatemustresolvetosignalobject(const std::string& value)
{
  m_Statemustresolvetosignalobject = value;
}

const std::string& EnabledDelay::GetStatesignalobject() const
{
  return m_Statesignalobject;
}

void EnabledDelay::SetStatesignalobject(const std::string& value)
{
  m_Statesignalobject = value;
}

const std::string& EnabledDelay::GetStatestorageclass() const
{
  return m_Statestorageclass;
}

void EnabledDelay::SetStatestorageclass(const std::string& value)
{
  m_Statestorageclass = value;
}

const std::string& EnabledDelay::GetCodegenstatestoragetypequalifier() const
{
  return m_Codegenstatestoragetypequalifier;
}

void EnabledDelay::SetCodegenstatestoragetypequalifier(const std::string& value)
{
  m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
