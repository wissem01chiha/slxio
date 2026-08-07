

#ifndef __SHELL_GW_HXX__
#define __SHELL_GW_HXX__

#include "cpp_gateway_prototype.hxx"

extern "C" {
#include "dynlib_console_gw.h"
}

class ConsoleModule {
private:
  ConsoleModule(){};
  ~ConsoleModule(){};

public:
  EXTERN_CONSOLE_GW static int Load();
  EXTERN_CONSOLE_GW static int Unload() { return 1; }
};

CPP_GATEWAY_PROTOTYPE(sci_clc);
CPP_GATEWAY_PROTOTYPE(sci_iswaitingforinput);
CPP_GATEWAY_PROTOTYPE(sci_lines);
CPP_GATEWAY_PROTOTYPE(sci_tohome);
CPP_GATEWAY_PROTOTYPE(sci_prompt);

#endif /* !__SHELL_GW_HXX__ */
