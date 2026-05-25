#include "SimulinkBlock.h"
#include <cstring>
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlock::SimulinkBlock()
  : name(std::string(""))
  , logger(Logger::GetInstance())
{
}

SimulinkBlock::SimulinkBlock(SimulinkBlockType::Type blockType)
  : type(blockType)
  , logger(Logger::GetInstance())
{
}

SimulinkBlock::SimulinkBlock(SimulinkBlockType* blockType)
  : type(*blockType)
  , logger(Logger::GetInstance())
{
}

SimulinkBlockType SimulinkBlock::GetBlockType()
{
  return type;
}

SimulinkBlock::SimulinkBlock(const SimulinkBlock& origBlock)
  : logger(Logger::GetInstance())
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
  const char* blockName, const IdType& blockId)
  : type(blockType)
  , name(std::string(blockName))
  , id(blockId)
  , logger(Logger::GetInstance())
{
}

UInt32 SimulinkBlock::AddElement(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    // l.log(Logger::Verbosity::V_ERROR,
    //"SimulinkBlock:: Cannot add a null Simulink element.");
    return E_OK;
  }

  if (element->GetElementType().isA(SimulinkElementType::Type::Block))
  {
    std::shared_ptr<SimulinkBlock> subblock =
      std::dynamic_pointer_cast<SimulinkBlock>(element);
    if (subblock == nullptr)
    {
      // l.log(Logger::Verbosity::V_ERROR,
      //  "SimulinkBlock:: failed to cast SimulinkElementBase to "
      //  "SimulinkBlock.");
      return E_OK;
    }

    if (subblock->GetParent() != nullptr)
    {
      // l.log(Logger::Verbosity::V_ERROR,
      //  "SimulinkBlock:: Cannot add block that already has a "
      //  "parent.");
      return E_OK;
    }

    if (Contains(subblock->GetElementId()))
    {
      parent = std::make_shared<SimulinkBlock>(*subblock);
    }
    return E_OK;
  }
  else if (element->GetElementType().isA(SimulinkElementType::Type::Parameter))
  {
    std::shared_ptr<SimulinkParameter> parameter =
      std::dynamic_pointer_cast<SimulinkParameter>(element);
    if (parameter == nullptr)
    {
      // l.log(Logger::Verbosity::V_ERROR,
      //  "SimulinkBlock:: failed to cast SimulinkElementBase to "
      //  "SimulinkParameter.");
      return E_OK;
    }
    parameters.push_back(parameter);
    return E_OK;
  }
  else
  {
    // l.log(Logger::Verbosity::V_ERROR,
    //"SimulinkBlock:: Cannot add a Simulink element of a different "
    // "type than Block or Parameter.");
    return E_OK;
  }

  return E_OK;
}

void SimulinkBlock::AddElement(SimulinkPortType portType)
{
  // ports[portType] += (IdType)1;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::GetSubBlock(
  const std::string& blockName)
{

  for (const auto& blk : blocks)
  {
    if (blk->name == blockName)
    {
      return blk;
    }
  }
  // l.log(Logger::V_WARNING, "No Sublock named ", blockName, "' found in Block
  // ",
  //  name);
  return std::shared_ptr<SimulinkBlock>();
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::GetSubBlock(const IdType& blockId)
{
  if (blockId == 0)
  {
    // l.log(Logger::V_ERROR, "SimulinkBlock:: block Id passed cannot be 0");
    return std::shared_ptr<SimulinkBlock>();
  }
  for (const auto& sublock : blocks)
  {
    if (sublock->GetElementId() == blockId)
    {
      return sublock;
    }
  }
  // l.log(Logger::V_WARNING, "SimulinkBlock:: sublock given Id ",
  //  std::to_string(blockId), " not found");
  return std::shared_ptr<SimulinkBlock>();
}

SimulinkElementType SimulinkBlock::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Block);
}

IdType SimulinkBlock::GetElementId() const
{
  return id;
}

void SimulinkBlock::SetBlockId(const IdType& blockId)
{
  id = blockId;
}

void SimulinkBlock::SetBlockName(const std::string& blockName)
{
  name = blockName;
}

void SimulinkBlock::SetBlockType(SimulinkBlockType::Type blockType)
{
  type = blockType;
}

UInt32 SimulinkBlock::RemoveElement(
  std::shared_ptr<SimulinkElementBase> element)
{
  if (element == nullptr)
  {
    // l.log(Logger::V_WARNING,
    //   "SimulinkBlock:: removing a null Simulink element "
    //  "pointer from subelement");
    return E_OK;
  }
  SimulinkElementType element_t = element->GetElementType();

  if (!(element_t.isA(SimulinkElementType::Type::Block)))
  {
    // l.log(Logger::V_ERROR,
    //   "SimulinkBlock:: cannot remove a Simulink element of a "
    //  "different "
    //"type than Block.");
    return E_OK;
  }

  std::shared_ptr<SimulinkBlock> subblock =
    std::dynamic_pointer_cast<SimulinkBlock>(element);
  if (subblock == nullptr)
  {
    // l.log(Logger::V_ERROR,
    //   "SimulinkBlock:: failed to cast SimulinkElementBase to "
    //"SimulinkBlock.");
    return E_OK;
  }

  if (blocks.empty())
  {
    return E_OK;
  }

  for (const auto& subBlock : blocks)
  {
    subBlock->RemoveElement(subblock);
  }
  return E_OK;
}

std::string SimulinkBlock::ToString() const
{
  std::ostringstream oss;

  oss << "SimulinkBlock {\n";
  oss << "  Name: " << name << "\n";
  oss << "  ID: " << id << "\n";
  oss << "  Type: " << type.ToString() << "\n";
  oss << "  Ports: " << ports.size() << "\n";
  oss << "  SubBlocks: " << blocks.size() << "\n";
  oss << "  Parameters: " << parameters.size() << "\n";
  oss << "}\n";
  return oss.str();
}

std::shared_ptr<SimulinkParameter> SimulinkBlock::GetParameter(
  const char* parameterName)
{
  if (parameterName == nullptr)
  {
    // l.log(Logger::V_WARNING,
    //  "SimulinkBlock:: getParameter called with null parameter name");
    return nullptr;
  }
  if (parameters.empty())
  {
    // l.log(Logger::V_WARNING,
    //"SimulinkBlock:: getParameter called but block has no "
    // "parameters");
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

std::string SimulinkBlock::GetBlockName()
{
  return name;
}

bool SimulinkBlock::Contains(const IdType& blockId) const
{
  for (const auto& block : blocks)
  {
    if (block && block->GetElementId() == blockId)
    {
      return true;
    }
  }
  return false;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::GetParent()
{
  return parent;
}

Logger& SimulinkBlock::GetLogger()
{
  return logger;
}

SLXIO_ABI_NAMESPACE_END
};
