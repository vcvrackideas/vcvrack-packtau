#include <rack.hpp>


using namespace rack;

extern Plugin* pluginInstance;

extern Model* modelT7Ctrl;
extern Model* modelT7Midi;
extern Model* modelT7Assistant;

extern Model* modelMb;
extern Model* modelMx;


bool registerSingleton(std::string name, ModuleWidget* mw);
bool unregisterSingleton(std::string name, ModuleWidget* mw);
