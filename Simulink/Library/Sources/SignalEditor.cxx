#include "SignalEditor.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SignalEditor::SignalEditor() {}

SignalEditor::~SignalEditor() {}

const std::string& SignalEditor::GetFilename() const
{
  return m_Filename;
}

void SignalEditor::SetFilename(const std::string& value)
{
  m_Filename = value;
}

const std::string& SignalEditor::GetActivescenario() const
{
  return m_Activescenario;
}

void SignalEditor::SetActivescenario(const std::string& value)
{
  m_Activescenario = value;
}

const std::string& SignalEditor::GetActivesignal() const
{
  return m_Activesignal;
}

void SignalEditor::SetActivesignal(const std::string& value)
{
  m_Activesignal = value;
}

const std::string& SignalEditor::GetIsbus() const
{
  return m_Isbus;
}

void SignalEditor::SetIsbus(const std::string& value)
{
  m_Isbus = value;
}

const std::string& SignalEditor::GetOutputbusobjectstr() const
{
  return m_Outputbusobjectstr;
}

void SignalEditor::SetOutputbusobjectstr(const std::string& value)
{
  m_Outputbusobjectstr = value;
}

const std::string& SignalEditor::GetSampletime() const
{
  return m_Sampletime;
}

void SignalEditor::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& SignalEditor::GetInterpolate() const
{
  return m_Interpolate;
}

void SignalEditor::SetInterpolate(const std::string& value)
{
  m_Interpolate = value;
}

const std::string& SignalEditor::GetZerocross() const
{
  return m_Zerocross;
}

void SignalEditor::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& SignalEditor::GetOutputafterfinalvalue() const
{
  return m_Outputafterfinalvalue;
}

void SignalEditor::SetOutputafterfinalvalue(const std::string& value)
{
  m_Outputafterfinalvalue = value;
}

const std::string& SignalEditor::GetUnit() const
{
  return m_Unit;
}

void SignalEditor::SetUnit(const std::string& value)
{
  m_Unit = value;
}

const std::string& SignalEditor::GetNumberofscenarios() const
{
  return m_Numberofscenarios;
}

void SignalEditor::SetNumberofscenarios(const std::string& value)
{
  m_Numberofscenarios = value;
}

const std::string& SignalEditor::GetNumberofsignals() const
{
  return m_Numberofsignals;
}

void SignalEditor::SetNumberofsignals(const std::string& value)
{
  m_Numberofsignals = value;
}

const std::string& SignalEditor::GetPreservesignalname() const
{
  return m_Preservesignalname;
}

void SignalEditor::SetPreservesignalname(const std::string& value)
{
  m_Preservesignalname = value;
}

const std::string& SignalEditor::GetApplysigpropstoallscenarios() const
{
  return m_Applysigpropstoallscenarios;
}

void SignalEditor::SetApplysigpropstoallscenarios(const std::string& value)
{
  m_Applysigpropstoallscenarios = value;
}

const std::string& SignalEditor::GetApplysigpropstoallsignals() const
{
  return m_Applysigpropstoallsignals;
}

void SignalEditor::SetApplysigpropstoallsignals(const std::string& value)
{
  m_Applysigpropstoallsignals = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
