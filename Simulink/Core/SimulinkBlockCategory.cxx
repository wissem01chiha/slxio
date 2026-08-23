#include "SimulinkBlockCategory.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlockCategory::SimulinkBlockCategory()  {
  
        for (auto cat : {
            DefaultCategory::AdditionalMathDiscrete,
            DefaultCategory::CommonlyUsedBlocks,
            DefaultCategory::Continuous,
            DefaultCategory::Discontinuities,
            DefaultCategory::Discrete,
            DefaultCategory::LogicAndBitOperations,
            DefaultCategory::LookupTables,
            DefaultCategory::MathOperations,
            DefaultCategory::MatrixOperations,
            DefaultCategory::MessagesEvents,
            DefaultCategory::ModelVerification,
            DefaultCategory::ModelWideUtilities,
            DefaultCategory::PortsSubsystems,
            DefaultCategory::QuickInsert,
            DefaultCategory::SignalAttributes,
            DefaultCategory::SignalRouting,
            DefaultCategory::Sinks,
            DefaultCategory::Sources,
            DefaultCategory::String,
            DefaultCategory::UserDefinedFunctions
        }) {
            m_category.push_back(ToString(cat));
        }
    }

    SimulinkBlockCategory::SimulinkBlockCategory(DefaultCategory category) {
        m_category.push_back(ToString(category));
    }

    void SimulinkBlockCategory::AddCategory(const std::string& name)
    {
        if (!HasCategory(name))
        {
            m_category.push_back(name);
        }
}

bool SimulinkBlockCategory::HasCategory(const std::string& name) const
{
        return std::find(m_category.begin(), m_category.end(), name) != m_category.end();
    }

std::vector<std::string> SimulinkBlockCategory::GetAllCategories() const
 {
        return m_category;
    }

std::string SimulinkBlockCategory::ToString(DefaultCategory category)
{
     switch (category) {
            case DefaultCategory::AdditionalMathDiscrete: return "AdditionalMathDiscrete";
            case DefaultCategory::CommonlyUsedBlocks: return "CommonlyUsedBlocks";
            case DefaultCategory::Continuous: return "Continuous";
            case DefaultCategory::Discontinuities: return "Discontinuities";
            case DefaultCategory::Discrete: return "Discrete";
            case DefaultCategory::LogicAndBitOperations: return "LogicAndBitOperations";
            case DefaultCategory::LookupTables: return "LookupTables";
            case DefaultCategory::MathOperations: return "MathOperations";
            case DefaultCategory::MatrixOperations: return "MatrixOperations";
            case DefaultCategory::MessagesEvents: return "MessagesAndEvents";
            case DefaultCategory::ModelVerification: return "ModelVerification";
            case DefaultCategory::ModelWideUtilities: return "ModelWideUtilities";
            case DefaultCategory::PortsSubsystems: return "PortsSubsystems";
            case DefaultCategory::QuickInsert: return "QuickInsert";
            case DefaultCategory::SignalAttributes: return "SignalAttributes";
            case DefaultCategory::SignalRouting: return "SignalRouting";
            case DefaultCategory::Sinks: return "Sinks";
            case DefaultCategory::Sources: return "Sources";
            case DefaultCategory::String: return "String";
            case DefaultCategory::UserDefinedFunctions: return "UserDefinedFunctions";
            default : return {};
        }
        return {};
}

SLXIO_ABI_NAMESPACE_END

} // namespace slxio