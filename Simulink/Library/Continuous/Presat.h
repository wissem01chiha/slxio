// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PRESAT_H
#define PRESAT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Presat : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Presat();

  /** Default Destructor */
  ~Presat();

  const std::string& GetPort() const;
  void SetPort(const std::string& value);

  const std::string& GetIcondisplay() const;
  void SetIcondisplay(const std::string& value);

  const std::string& GetOutputfunctioncall() const;
  void SetOutputfunctioncall(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetBusoutputasstruct() const;
  void SetBusoutputasstruct(const std::string& value);

  const std::string& GetBusvirtuality() const;
  void SetBusvirtuality(const std::string& value);

  const std::string& GetUnit() const;
  void SetUnit(const std::string& value);

  const std::string& GetPortdimensions() const;
  void SetPortdimensions(const std::string& value);

  const std::string& GetVarsizesig() const;
  void SetVarsizesig(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetSignaltype() const;
  void SetSignaltype(const std::string& value);

  const std::string& GetLatchbydelayingoutsidesignal() const;
  void SetLatchbydelayingoutsidesignal(const std::string& value);

  const std::string& GetLatchinputforfeedbacksignals() const;
  void SetLatchinputforfeedbacksignals(const std::string& value);

  const std::string& GetInterpolate() const;
  void SetInterpolate(const std::string& value);

  const std::string& GetInputconnect() const;
  void SetInputconnect(const std::string& value);

  const std::string& GetDatamode() const;
  void SetDatamode(const std::string& value);

  const std::string& GetMessagequeueusedefaultattributes() const;
  void SetMessagequeueusedefaultattributes(const std::string& value);

  const std::string& GetMessagequeuecapacity() const;
  void SetMessagequeuecapacity(const std::string& value);

  const std::string& GetMessagequeuetype() const;
  void SetMessagequeuetype(const std::string& value);

  const std::string& GetMessagequeueoverwriting() const;
  void SetMessagequeueoverwriting(const std::string& value);

  const std::string& GetEventtriggers() const;
  void SetEventtriggers(const std::string& value);

private:

  std::string m_Port;

  std::string m_Icondisplay;

  std::string m_Outputfunctioncall;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Busoutputasstruct;

  std::string m_Busvirtuality;

  std::string m_Unit;

  std::string m_Portdimensions;

  std::string m_Varsizesig;

  std::string m_Sampletime;

  std::string m_Signaltype;

  std::string m_Latchbydelayingoutsidesignal;

  std::string m_Latchinputforfeedbacksignals;

  std::string m_Interpolate;

  std::string m_Inputconnect;

  std::string m_Datamode;

  std::string m_Messagequeueusedefaultattributes;

  std::string m_Messagequeuecapacity;

  std::string m_Messagequeuetype;

  std::string m_Messagequeueoverwriting;

  std::string m_Eventtriggers;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // PRESAT_H
