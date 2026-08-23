// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCKCATEGORY_H
#define SIMULINKBLOCKCATEGORY_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkBlockCategory
 * @brief Allow for subdividing Simulink default library blocks into separate
 * categories by domain, as well as provide grouping features for user-added
 * blocks.
 */
class SLXIO_APIEXPORT SimulinkBlockCategory final
{
public:
    enum class DefaultCategory
    {
        AdditionalMathDiscrete = 0,
        CommonlyUsedBlocks,
        Continuous,
        Discontinuities,
        Discrete,
        LogicAndBitOperations,
        LookupTables,
        MathOperations,
        MatrixOperations,
        MessagesEvents,
        ModelVerification,
        ModelWideUtilities,
        PortsSubsystems,
        QuickInsert,
        SignalAttributes,
        SignalRouting,
        Sinks,
        Sources,
        String,
        UserDefinedFunctions
    };

    SimulinkBlockCategory();

    explicit SimulinkBlockCategory(DefaultCategory category);

    ~SimulinkBlockCategory() = default;

    /** Add a new user-defined category */
    void AddCategory(const std::string& name);

    /** Check if a category exists */
    bool HasCategory(const std::string& name) const;

    /**  List all categories */
    std::vector<std::string> GetAllCategories() const;

private:
    static std::string ToString(DefaultCategory category);

    std::vector<std::string> m_category;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKBLOCKCATEGORY_H