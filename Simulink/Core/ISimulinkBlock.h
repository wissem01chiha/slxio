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

    // blocks can be inserted into other subsystems of type ISimulinkSubsystem
    HError AcceptInsert(ISimulinkElement& parent) override;
    HError Insert(const std::shared_ptr<ISimulinkElement>& element) override;
    SId GetId() const override;

    /** Retrun the block coressponding enum type from SimulinkBlockType, each
     * child should override this function in order to provide
     */
    virtual SimulinkBlockType GetBlockType() const = 0;

    /** Simulink Base libraray is dvided by caegtory, this function designed
     * primally fro them, which each child blcok implenation return it
     * underlaying coresspodnig categtory, from SimulinkBlockCatgory , for user
     * defined blocks( external API usfge ) , this is optionla but recommand to
     * tag the blcok with a ctagtory newlly creted or choose an extsing one from
     * the dfaul librray,
     * @note overriding default simulink librray blcok is not recommnded !
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
