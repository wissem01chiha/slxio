#include "DataStoreMemory.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DataStoreMemory::DataStoreMemory() {}

DataStoreMemory::~DataStoreMemory() {}

const std::string& DataStoreMemory::GetDatastorename() const
{
    return m_Datastorename;
}

void DataStoreMemory::SetDatastorename(const std::string& value)
{
    m_Datastorename = value;
}

const std::string& DataStoreMemory::GetReadbeforewritemsg() const
{
    return m_Readbeforewritemsg;
}

void DataStoreMemory::SetReadbeforewritemsg(const std::string& value)
{
    m_Readbeforewritemsg = value;
}

const std::string& DataStoreMemory::GetWriteafterwritemsg() const
{
    return m_Writeafterwritemsg;
}

void DataStoreMemory::SetWriteafterwritemsg(const std::string& value)
{
    m_Writeafterwritemsg = value;
}

const std::string& DataStoreMemory::GetWriteafterreadmsg() const
{
    return m_Writeafterreadmsg;
}

void DataStoreMemory::SetWriteafterreadmsg(const std::string& value)
{
    m_Writeafterreadmsg = value;
}

const std::string& DataStoreMemory::GetInitialvalue() const
{
    return m_Initialvalue;
}

void DataStoreMemory::SetInitialvalue(const std::string& value)
{
    m_Initialvalue = value;
}

const std::string& DataStoreMemory::GetShareacrossmodelinstances() const
{
    return m_Shareacrossmodelinstances;
}

void DataStoreMemory::SetShareacrossmodelinstances(const std::string& value)
{
    m_Shareacrossmodelinstances = value;
}

const std::string& DataStoreMemory::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DataStoreMemory::SetStatemustresolvetosignalobject(
    const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DataStoreMemory::GetDatastorereference() const
{
    return m_Datastorereference;
}

void DataStoreMemory::SetDatastorereference(const std::string& value)
{
    m_Datastorereference = value;
}

const std::string& DataStoreMemory::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DataStoreMemory::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DataStoreMemory::GetRtwstatestoragetypequalifier() const
{
    return m_Rtwstatestoragetypequalifier;
}

void DataStoreMemory::SetRtwstatestoragetypequalifier(const std::string& value)
{
    m_Rtwstatestoragetypequalifier = value;
}

const std::string& DataStoreMemory::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DataStoreMemory::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DataStoreMemory::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void DataStoreMemory::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& DataStoreMemory::GetShowadditionalparam() const
{
    return m_Showadditionalparam;
}

void DataStoreMemory::SetShowadditionalparam(const std::string& value)
{
    m_Showadditionalparam = value;
}

const std::string& DataStoreMemory::GetOutmin() const { return m_Outmin; }

void DataStoreMemory::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& DataStoreMemory::GetOutmax() const { return m_Outmax; }

void DataStoreMemory::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& DataStoreMemory::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DataStoreMemory::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DataStoreMemory::GetLockscale() const { return m_Lockscale; }

void DataStoreMemory::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DataStoreMemory::GetSignaltype() const
{
    return m_Signaltype;
}

void DataStoreMemory::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& DataStoreMemory::GetDimensions() const
{
    return m_Dimensions;
}

void DataStoreMemory::SetDimensions(const std::string& value)
{
    m_Dimensions = value;
}

const std::string& DataStoreMemory::GetDatalogging() const
{
    return m_Datalogging;
}

void DataStoreMemory::SetDatalogging(const std::string& value)
{
    m_Datalogging = value;
}

const std::string& DataStoreMemory::GetDatalogginglimitdatapoints() const
{
    return m_Datalogginglimitdatapoints;
}

void DataStoreMemory::SetDatalogginglimitdatapoints(const std::string& value)
{
    m_Datalogginglimitdatapoints = value;
}

const std::string& DataStoreMemory::GetDataloggingmaxpoints() const
{
    return m_Dataloggingmaxpoints;
}

void DataStoreMemory::SetDataloggingmaxpoints(const std::string& value)
{
    m_Dataloggingmaxpoints = value;
}

const std::string& DataStoreMemory::GetDataloggingdecimatedata() const
{
    return m_Dataloggingdecimatedata;
}

void DataStoreMemory::SetDataloggingdecimatedata(const std::string& value)
{
    m_Dataloggingdecimatedata = value;
}

const std::string& DataStoreMemory::GetDataloggingdecimation() const
{
    return m_Dataloggingdecimation;
}

void DataStoreMemory::SetDataloggingdecimation(const std::string& value)
{
    m_Dataloggingdecimation = value;
}

const std::string& DataStoreMemory::GetDataloggingnamemode() const
{
    return m_Dataloggingnamemode;
}

void DataStoreMemory::SetDataloggingnamemode(const std::string& value)
{
    m_Dataloggingnamemode = value;
}

const std::string& DataStoreMemory::GetDataloggingname() const
{
    return m_Dataloggingname;
}

void DataStoreMemory::SetDataloggingname(const std::string& value)
{
    m_Dataloggingname = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
