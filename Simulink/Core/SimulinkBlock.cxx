#include "SimulinkBlock.h"
#include "Logger.h"
#include <sstream>
#include <iostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlock::SimulinkBlock() {}

SimulinkBlock::SimulinkBlock(SimulinkBlockType::Type type) : type(type) {}

SimulinkBlock::SimulinkBlock(SimulinkBlockType* typeObj) : type(*typeObj) {}

SimulinkBlockType SimulinkBlock::getBlockType() { return type; }


SimulinkBlock::SimulinkBlock(const SimulinkBlock &origBlock) {

  this->subBlocks = origBlock.subBlocks;
  this->blockName = origBlock.blockName;
  this->blockId = origBlock.blockId;
}

SimulinkBlock::SimulinkBlock(SimulinkBlockType::Type type_, const char *name_,
                             Index id_) {
  this->blockId = id_;
  this->type = type_;
  this->blockName = std::string(name_);
}

ErrorCode SimulinkBlock::add(std::shared_ptr<SimulinkElementBase> element) {

  Logger& l = Logger::getInstance();
  if (element == nullptr) {
    l.log(Logger::Verbosity::V_ERROR,"Cannot add a null Simulink element.");
    return ErrorCode::Ok;
  }

  if (!(element->getType().isA(SimulinkElementType::Type::Block))) {
   l.log(Logger::Verbosity::V_ERROR,"Cannot add a Simulink element of a different type than Block."); 
   return ErrorCode::SLX_ERR_TYPE_MISMATCH;
   }

  std::shared_ptr<SimulinkBlock> subblock =
      std::dynamic_pointer_cast<SimulinkBlock>(element);
  if (subblock == nullptr) {
    l.log(Logger::Verbosity::V_ERROR,"Failed to cast SimulinkElementBase to SimulinkBlock.");
    return ErrorCode::Ok;
  }

  if (subblock->getParent() != nullptr) {
    l.log(Logger::Verbosity::V_ERROR,"Cannot add block that already has a parent.");
    return ErrorCode::Ok;
  }

  if (contains(subblock->getID())) {
    blockParent = std::make_shared<SimulinkBlock>(*subblock);
  }
  return ErrorCode::Ok;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getSubBlock(std::string name) {

  for (const auto &blk : subBlocks) {
    if (blk->blockName == name) {
      return blk;
    }
  }
  std::ostringstream oss;
  oss << "No Sublock named " << name << "' found in Block " << blockName;
  Logger::getInstance().log(Logger::V_WARNING, oss.str().c_str());
  return std::shared_ptr<SimulinkBlock>();
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getSubBlock(uint32 sid) {

  Logger& l = Logger::getInstance();
  if (sid == 0) {
    l.log(Logger::V_ERROR,"block SID passed cannot be 0");
    return nullptr;
  }
  for (const auto &sublock : subBlocks) {
    if (sublock->getID() == sid) {
      return sublock;
    }
  }
  l.log(Logger::V_WARNING,"sublock given id [sid] not found");
  return nullptr;
}

SimulinkElementType SimulinkBlock::getType() const {
  return SimulinkElementType(SimulinkElementType::Type::Block);
}

uint32 SimulinkBlock::getID() const { return blockId; }

ErrorCode SimulinkBlock::remove(std::shared_ptr<SimulinkElementBase> element) {

  Logger& l = Logger::getInstance();
  if (element == nullptr) {
    l.log(Logger::V_WARNING, "Removing a null Simulink element pointer from subelement");
    return ErrorCode::ElementNotFound;
  }
  SimulinkElementType element_t = element->getType();

  if (!(element_t.isA(SimulinkElementType::Type::Block))) {
    l.log(Logger::V_ERROR, "Cannot remove a Simulink element of a different type than Block.");
    return ErrorCode::InvalidElementType;
  }

  std::shared_ptr<SimulinkBlock> subblock =
      std::dynamic_pointer_cast<SimulinkBlock>(element);
  if (subblock == nullptr) {
  l.log(Logger::V_ERROR, "Failed to cast SimulinkElementBase to SimulinkBlock.");
    return ErrorCode::Ok;
  }

  if (subBlocks.empty()) {
    return ErrorCode::Ok;
  }

  for (const auto &subBlock : subBlocks) {
    subBlock->remove(subblock);
  }
  return ErrorCode::Ok;
}

std::string SimulinkBlock::toString() const {
  return std::to_string(getID()) + " [" + getType().toString() + ", " +
         std::to_string(blockPorts.size()) + ":" + "]";
}

ErrorCode SimulinkBlock::addPort(SimulinkPortType portType) {
  // blockPorts[portType] += (uint32)1;
  return ErrorCode::Ok;
}

bool SimulinkBlock::contains(uint32 id) const {
  for (const auto &block : subBlocks) {
    if (block && block->getID() == id) {
      return true;
    }
  }
  return false;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getParent() {
  return blockParent;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END