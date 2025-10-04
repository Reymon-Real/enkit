/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - enviroment.c         ***
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

int rey_errno;
char rey_path_dir[0x1000];
char* rey_dropped_folder;

// ************************
// *** Static Variables ***
// ************************

// ************************
// *** Setup Enviroment ***
// ************************

int ReyInitEnviroment(void) {

	rey_errno = REY_NO_ERROR; // Isn't Errors
	
	memset(rey_path_dir, 0, 0x1000); // Inirialization
	
	rey_dropped_folder = NULL; // Secure Pointer

	/* Verify if the correct initialization of rey_errno */
	if (rey_errno != REY_NO_ERROR)
		return EXIT_FAILURE | REY_NO_ERROR;

	/* Verify the correct intitialization */
	if (rey_path_dir[0xFFF] == 0)
		return REY_FAILURE | REY_ERROR;

	/* Verify if not NULL pointer */
	if (rey_dropped_folder != NULL)
		return REY_FAILURE | REY_ERROR;

	/* Correct initialization */
	return REY_SUCCESS;
}