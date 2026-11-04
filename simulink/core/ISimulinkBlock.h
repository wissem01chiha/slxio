// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISIMULINKBLOCK_H
#define ISIMULINKBLOCK_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ISimulinkElement.h"
#include "PlatformTypes.h"
#include "SimulinkBlockCategory.h"
#include "SimulinkBlockType.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

enum class SimulinkPortType;

/**
 * @class ISimulinkBlock
 * @brief an abstract general reprsentation of an elementary simulink block, all
 * block library inhertit from this interface as well as all SimulinkSubsystem
 * based ones derived from ISimulinkSubsystem
 */
class SLXIO_APIEXPORT ISimulinkBlock : public ISimulinkElement
{
public:
    /** Default constructor.*/
    ISimulinkBlock();

    /** Destructor */
    ~ISimulinkBlock() override;

    /// blocks can be inserted into other subsystems of type ISimulinkSubsystem
    HError AcceptInsert(ISimulinkElement& parent) override;
    HError Insert(const std::shared_ptr<ISimulinkElement>& element) override;
    SId GetId() const override;

    /** Return the block corresponding enum type from SimulinkBlockType.
     * Each child should override this function to provide its own
     * implementation.
     */
    virtual SimulinkBlockType GetBlockType() const = 0;

    /** The Simulink base library is divided by category.
     * This function is primarily designed for that purpose:
     * each child block implementation should return its underlying
     * corresponding category from SimulinkBlockCategory.
     * For user-defined blocks (external API usage), this is optional,
     * but it is recommended to tag the block with either a newly created
     * category or choose an existing one from the default library.
     * @note Overriding default Simulink library blocks is not recommended!
     */
    virtual SimulinkBlockCategory GetBlockCategory() const = 0;

private:
    SId m_id{SId(0)};
    std::string m_name;
    SimulinkBlockType m_type;
    std::map<SId, SimulinkPortType> m_ports;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ISIMULINKBLOCK_H
