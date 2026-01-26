.. _api:

API documentation
=================

.. toctree::
   :maxdepth: 1
   :caption: Contents:


Manipulating SLX Files
----------------------

Reading Simulink Model MetaData
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. code-block:: cpp

    #include "Slxio.h"

    int main() {
        SimulinkModelParser* mdlpptr = new SimulinkModelParser();
        mdlpptr->setInputData("../FullBridgeAcDcConv.slx");
        if (mdlpptr->parse() == ErrorCode::Ok) {
            SimulinkModel* mdl = mdlpptr->get();
        } else {
            std::throw_exception;
        }

        SimulinkModelType type = mdl->getModelType();
        uint32 mdlver = mdl->getVersion();
        const char* mdlname = mdl->getName();

        return 0;
    }

Access Model Block Data
~~~~~~~~~~~~~~~~~~~~~~~

.. code-block:: cpp

    for (const auto& block : model.blocks()) {
        std::cout << block.name() << " [" << block.type() << "] at "
                  << block.position().x() << "," << block.position().y() << std::endl;
    }

    for (const auto& chart : model.stateflow().charts()) {
        std::cout << "Chart: " << chart.name() << std::endl;
        for (const auto& t : chart.transitions()) {
            std::cout << "  " << t.source() << " -> " << t.target()
                      << " if \"" << t.condition() << "\"" << std::endl;
        }
    }
