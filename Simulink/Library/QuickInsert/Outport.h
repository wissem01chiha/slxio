// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef OUTPORT_H
#define OUTPORT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Outport : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Outport();

  /** Default Destructor */
  ~Outport();

  const std::string& GetPort() const;
  void SetPort(const std::string& value);

  const std::string& GetSignalname() const;
  void SetSignalname(const std::string& value);

  const std::string& GetSignalobject() const;
  void SetSignalobject(const std::string& value);

  const std::string& GetStorageclass() const;
  void SetStorageclass(const std::string& value);

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

  const std::string& GetDatamode() const;
  void SetDatamode(const std::string& value);

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

  const std::string& GetEnsureoutportisvirtual() const;
  void SetEnsureoutportisvirtual(const std::string& value);

  const std::string& GetOutputwhendisabled() const;
  void SetOutputwhendisabled(const std::string& value);

  const std::string& GetInitialoutput() const;
  void SetInitialoutput(const std::string& value);

  const std::string& GetMustresolvetosignalobject() const;
  void SetMustresolvetosignalobject(const std::string& value);

  const std::string& GetOutputwhenunconnected() const;
  void SetOutputwhenunconnected(const std::string& value);

  const std::string& GetOutputwhenunconnectedvalue() const;
  void SetOutputwhenunconnectedvalue(const std::string& value);

  const std::string& GetVectorparamsas1dforoutwhenunconnected() const;
  void SetVectorparamsas1dforoutwhenunconnected(const std::string& value);

private:

  std::string m_Port;

  std::string m_Signalname;

  std::string m_Signalobject;

  std::string m_Storageclass;

  std::string m_Icondisplay;

  std::string m_Outputfunctioncall;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Busoutputasstruct;

  std::string m_Busvirtuality;

  std::string m_Datamode;

  std::string m_Unit;

  std::string m_Portdimensions;

  std::string m_Varsizesig;

  std::string m_Sampletime;

  std::string m_Signaltype;

  std::string m_Ensureoutportisvirtual;

  std::string m_Outputwhendisabled;

  std::string m_Initialoutput;

  std::string m_Mustresolvetosignalobject;

  std::string m_Outputwhenunconnected;

  std::string m_Outputwhenunconnectedvalue;

  std::string m_Vectorparamsas1dforoutwhenunconnected;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // OUTPORT_H
