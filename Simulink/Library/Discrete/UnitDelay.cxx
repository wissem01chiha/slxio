#include "UnitDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UnitDelay::UnitDelay() {}

UnitDelay::~UnitDelay() {}

const std::string& UnitDelay::GetInitialcondition() const
{
  return m_Initialcondition;
}

void UnitDelay::SetInitialcondition(const std::string& value)
{
  m_Initialcondition = value;
}

const std::string& UnitDelay::GetInputprocessing() const
{
  return m_Inputprocessing;
}

void UnitDelay::SetInputprocessing(const std::string& value)
{
  m_Inputprocessing = value;
}

const std::string& UnitDelay::GetSampletime() const
{
  return m_Sampletime;
}

void UnitDelay::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& UnitDelay::GetStatename() const
{
  return m_Statename;
}

void UnitDelay::SetStatename(const std::string& value)
{
  m_Statename = value;
}

const std::string& UnitDelay::GetStatemustresolvetosignalobject() const
{
  return m_Statemustresolvetosignalobject;
}

void UnitDelay::SetStatemustresolvetosignalobject(const std::string& value)
{
  m_Statemustresolvetosignalobject = value;
}

const std::string& UnitDelay::GetStatesignalobject() const
{
  return m_Statesignalobject;
}

void UnitDelay::SetStatesignalobject(const std::string& value)
{
  m_Statesignalobject = value;
}

const std::string& UnitDelay::GetStatestorageclass() const
{
  return m_Statestorageclass;
}

void UnitDelay::SetStatestorageclass(const std::string& value)
{
  m_Statestorageclass = value;
}

const std::string& UnitDelay::GetCodegenstatestoragetypequalifier() const
{
  return m_Codegenstatestoragetypequalifier;
}

void UnitDelay::SetCodegenstatestoragetypequalifier(const std::string& value)
{
  m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
