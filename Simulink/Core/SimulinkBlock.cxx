#include "SimulinkBlock.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlock::SimulinkBlock()
  : name(std::string(""))
  , l(Logger::getInstance())
{
}

SimulinkBlock::SimulinkBlock(SimulinkBlockType::Type blockType)
  : type(blockType)
  , l(Logger::getInstance())
{
}

SimulinkBlock::SimulinkBlock(SimulinkBlockType* blockType)
  : type(*blockType)
  , l(Logger::getInstance())
{
}

SimulinkBlockType SimulinkBlock::getBlockType()
{
  return type;
}

SimulinkBlock::SimulinkBlock(const SimulinkBlock& origBlock)
  : l(Logger::getInstance())
{

  this->blocks = origBlock.blocks;
  this->name = origBlock.name;
  this->id = origBlock.id;
  this->type = origBlock.type;
  this->ports = origBlock.ports;
  this->parent = origBlock.parent;
  this->parameters = origBlock.parameters;
}

SimulinkBlock::SimulinkBlock(SimulinkBlockType::Type blockType,
  const char* blockName, const Index& blockId)
  : type(blockType)
  , name(std::string(blockName))
  , id(blockId)
  , l(Logger::getInstance())
{
}

UInt32 SimulinkBlock::add(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    l.log(Logger::Verbosity::V_ERROR,
      "SimulinkBlock:: Cannot add a null Simulink element.");
    return E_OK;
  }

  if (element->getType().isA(SimulinkElementType::Type::Block))
  {
    std::shared_ptr<SimulinkBlock> subblock =
      std::dynamic_pointer_cast<SimulinkBlock>(element);
    if (subblock == nullptr)
    {
      l.log(Logger::Verbosity::V_ERROR,
        "SimulinkBlock:: failed to cast SimulinkElementBase to "
        "SimulinkBlock.");
      return SLX_ECASTFAIL;
    }

    if (subblock->getParent() != nullptr)
    {
      l.log(Logger::Verbosity::V_ERROR,
        "SimulinkBlock:: Cannot add block that already has a "
        "parent.");
      return E_OK;
    }

    if (contains(subblock->getID()))
    {
      parent = std::make_shared<SimulinkBlock>(*subblock);
    }
    return E_OK;
  }
  else if (element->getType().isA(SimulinkElementType::Type::Parameter))
  {
    std::shared_ptr<SimulinkParameter> parameter =
      std::dynamic_pointer_cast<SimulinkParameter>(element);
    if (parameter == nullptr)
    {
      l.log(Logger::Verbosity::V_ERROR,
        "SimulinkBlock:: failed to cast SimulinkElementBase to "
        "SimulinkParameter.");
      return SLX_ECASTFAIL;
    }
    parameters.push_back(parameter);
    return E_OK;
  }
  else
  {
    l.log(Logger::Verbosity::V_ERROR,
      "SimulinkBlock:: Cannot add a Simulink element of a different "
      "type than Block or Parameter.");
    return SLX_ETYPEMISMATCH;
  }

  return E_OK;
}

void SimulinkBlock::add(SimulinkPortType portType)
{
  // ports[portType] += (Index)1;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getSubBlock(
  const std::string& blockName)
{

  for (const auto& blk : blocks)
  {
    if (blk->name == blockName)
    {
      return blk;
    }
  }
  l.log(Logger::V_WARNING, "No Sublock named ", blockName, "' found in Block ",
    name);
  return std::shared_ptr<SimulinkBlock>();
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getSubBlock(const Index& blockId)
{
  if (blockId == 0)
  {
    l.log(Logger::V_ERROR, "SimulinkBlock:: block Id passed cannot be 0");
    return std::shared_ptr<SimulinkBlock>();
  }
  for (const auto& sublock : blocks)
  {
    if (sublock->getID() == blockId)
    {
      return sublock;
    }
  }
  l.log(Logger::V_WARNING, "SimulinkBlock:: sublock given Id ",
    std::to_string(blockId), " not found");
  return std::shared_ptr<SimulinkBlock>();
}

SimulinkElementType SimulinkBlock::getType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Block);
}

Index SimulinkBlock::getID() const
{
  return id;
}

void SimulinkBlock::setID(const Index& blockId)
{
  id = blockId;
}

void SimulinkBlock::setName(const std::string& blockName)
{
  name = blockName;
}

void SimulinkBlock::setBlockType(SimulinkBlockType::Type blockType)
{
  type = blockType;
}

UInt32 SimulinkBlock::remove(std::shared_ptr<SimulinkElementBase> element)
{
  if (element == nullptr)
  {
    l.log(Logger::V_WARNING,
      "SimulinkBlock:: removing a null Simulink element "
      "pointer from subelement");
    return SLX_ENOENT;
  }
  SimulinkElementType element_t = element->getType();

  if (!(element_t.isA(SimulinkElementType::Type::Block)))
  {
    l.log(Logger::V_ERROR,
      "SimulinkBlock:: cannot remove a Simulink element of a "
      "different "
      "type than Block.");
    return SLX_ETYPEMISMATCH;
  }

  std::shared_ptr<SimulinkBlock> subblock =
    std::dynamic_pointer_cast<SimulinkBlock>(element);
  if (subblock == nullptr)
  {
    l.log(Logger::V_ERROR,
      "SimulinkBlock:: failed to cast SimulinkElementBase to "
      "SimulinkBlock.");
    return SLX_ECASTFAIL;
  }

  if (blocks.empty())
  {
    return E_OK;
  }

  for (const auto& subBlock : blocks)
  {
    subBlock->remove(subblock);
  }
  return E_OK;
}

std::string SimulinkBlock::toString() const
{
  std::ostringstream oss;

  oss << "SimulinkBlock {\n";
  oss << "  Name: " << name << "\n";
  oss << "  ID: " << id << "\n";
  oss << "  Type: " << type.toString() << "\n";
  oss << "  Ports: " << ports.size() << "\n";
  oss << "  SubBlocks: " << blocks.size() << "\n";
  oss << "  Parameters: " << parameters.size() << "\n";
  oss << "}\n";
  return oss.str();
}

std::shared_ptr<SimulinkParameter> SimulinkBlock::getParameter(
  const char* parameterName)
{
  if (parameterName == nullptr)
  {
    l.log(Logger::V_WARNING,
      "SimulinkBlock:: getParameter called with null parameter name");
    return nullptr;
  }
  if (parameters.empty())
  {
    l.log(Logger::V_WARNING,
      "SimulinkBlock:: getParameter called but block has no "
      "parameters");
    return nullptr;
  }

  for (const auto& blockParameter : parameters)
  {
    const char* value = blockParameter->getName();
    if (value != nullptr && strcmp(value, parameterName) == 0)
    {
      return blockParameter;
    }
  }
  return std::make_shared<SimulinkParameter>();
}

std::string SimulinkBlock::getName()
{
  return name;
}

bool SimulinkBlock::contains(const Index& blockId) const
{
  for (const auto& block : blocks)
  {
    if (block && block->getID() == blockId)
    {
      return true;
    }
  }
  return false;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::getParent()
{
  return parent;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END