#include "SimulinkBlock.h"
#include "slxLogger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlock::SimulinkBlock() {}

SimulinkBlock::SimulinkBlock(SimulinkBlockType Type) : type(Type) {}

SimulinkBlock::SimulinkBlock(SimulinkBlockType *Type) : type(*Type) {}

SimulinkBlock::SimulinkBlock(const SimulinkBlock &origBlock) {

  this->subBlocks = origBlock.subBlocks;
  this->blockName = origBlock.blockName;
  this->blockId = origBlock.blockId;
}

SimulinkElementBase::ErrorCode
SimulinkBlock::add(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    // slog_error("Cannot add a null Simulink element.");
    return Ok;
  }

  // if (element->getType() != SimulinkElementType::Block) {
  //   //slog_error("Cannot add a Simulink element of a different type than
  //   Block."); return ErrorCode::SLX_ERR_TYPE_MISMATCH;
  // }

  std::shared_ptr<SimulinkBlock> subblock =
      std::dynamic_pointer_cast<SimulinkBlock>(element);
  if (subblock == nullptr) {
    // slog_error("Failed to cast SimulinkElementBase to SimulinkBlock.");
    return Ok;
  }

  if (subblock->getParent() != nullptr) {
    /// slog_error("Cannot add block that already has a parent.");
    return Ok;
  }

  if (contains(subblock->getID())) {
    blockParent = std::make_shared<SimulinkBlock>(*subblock);
  }
  return Ok;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getSubBlock(std::string name) {

  for (const auto &blk : subBlocks) {
    if (blk->blockName == name) {
      return blk;
    }
  }
  // slog_error("No Sublock named %s found in Block %s", name, blockName);
  return std::shared_ptr<SimulinkBlock>();
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getSubBlock(uint32 sid) {
  if (sid == 0) {
    // slog_error("block SID passed cannot be 0");
    return nullptr;
  }
  for (const auto &sublock : subBlocks) {
    if (sublock->getID() == sid) {
      return sublock;
    }
  }
  // log_warn("sublock given id [sid] not found");
  return nullptr;
}

SimulinkBlockType SimulinkBlock::getBlockType() { return type; }

SimulinkElementType SimulinkBlock::getType() const {
  return SimulinkElementType::Block;
}

uint32 SimulinkBlock::getID() const { return blockId; }

SimulinkElementBase::ErrorCode
SimulinkBlock::remove(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    // slog_warn("Removing a null Simulink element pointer from subelement");
    return ElementNotFound;
  }
  SimulinkElementType element_t = element->getType();

  if (element_t.isA(SimulinkElementType::Type::Block)) {
    //   //slog_error(
    //     //  "Cannot remove a Simulink element of a different type than
    //     Block.");
    return InvalidElementType;
  }

  std::shared_ptr<SimulinkBlock> subblock =
      std::dynamic_pointer_cast<SimulinkBlock>(element);
  if (subblock == nullptr) {
    // slog_error("Failed to cast SimulinkElementBase to SimulinkBlock.");
    return Ok;
  }

  if (subBlocks.empty()) {
    return Ok;
  }

  for (const auto &subBlock : subBlocks) {
    subBlock->remove(subblock);
  }
  return Ok;
}

std::string SimulinkBlock::toString() const {
  return std::to_string(getID()) + " [" + getType().toString() + ", " +
         std::to_string(blockPorts.size()) + ":" + "]";
}

SimulinkBlock::ErrorCode SimulinkBlock::addPort(SimulinkPortType portType) {
  // blockPorts[portType] += (uint32)1;
  return Ok;
}

bool SimulinkBlock::contains(uint32 id) const {
  for (const auto &block : subBlocks) {
    if (block && block->getID() == id) {
      return 1;
    }
  }
  return 0;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getParent() {
  return blockParent;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END