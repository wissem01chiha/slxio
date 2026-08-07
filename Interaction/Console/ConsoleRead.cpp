

/*--------------------------------------------------------------------------*/
#include "ConsoleRead.hxx"

/*--------------------------------------------------------------------------*/
#include "CallScilabBridge.hxx"

#include "os_string.h"

using namespace org_scilab_modules_gui_bridge;
/*--------------------------------------------------------------------------*/
static char *line = NULL;
/*--------------------------------------------------------------------------*/
char *ConsoleRead(void) {
  if (line) {
    delete[] line;
    line = NULL;
  }
  line = CallScilabBridge::readLine(getScilabJavaVM());
  return os_strdup(line);
}
/*--------------------------------------------------------------------------*/
