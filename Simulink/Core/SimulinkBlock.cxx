#include "SimulinkBlock.h"
#include "Logger.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlock::SimulinkBlock() : blockName(std::string("")) {}

SimulinkBlock::SimulinkBlock(SimulinkBlockType::Type blockType_)
    : blockType(blockType_) {}

SimulinkBlock::SimulinkBlock(SimulinkBlockType *blockType_)
    : blockType(*blockType_) {}

SimulinkBlockType SimulinkBlock::getBlockType() { return blockType; }

SimulinkBlock::SimulinkBlock(const SimulinkBlock &origBlock) {

  this->subBlocks = origBlock.subBlocks;
  this->blockName = origBlock.blockName;
  this->blockId = origBlock.blockId;
  this->blockType = origBlock.blockType;
}

SimulinkBlock::SimulinkBlock(SimulinkBlockType::Type blockType_,
                             const char *blockName_, const Index &blockId_) {
  this->blockId = blockId_;
  this->blockType = blockType_;
  this->blockName = std::string(blockName_);
}

ErrorCode SimulinkBlock::add(std::shared_ptr<SimulinkElementBase> element) {

  Logger &l = Logger::getInstance();
  if (element == nullptr) {
    l.log(Logger::Verbosity::V_ERROR,
          "SimulinkBlock:: Cannot add a null Simulink element.");
    return ErrorCode::SLX_OK;
  }

  if (element->getType().isA(SimulinkElementType::Type::Block)) {
    std::shared_ptr<SimulinkBlock> subblock =
        std::dynamic_pointer_cast<SimulinkBlock>(element);
    if (subblock == nullptr) {
      l.log(Logger::Verbosity::V_ERROR,
            "SimulinkBlock:: failed to cast SimulinkElementBase to "
            "SimulinkBlock.");
      return ErrorCode::SLX_ECASTFAIL;
    }

    if (subblock->getParent() != nullptr) {
      l.log(Logger::Verbosity::V_ERROR,
            "SimulinkBlock:: Cannot add block that already has a parent.");
      return ErrorCode::SLX_OK;
    }

    if (contains(subblock->getID())) {
      blockParent = std::make_shared<SimulinkBlock>(*subblock);
    }
    return ErrorCode::SLX_OK;
  } else if (element->getType().isA(SimulinkElementType::Type::Parameter)) {
    std::shared_ptr<SimulinkParameter> parameter =
        std::dynamic_pointer_cast<SimulinkParameter>(element);
    if (parameter == nullptr) {
      l.log(Logger::Verbosity::V_ERROR,
            "SimulinkBlock:: failed to cast SimulinkElementBase to "
            "SimulinkParameter.");
      return ErrorCode::SLX_ECASTFAIL;
    }
    blockParameters.push_back(parameter);
    return ErrorCode::SLX_OK;
  } else {
    l.log(Logger::Verbosity::V_ERROR,
          "SimulinkBlock:: Cannot add a Simulink element of a different "
          "type than Block or Parameter.");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkBlock>
SimulinkBlock::getSubBlock(const std::string &blockName_) {

  for (const auto &blk : subBlocks) {
    if (blk->blockName == blockName_) {
      return blk;
    }
  }
  Logger::getInstance().log(Logger::V_WARNING, "No Sublock named ", blockName_,
                            "' found in Block ", blockName);
  return std::shared_ptr<SimulinkBlock>();
}

std::shared_ptr<SimulinkBlock>
SimulinkBlock::getSubBlock(const Index &blockId_) {

  Logger &l = Logger::getInstance();
  if (blockId_ == 0) {
    l.log(Logger::V_ERROR, "SimulinkBlock:: block Id passed cannot be 0");
    return nullptr;
  }
  for (const auto &sublock : subBlocks) {
    if (sublock->getID() == blockId_) {
      return sublock;
    }
  }
  l.log(Logger::V_WARNING, "SimulinkBlock:: sublock given Id ",
        std::to_string(blockId_), " not found");
  return nullptr;
}

SimulinkElementType SimulinkBlock::getType() const {
  return SimulinkElementType(SimulinkElementType::Type::Block);
}

Index SimulinkBlock::getID() const { return blockId; }

void SimulinkBlock::setID(const Index &blockId_) { blockId = blockId_; }

void SimulinkBlock::setName(const std::string &blockName_) {
  blockName = blockName_;
}

void SimulinkBlock::setBlockType(SimulinkBlockType::Type blockType_) {
  blockType = blockType_;
}

ErrorCode SimulinkBlock::remove(std::shared_ptr<SimulinkElementBase> element) {

  Logger &l = Logger::getInstance();
  if (element == nullptr) {
    l.log(Logger::V_WARNING, "SimulinkBlock:: Removing a null Simulink element "
                             "pointer from subelement");
    return ErrorCode::SLX_ENOENT;
  }
  SimulinkElementType element_t = element->getType();

  if (!(element_t.isA(SimulinkElementType::Type::Block))) {
    l.log(Logger::V_ERROR,
          "SimulinkBlock:: Cannot remove a Simulink element of a different "
          "blockType than Block.");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  std::shared_ptr<SimulinkBlock> subblock =
      std::dynamic_pointer_cast<SimulinkBlock>(element);
  if (subblock == nullptr) {
    l.log(
        Logger::V_ERROR,
        "SimulinkBlock:: Failed to cast SimulinkElementBase to SimulinkBlock.");
    return ErrorCode::SLX_OK;
  }

  if (subBlocks.empty()) {
    return ErrorCode::SLX_OK;
  }

  for (const auto &subBlock : subBlocks) {
    subBlock->remove(subblock);
  }
  return ErrorCode::SLX_OK;
}

std::string SimulinkBlock::toString() const {
  std::ostringstream oss;

  oss << "SimulinkBlock {\n";
  oss << "  Name: " << blockName << "\n";
  oss << "  ID: " << blockId << "\n";
  oss << "  Type: " << blockType.toString() << "\n";
  oss << "  Ports: " << blockPorts.size() << "\n";
  oss << "  SubBlocks: " << subBlocks.size() << "\n";
  oss << "  Parameters: " << blockParameters.size() << "\n";
  oss << "}\n";
  return oss.str();
}

ErrorCode SimulinkBlock::addPort(SimulinkPortType portType_) {
  // blockPorts[portType] += (uint32)1;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkParameter>
SimulinkBlock::getParameter(const char *blockParameterName_) {

  Logger &l = Logger::getInstance();
  if (blockParameterName_ == nullptr) {
    l.log(Logger::V_WARNING,
          "SimulinkBlock:: getParameter called with null parameter name");
    return nullptr;
  }
  if (blockParameters.empty()) {
    l.log(Logger::V_WARNING,
          "SimulinkBlock:: getParameter called but block has no parameters");
    return nullptr;
  }

  for (const auto &blockParameter_ : blockParameters) {
    const char *value = blockParameter_->getName();
    if (value != nullptr && strcmp(value, blockParameterName_) == 0) {
      return blockParameter_;
    }
  }
  return nullptr;
}

std::string SimulinkBlock::getName() { return blockName; }

bool SimulinkBlock::contains(const Index &blockId_) const {
  for (const auto &block : subBlocks) {
    if (block && block->getID() == blockId_) {
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