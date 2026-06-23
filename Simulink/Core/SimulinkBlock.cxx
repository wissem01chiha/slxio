#include "SimulinkBlock.h"
#include "Logger.h"
#include "SimulinkParameter.h"
#include <cstring>
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlock::SimulinkBlock(SimulinkBlockType::Type blockType)
  : BlockType(blockType)
  , logger(Logger::GetInstance())
{
}

SimulinkBlock* SimulinkBlock::New() const
{
  return new SimulinkBlock();
}

SimulinkBlockType SimulinkBlock::GetBlockType()
{
  return BlockType;
}

SimulinkBlock::SimulinkBlock(
  SimulinkBlockType::Type blockType, const char* blockName, const IdType& blockId)
  : BlockType(blockType)
  , BlockName(std::string(blockName))
  , BlockId(blockId)
  , logger(Logger::GetInstance())
{
}

std::shared_ptr<SimulinkElementBase> SimulinkBlock::at(IdType index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

std::shared_ptr<SimulinkElementBase> SimulinkBlock::operator[](IdType index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

UInt32 SimulinkBlock::Size() const
{
  return UInt32();
}

bool SimulinkBlock::Empty() const
{
  return false;
}

void SimulinkBlock::Clear() {}

ReturnType SimulinkBlock::Insert(const std::shared_ptr<SimulinkElementBase>& element)
{
  return ReturnType();
}

ReturnType SimulinkBlock::Erase(const IdType& id)
{
  return ReturnType();
}

ReturnType SimulinkBlock::Erase(const std::shared_ptr<SimulinkElementBase>& element)
{
  return ReturnType();
}

// UInt32 SimulinkBlock::AddElement(std::shared_ptr<SimulinkElementBase>
// element)
// {

//   if (element == nullptr)
//   {
//     // l.log(Logger::Verbosity::V_ERROR,
//     //"SimulinkBlock:: Cannot add a null Simulink element.");
//     return E_OK;
//   }

//   if (element->GetType().isA(SimulinkElementType::Type::Block))
//   {
//     std::shared_ptr<SimulinkBlock> subblock =
//       std::dynamic_pointer_cast<SimulinkBlock>(element);
//     if (subblock == nullptr)
//     {
//       // l.log(Logger::Verbosity::V_ERROR,
//       //  "SimulinkBlock:: failed to cast SimulinkElementBase to "
//       //  "SimulinkBlock.");
//       return E_OK;
//     }

//     if (subblock->GetParent() != nullptr)
//     {
//       // l.log(Logger::Verbosity::V_ERROR,
//       //  "SimulinkBlock:: Cannot add block that already has a "
//       //  "parent.");
//       return E_OK;
//     }

//     if (Contains(subblock->GetId()))
//     {
//       parent = std::make_shared<SimulinkBlock>(*subblock);
//     }
//     return E_OK;
//   }
//   else if
//   (element->GetType().isA(SimulinkElementType::Type::Parameter))
//   {
//     std::shared_ptr<SimulinkParameter> parameter =
//       std::dynamic_pointer_cast<SimulinkParameter>(element);
//     if (parameter == nullptr)
//     {
//       // l.log(Logger::Verbosity::V_ERROR,
//       //  "SimulinkBlock:: failed to cast SimulinkElementBase to "
//       //  "SimulinkParameter.");
//       return E_OK;
//     }
//     parameters.push_back(parameter);
//     return E_OK;
//   }
//   else
//   {
//     // l.log(Logger::Verbosity::V_ERROR,
//     //"SimulinkBlock:: Cannot add a Simulink element of a different "
//     // "type than Block or Parameter.");
//     return E_OK;
//   }

//   return E_OK;
// }

// void SimulinkBlock::AddElement(SimulinkPortType portType)
// {
//   // ports[portType] += (IdType)1;
// }

// std::shared_ptr<SimulinkBlock> SimulinkBlock::GetSubBlock(
//   const std::string& blockName)
// {

//   for (const auto& blk : blocks)
//   {
//     if (blk->name == blockName)
//     {
//       return blk;
//     }
//   }
//   // l.log(Logger::V_WARNING, "No Sublock named ", blockName, "' found in
//   Block
//   // ",
//   //  name);
//   return std::shared_ptr<SimulinkBlock>();
// }

// std::shared_ptr<SimulinkBlock> SimulinkBlock::GetSubBlock(const IdType&
// blockId)
// {
//   if (blockId == 0)
//   {
//     // l.log(Logger::V_ERROR, "SimulinkBlock:: block Id passed cannot be 0");
//     return std::shared_ptr<SimulinkBlock>();
//   }
//   for (const auto& sublock : blocks)
//   {
//     if (sublock->GetId() == blockId)
//     {
//       return sublock;
//     }
//   }
//   // l.log(Logger::V_WARNING, "SimulinkBlock:: sublock given Id ",
//   //  std::to_string(blockId), " not found");
//   return std::shared_ptr<SimulinkBlock>();
// }

SimulinkElementType SimulinkBlock::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Block);
}

