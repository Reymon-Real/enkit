/* SPDX-License-Identifier: AGPL-3-or-Later  */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** file   - menu.c               ***
// *** date   - 08/09/2025           ***
// *************************************

// ***************************
// *** Standar C Libraries ***
// ***************************

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

// **************************
// *** External Libraries ***
// **************************

#include <raylib/raylib.h>

// **************************
// *** Internal Libraries ***
// **************************

#include <enkit/enkit.h>
#include <enkit/types.h>
#include <enkit/utils.h>

// *****************
// *** Variables *** 
// *****************

int rey_global_errno;
char rey_global_path_dir[255];

// *******************
// *** Static data ***
// *******************

// ************************
// *** Static functions ***
// ************************

// *********************
// *** Create a Menu ***
// *********************

int ReyCreateSubmenu(const char* name) {

	return name[0];
}

// ************************
// *** Exit from window ***
// ************************

int ReyExitCB(void) {
	return 0;
}