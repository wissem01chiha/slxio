// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATASTOREWRITE_H
#define DATASTOREWRITE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataStoreWrite : public IBlockParameters,
                                       public IBlockProperties
{
public:
    /** Default Constructor */
    DataStoreWrite();

    /** Default Destructor */
    ~DataStoreWrite();

    const std::string& GetDatastorename() const;
    void SetDatastorename(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetDatastoreelements() const;
    void SetDatastoreelements(const std::string& value);

    const std::string& GetEnableindexing() const;
    void SetEnableindexing(const std::string& value);

    const std::string& GetNumberofdimensions() const;
    void SetNumberofdimensions(const std::string& value);

    const std::string& GetIndexmode() const;
    void SetIndexmode(const std::string& value);

    const std::string& GetIndexoptionarray() const;
    void SetIndexoptionarray(const std::string& value);

    const std::string& GetIndexparamarray() const;
    void SetIndexparamarray(const std::string& value);

    const std::string& GetOutputsizearray() const;
    void SetOutputsizearray(const std::string& value);

    const std::string& GetIndexoptions() const;
    void SetIndexoptions(const std::string& value);

    const std::string& GetIndices() const;
    void SetIndices(const std::string& value);

    const std::string& GetOutputsizes() const;
    void SetOutputsizes(const std::string& value);

private:
    std::string m_Datastorename;

    std::string m_Sampletime;

    std::string m_Datastoreelements;

    std::string m_Enableindexing;

    std::string m_Numberofdimensions;

    std::string m_Indexmode;

    std::string m_Indexoptionarray;

    std::string m_Indexparamarray;

    std::string m_Outputsizearray;

    std::string m_Indexoptions;

    std::string m_Indices;

    std::string m_Outputsizes;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DATASTOREWRITE_H
