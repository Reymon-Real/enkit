/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - enkit.c              ***
// *** Date   - 12/09/2025           ***
// *************************************

// ***************************
// *** Standar C Libraries ***
// ***************************

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

// **************************
// *** External Libraries ***
// **************************

#include <raylib/raylib.h>

#if defined(linux)
#include <libcob.h>
#endif

// **************************
// *** Interna Components ***
// **************************

#include <enkit/enkit.h>
#include <enkit/reysub.h>

// ************************
// *** Static Constants ***
// ************************

// ************************
// *** Static Variables ***
// ************************

static ReyScreen* reywin;

// *******************
// *** Entry Point ***
// *******************

int main(REY_MAIN_PARAMS) {

	REY_COBOL_ENV

	int exist = ReyExistRFS();

	if (exist | REY_NOT_EXIST) ReyCreateRFS();

	// Init Global Data
	int reyenv = ReyInitEnviroment();

	if (reyenv == REY_FAILURE)
		return EXIT_FAILURE;

	// Initialice Window
	reywin = ReyInitScreen(
		800,	// Width
		700,	// Height
		"Enkit"	// Title
	);

	// Create Window
	InitWindow(
		reywin -> width,
		reywin -> height,
		reywin -> title
	);

	// Set FPS
	SetTargetFPS(REY_FPS);

	// Main Loop
	while (!WindowShouldClose()) {
		ReyInput();
		ReyUpdate();
		ReyRender();
	}

	// End Window
	CloseWindow();

	// Destroy Screen
	ReyDestroyScreen(reywin);

	// Terminar el programa
	return EXIT_SUCCESS;
}