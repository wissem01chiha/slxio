#include "DiscreteStateSpace.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteStateSpace::DiscreteStateSpace() {}

DiscreteStateSpace::~DiscreteStateSpace() {}

const std::string& DiscreteStateSpace::GetA() const
{
  return m_A;
}

void DiscreteStateSpace::SetA(const std::string& value)
{
  m_A = value;
}

const std::string& DiscreteStateSpace::GetB() const
{
  return m_B;
}

void DiscreteStateSpace::SetB(const std::string& value)
{
  m_B = value;
}

const std::string& DiscreteStateSpace::GetC() const
{
  return m_C;
}

void DiscreteStateSpace::SetC(const std::string& value)
{
  m_C = value;
}

const std::string& DiscreteStateSpace::GetD() const
{
  return m_D;
}

void DiscreteStateSpace::SetD(const std::string& value)
{
  m_D = value;
}

const std::string& DiscreteStateSpace::GetInitialcondition() const
{
  return m_Initialcondition;
}

void DiscreteStateSpace::SetInitialcondition(const std::string& value)
{
  m_Initialcondition = value;
}

const std::string& DiscreteStateSpace::GetSampletime() const
{
  return m_Sampletime;
}

void DiscreteStateSpace::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& DiscreteStateSpace::GetStatename() const
{
  return m_Statename;
}

void DiscreteStateSpace::SetStatename(const std::string& value)
{
  m_Statename = value;
}

const std::string& DiscreteStateSpace::GetStatemustresolvetosignalobject() const
{
  return m_Statemustresolvetosignalobject;
}

void DiscreteStateSpace::SetStatemustresolvetosignalobject(
  const std::string& value)
{
  m_Statemustresolvetosignalobject = value;
}

const std::string& DiscreteStateSpace::GetStatesignalobject() const
{
  return m_Statesignalobject;
}

void DiscreteStateSpace::SetStatesignalobject(const std::string& value)
{
  m_Statesignalobject = value;
}

const std::string& DiscreteStateSpace::GetStatestorageclass() const
{
  return m_Statestorageclass;
}

void DiscreteStateSpace::SetStatestorageclass(const std::string& value)
{
  m_Statestorageclass = value;
}

const std::string& DiscreteStateSpace::GetRtwstatestoragetypequalifier() const
{
  return m_Rtwstatestoragetypequalifier;
}

void DiscreteStateSpace::SetRtwstatestoragetypequalifier(
  const std::string& value)
{
  m_Rtwstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
