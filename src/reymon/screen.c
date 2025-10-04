/* SPDX-License-Identifier: AGPL-3-or-Later  */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** file   - screen.c             ***
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

// ************
// *** Init ***
// ************

ReyScreen* ReyInitScreen(const int width, const int height, const char* title) {
	ReyScreen* reywin = malloc(sizeof(ReyScreen));

	reywin -> width  = width;
	reywin -> height = height;
	reywin -> title  = (char*) title;

	return reywin;
}

// ***************
// *** Destroy ***
// ***************

int ReyDestroyScreen(ReyScreen* reywin) {
	if (reywin == NULL)
		return REY_FAILURE | REY_DESTROY;

	free(reywin);
	reywin = NULL;

	return REY_SUCCESS | REY_DESTROY;
}