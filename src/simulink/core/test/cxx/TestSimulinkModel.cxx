#include "doctest.h"
#include "SimulinkModel.h"
#include "SimulinkParameter.h"
#include "SimulinkConfigSet.h"

namespace slxio
{

    TEST_CASE("Simulink  model default constructor test")
    {
        auto mdl = std::make_shared<SimulinkModel>();
        CHECK(mdl->GetOriginId().empty() == true);
        CHECK(mdl != nullptr);
        CHECK(mdl->GetModel() == nullptr);
    }

    TEST_CASE("Add a config set to a model test")
    {
        auto mdl = std::make_shared<SimulinkModel>();
        auto config = std::make_shared<SimulinkConfigSet>();
        CHECK(mdl->AddConfigSet("ConfigurationPROD", config) == error_code::Ok);
        std::shared_ptr<SimulinkConfigSet> newConfig = mdl->GetConfigSet("ConfigurationPROD");
        CHECK(newConfig != nullptr);
        CHECK(newConfig->GetName() == config->GetName());
    }

    TEST_CASE("Simulink  model set/get config test")
    {
        auto mdl = std::make_shared<SimulinkModel>();
        auto solver = std::make_shared<SimulinkParameter>();
        solver->SetSimulinkDataType(SimulinkDataType::String);

        std::shared_ptr<SimulinkConfigSet> config = std::make_shared<SimulinkConfigSet>();
        config->SetParam("Solver", "ode");
        CHECK(mdl->AddConfigSet("ConfigurationPROD", config) == error_code::Ok);

        auto ec = mdl->SetConfigSetParameter("ConfigurationPROD", "Solver", solver);
        auto ecc = make_error_code(ec);
        INFO(ecc.message());
        CHECK(ec == error_code::Ok);

        auto ssolver = mdl->GetConfigSetParameter("ConfigurationPROD", "Solver");
        CHECK(ssolver != nullptr);
        CHECK(ssolver->GetSimulinkDataType() == SimulinkDataType::String);
    }

}; // namespace slxio
