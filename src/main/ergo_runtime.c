/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - ergo_runtime.c       ***
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

// ********************
// *** Ergo Program ***
// ********************

int ergo(void) {
	return REY_SUCCESS | REY_ERGO;
}
