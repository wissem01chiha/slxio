// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKOBJECT_H
#define SIMULINKOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkBlockType.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Class for Simulink objects, which are a construct for
 * structured storage of meta-data in the model.
 */
class SLXIO_APIEXPORT SimulinkObject
{
public:
    /** Default Constructor */
    SimulinkObject();

    SimulinkObject* New() const;

protected:
    SId m_id;
    std::string m_version;
    std::string m_propName;
    std::string m_className;
    std::vector<std::shared_ptr<SimulinkObject>> m_objects;
    std::vector<std::shared_ptr<SimulinkArray>> m_arrays;
    std::vector<std::shared_ptr<SimulinkParameter>> m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKOBJECT_H
