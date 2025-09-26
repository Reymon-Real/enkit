/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - render.c             ***
// *** Date   - 08/09/2025           ***
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
#include <enkit/utils.h>
#include <enkit/reysub.h>

// ***********************************
// *** Initialize Global Variables ***
// *** *******************************

char* rey_dropped_folder;

// ************************
// *** Static Variables ***
// ************************

// ***************************
// *** Program Enviroment ***
// ***************************

int ReyInitEnviroment(void) {

	rey_dropped_folder = NULL;

	if (rey_dropped_folder != NULL)
		return REY_FAILURE;

	return REY_SUCCESS;
}

// ***********************
// *** Input functions ***
// ***********************

void ReyInput(void) {

	int flag = ReyRename("rfs.dat", "rfs");

	if (flag == REY_RENAME_FAILURE) return;

}

// ***********************
// *** Render function ***
// ***********************

void ReyRender(void) {
	BeginDrawing();
			ClearBackground(RAYWHITE);
	EndDrawing();
}

// ***********************
// *** Update Function ***
// ***********************

void ReyUpdate(void) {

}