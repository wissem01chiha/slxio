// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <chrono>               

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataObject 
{
public:
    /**
     * Create a new instance of the data object
     */
    virtual DataObject* New();

    /**
     * Reset the data object to its initial state
     */
    virtual void Initialize();

    /**
     * Get the last update time (in milliseconds since epoch)
     */
    virtual UInt32 GetUpdateTime();

    /**
     * Return the memory size used by this object
     */
    virtual UInt32 GetMemorySize();

    /**
     * Return the type identifier of the data
     */
    virtual IdType GetDataType();

    DataObject() = default;
    
    ~DataObject() = default;

private:
    // Disable copy and assignment
    DataObject(const DataObject&) = delete;
    void operator=(const DataObject&) = delete;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DATAOBJECT_H