IdType SimulinkBlock::GetId() const
{
  return BlockId;
}

void SimulinkBlock::SetBlockId(const IdType& blockId)
{
  BlockId = blockId;
}

void SimulinkBlock::SetBlockName(const std::string& blockName)
{
  BlockName = blockName;
}

void SimulinkBlock::SetBlockType(SimulinkBlockType::Type blockType)
{
  BlockType = blockType;
}

// UInt32 SimulinkBlock::RemoveElement(
//   std::shared_ptr<SimulinkElementBase> element)
// {
//   if (element == nullptr)
//   {
//     // l.log(Logger::V_WARNING,
//     //   "SimulinkBlock:: removing a null Simulink element "
//     //  "pointer from subelement");
//     return E_OK;
//   }
//   SimulinkElementType element_t = element->GetType();

//   if (!(element_t.isA(SimulinkElementType::Type::Block)))
//   {
//     // l.log(Logger::V_ERROR,
//     //   "SimulinkBlock:: cannot remove a Simulink element of a "
//     //  "different "
//     //"type than Block.");
//     return E_OK;
//   }

//   std::shared_ptr<SimulinkBlock> subblock =
//     std::dynamic_pointer_cast<SimulinkBlock>(element);
//   if (subblock == nullptr)
//   {
//     // l.log(Logger::V_ERROR,
//     //   "SimulinkBlock:: failed to cast SimulinkElementBase to "
//     //"SimulinkBlock.");
//     return E_OK;
//   }

//   if (blocks.empty())
//   {
//     return E_OK;
//   }

//   for (const auto& subBlock : blocks)
//   {
//     subBlock->RemoveElement(subblock);
//   }
//   return E_OK;
// }

std::string SimulinkBlock::ToString() const
{
  std::ostringstream oss;

  oss << "SimulinkBlock {\n";
  oss << "  Name: " << BlockName << "\n";
  oss << "  ID: " << BlockId << "\n";
  oss << "  Type: " << BlockType.ToString() << "\n";
  oss << "  Ports: " << BlockPorts.size() << "\n";
  oss << "  SubBlocks: " << SubBlocks.size() << "\n";
  oss << "  Parameters: " << BlockParameters.size() << "\n";
  oss << "}\n";
  return oss.str();
}

std::shared_ptr<SimulinkParameter> SimulinkBlock::GetParameter(const char* parameterName)
{
  if (parameterName == nullptr)
  {
    // l.log(Logger::V_WARNING,
    //  "SimulinkBlock:: getParameter called with null parameter name");
    return nullptr;
  }
  if (BlockParameters.empty())
  {
    // l.log(Logger::V_WARNING,
    //"SimulinkBlock:: getParameter called but block has no "
    // "parameters");
    return nullptr;
  }

  for (const auto& blockParameter : BlockParameters)
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
  return BlockName;
}

bool SimulinkBlock::Contains(const IdType& blockId) const
{
  for (const auto& block : SubBlocks)
  {
    if (block && block->GetId() == blockId)
    {
      return true;
    }
  }
  return false;
}

std::shared_ptr<SimulinkBlock> SimulinkBlock::GetBlockParent()
{
  return BlockParent;
}

Logger& SimulinkBlock::GetLogger()
{
  return logger;
}

SLXIO_ABI_NAMESPACE_END
};
