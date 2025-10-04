/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - runtime.c            ***
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

// ************************
// *** Static Variables ***
// ************************

static int flag;

// ***********************
// *** Input functions ***
// ***********************

void ReyInput(void) {

	if (IsKeyDown(KEY_RIGHT)) flag = REY_SUCCESS | REY_ERGO; else flag = REY_FAILURE | REY_ERGO;

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

	ReyTypeError();

	if (flag == (REY_SUCCESS | REY_ERGO))
		rey_errno = ergo();

}