// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATASTOREMEMORY_H
#define DATASTOREMEMORY_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataStoreMemory : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DataStoreMemory();

  /** Default Destructor */
  ~DataStoreMemory();

  const std::string& GetDatastorename() const;
  void SetDatastorename(const std::string& value);

  const std::string& GetReadbeforewritemsg() const;
  void SetReadbeforewritemsg(const std::string& value);

  const std::string& GetWriteafterwritemsg() const;
  void SetWriteafterwritemsg(const std::string& value);

  const std::string& GetWriteafterreadmsg() const;
  void SetWriteafterreadmsg(const std::string& value);

  const std::string& GetInitialvalue() const;
  void SetInitialvalue(const std::string& value);

  const std::string& GetShareacrossmodelinstances() const;
  void SetShareacrossmodelinstances(const std::string& value);

  const std::string& GetStatemustresolvetosignalobject() const;
  void SetStatemustresolvetosignalobject(const std::string& value);

  const std::string& GetDatastorereference() const;
  void SetDatastorereference(const std::string& value);

  const std::string& GetStatestorageclass() const;
  void SetStatestorageclass(const std::string& value);

  const std::string& GetRtwstatestoragetypequalifier() const;
  void SetRtwstatestoragetypequalifier(const std::string& value);

  const std::string& GetStatesignalobject() const;
  void SetStatesignalobject(const std::string& value);

  const std::string& GetVectorparams1d() const;
  void SetVectorparams1d(const std::string& value);

  const std::string& GetShowadditionalparam() const;
  void SetShowadditionalparam(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetSignaltype() const;
  void SetSignaltype(const std::string& value);

  const std::string& GetDimensions() const;
  void SetDimensions(const std::string& value);

  const std::string& GetDatalogging() const;
  void SetDatalogging(const std::string& value);

  const std::string& GetDatalogginglimitdatapoints() const;
  void SetDatalogginglimitdatapoints(const std::string& value);

  const std::string& GetDataloggingmaxpoints() const;
  void SetDataloggingmaxpoints(const std::string& value);

  const std::string& GetDataloggingdecimatedata() const;
  void SetDataloggingdecimatedata(const std::string& value);

  const std::string& GetDataloggingdecimation() const;
  void SetDataloggingdecimation(const std::string& value);

  const std::string& GetDataloggingnamemode() const;
  void SetDataloggingnamemode(const std::string& value);

  const std::string& GetDataloggingname() const;
  void SetDataloggingname(const std::string& value);

private:

  std::string m_Datastorename;

  std::string m_Readbeforewritemsg;

  std::string m_Writeafterwritemsg;

  std::string m_Writeafterreadmsg;

  std::string m_Initialvalue;

  std::string m_Shareacrossmodelinstances;

  std::string m_Statemustresolvetosignalobject;

  std::string m_Datastorereference;

  std::string m_Statestorageclass;

  std::string m_Rtwstatestoragetypequalifier;

  std::string m_Statesignalobject;

  std::string m_Vectorparams1d;

  std::string m_Showadditionalparam;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Signaltype;

  std::string m_Dimensions;

  std::string m_Datalogging;

  std::string m_Datalogginglimitdatapoints;

  std::string m_Dataloggingmaxpoints;

  std::string m_Dataloggingdecimatedata;

  std::string m_Dataloggingdecimation;

  std::string m_Dataloggingnamemode;

  std::string m_Dataloggingname;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DATASTOREMEMORY_H
