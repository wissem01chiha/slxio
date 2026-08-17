// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCK_H
#define SIMULINKBLOCK_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkBlockType.h"
#include "SimulinkElementBase.h"
#include "SimulinkPortType.h"

#include <map>
#include <memory>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;
class SimulinkParameter;

/**
 * @class SimulinkBlock
 */
class SLXIO_APIEXPORT SimulinkBlock : public SimulinkElementBase
{
public:
    /** Default constructor.*/
    SimulinkBlock();

    SimulinkBlock* New() const override;

    /** Constructor with block type.*/
    explicit SimulinkBlock(SimulinkBlockType::Type blockType);

    /** Constructor with block type, name, and Id.*/
    SimulinkBlock(SimulinkBlockType::Type blockType, const char* blockName,
                  const SId& blockId);

    /** Accesses a child element by index with bound checking */
    std::shared_ptr<SimulinkElementBase> at(SId index) override;

    /** Access specified element */
    std::shared_ptr<SimulinkElementBase> operator[](SId index) override;

    /** Returns the number of child elements. */
    UInt32 Size() const override;

    /** Returns true if no child elements exist. */
    bool Empty() const override;

    /** Removes all child elements. */
    void Clear() override;

    /** Inserts a new child element. */
    HError Insert(const std::shared_ptr<SimulinkElementBase>& element) override;

    /** Erases a child element by identifier. */
    HError Erase(const SId& id) override;

    /** Erases a child element by reference. */
    HError Erase(const std::shared_ptr<SimulinkElementBase>& element) override;

    /** Finds a child element by identifier. */
    std::shared_ptr<SimulinkElementBase> Find(const SId& id) override;

    /** Checks if this element or its children contain the given identifier. */
    bool Contains(const SId& id) const override;

    /** Returns the generic type of this element. */
    SimulinkElementType GetType() const override;

    /** Returns the unique identifier of this element. */
    SId GetId() const override;

    /** Returns a string representation of this element. */
    std::string ToString() const override;

    /** Retrieve the block type of the Simulink block.*/
    SimulinkBlockType GetBlockType();

    /** Get the block name.*/
    std::string GetName() override;

    /** Dim of a Simulink Block ????? */
    std::string GetDimension() override;

    /** Get the Parent block at the hiraciy .*/
    std::shared_ptr<SimulinkBlock> GetBlockParent();

    /** Return a pointer to a given parameter by name, if not
     * found a or the blcok has not paramters an empty parameter returned. */
    std::shared_ptr<SimulinkParameterBase>
    GetParameter(std::string name) override;

    /** Sets the element specifc parameter to given one  */
    HError
    SetParameter(std::string name,
                 std::shared_ptr<SimulinkParameterBase> parameter) override;

    /* Adds a Parameter to the array */
    HError
    AddParameter(std::shared_ptr<SimulinkParameterBase> parameter) override;

    /** Sets the block Id to a given one, shoule not used by public users, only
     * for internal Peraser */
    void SetBlockId(const SId& blockId);

    /** Set the block name */
    void SetBlockName(const std::string& blockName);

    /** Sets the bclok explict type.*/
    void SetBlockType(SimulinkBlockType::Type blockType);

    /** Return the class internal logger object*/
    Logger& GetLogger();

private:
    SId BlockId;
    Logger& logger;
    std::string BlockName;
    SimulinkBlockType BlockType;
    std::map<SId, SimulinkPortType> BlockPorts;
    std::vector<std::shared_ptr<SimulinkBlock>> SubBlocks;
    std::shared_ptr<SimulinkBlock> BlockParent;
    std::vector<std::shared_ptr<SimulinkParameter>> BlockParameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKBLOCK_H
