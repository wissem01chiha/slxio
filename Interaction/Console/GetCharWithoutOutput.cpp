/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2007-2008 - INRIA - Vincent COUVERT
 *
 * Copyright (C) 2012 - 2016 - Scilab Enterprises
 *
 * This file is hereby licensed under the terms of the GNU GPL v2.0,
 * pursuant to article 5.3.4 of the CeCILL v.2.1.
 * This file was originally licensed under the terms of the CeCILL v2.1,
 * and continues to be available under such terms.
 * For more information, see the COPYING file which you should have received
 * along with this program.
 *
 */

/*--------------------------------------------------------------------------*/
#include <jni.h>
#include <stdlib.h>
extern "C"
{
#include "../../../jvm/includes/getScilabJNIEnv.h"
#include "./../../jvm/includes/getScilabObject.h"
}
#include "GetCharWithoutOutput.hxx"
#include "sci_malloc.h"
/*--------------------------------------------------------------------------*/
#include "CallScilabBridge.hxx"
using namespace org_scilab_modules_gui_bridge;
int GetCharWithoutOutput(void)
{
    return CallScilabBridge::getCharWithoutOutput(getScilabJavaVM());
}
