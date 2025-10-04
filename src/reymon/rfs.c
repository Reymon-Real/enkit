/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - rfs.c                ***
// *** Date   - 17/09/2025           ***
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

// **************************
// *** Internal Libraries ***
// **************************

#include <enkit/reysub.h>

// ************************
// *** Static Constants ***
// ************************

// ************************
// *** Static Variables ***
// ************************

// *********************
// *** RFS Functions ***
// *********************

/**
 * 
 * Behaviour:
 *     This function verify if the file
 *     rfs.dat exist
 * 
 * Parameters:
 *     Doesn't parameters
 * 
 * Return:
 *     Return the value REY_EXIST if the
 *     file exist and REY_NOT_EXIST if do
 *     not exist
 * 
 * */

int ReyExistRFS(void) {
	
	FILE* rfs = fopen("rfs.dat", "r");

	if (!rfs) return REY_EXIST;

	fclose(rfs);
	return REY_NOT_EXIST;

}

/**
 * 
 * Behaviour:
 *     This function create a rfs.dat
 *     in the mode w if do not exist
 * 
 * Parameters:
 *     Doesn't parameters
 * 
 * Return:
 *     Don't return a value
 * 
 * */

#if defined(windows) || defined(darwin)

void ReyCreateRFS(void) {
	
	FILE* rfs = fopen("rfs.dat", "w");
	
	fclose(rfs);
}

#endif

// ****************
// *** Donation ***
// ****************

void ReyDonation(void) {
	
	int ret = REY_DONATION;

	if (ret == -1)
		printf("system() falló: %s (errno=%d)\n", strerror(errno), errno);
}