#include "SimulinkFile.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkFile::SimulinkFile()
    : blockdiagram(nullptr), modelDictionary(nullptr), configSetInfo(nullptr),
      bddefaults(nullptr), ScheduleEditor(nullptr), ScheduleCore(nullptr),
      graphicalInterface(nullptr) {}

xmlDocPtr SimulinkFile::getBlockdiagram() { return blockdiagram; }

xmlDocPtr SimulinkFile::getConfigSetInfo() { return configSetInfo; }

xmlDocPtr SimulinkFile::getModelDictionary() { return modelDictionary; }

xmlDocPtr SimulinkFile::getConfigSet(Index &icfg) { return configSets[icfg]; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END