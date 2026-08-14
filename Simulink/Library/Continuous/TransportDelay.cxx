#include "TransportDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TransportDelay::TransportDelay() {}

TransportDelay::~TransportDelay() {}

const std::string& TransportDelay::GetDelaytime() const
{
  return m_Delaytime;
}

void TransportDelay::SetDelaytime(const std::string& value)
{
  m_Delaytime = value;
}

const std::string& TransportDelay::GetInitialoutput() const
{
  return m_Initialoutput;
}

void TransportDelay::SetInitialoutput(const std::string& value)
{
  m_Initialoutput = value;
}

const std::string& TransportDelay::GetBuffersize() const
{
  return m_Buffersize;
}

void TransportDelay::SetBuffersize(const std::string& value)
{
  m_Buffersize = value;
}

const std::string& TransportDelay::GetFixedbuffer() const
{
  return m_Fixedbuffer;
}

void TransportDelay::SetFixedbuffer(const std::string& value)
{
  m_Fixedbuffer = value;
}

const std::string& TransportDelay::GetTransdelayfeedthrough() const
{
  return m_Transdelayfeedthrough;
}

void TransportDelay::SetTransdelayfeedthrough(const std::string& value)
{
  m_Transdelayfeedthrough = value;
}

const std::string& TransportDelay::GetPadeorder() const
{
  return m_Padeorder;
}

void TransportDelay::SetPadeorder(const std::string& value)
{
  m_Padeorder = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
