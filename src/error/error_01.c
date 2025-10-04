/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - errno_01.c           ***
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

// ******************************
// *** Manager type of Errors ***
// ******************************

void ReyTypeError(void) {
	
	switch (rey_errno) {
		
		case REY_FAILURE | REY_ERGO:
				rey_errno = 0xFF;
			break; 
		
		default:
			break;
	}

}