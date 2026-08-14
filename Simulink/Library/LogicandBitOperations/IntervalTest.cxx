#include "IntervalTest.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IntervalTest::IntervalTest() {}

IntervalTest::~IntervalTest() {}

const std::string& IntervalTest::GetIntervalclosedright() const
{
  return m_Intervalclosedright;
}

void IntervalTest::SetIntervalclosedright(const std::string& value)
{
  m_Intervalclosedright = value;
}

const std::string& IntervalTest::GetUplimit() const
{
  return m_Uplimit;
}

void IntervalTest::SetUplimit(const std::string& value)
{
  m_Uplimit = value;
}

const std::string& IntervalTest::GetIntervalclosedleft() const
{
  return m_Intervalclosedleft;
}

void IntervalTest::SetIntervalclosedleft(const std::string& value)
{
  m_Intervalclosedleft = value;
}

const std::string& IntervalTest::GetLowlimit() const
{
  return m_Lowlimit;
}

void IntervalTest::SetLowlimit(const std::string& value)
{
  m_Lowlimit = value;
}

const std::string& IntervalTest::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void IntervalTest::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
