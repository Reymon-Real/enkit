/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - file_in.c            ***
// *** Date   - 08/09/2025           ***
// *************************************

// ***************************
// *** Standar C Libraries ***
// ***************************

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>

// ************************
// *** System Libraries ***
// ************************

// **************************
// *** External Libraries ***
// **************************

#include <raylib/raylib.h>

// **************************
// *** Internal Libraries ***
// **************************

#include <enkit/in.h>
#include <enkit/out.h>
#include <enkit/types.h>
#include <enkit/utils.h>

// ************************
// *** Static Functions ***
// ************************

static int ReyGetPath(const char*);

// *****************************
// *** Aun no sé que hace :v ***
// *****************************

int ReyFileIn(void) {
	return 0;
}

// *************************
// *** Name - ReyOpendir ***
// *** Date - 08/09/2025 ***
// *************************

DIR* ReyOpendir(const char* directory) {

	DIR* dir;
	//struct dirent* de;
	
	dir = REY_OPEN_DIR(directory); 

	return dir;
}

// *************************
// *** Name - ReyRename  ***
// *** Date - 08/09/2025 ***
// *************************

/**
 * 
 * Behavior
 *     This function list all files
 *     in the specified directory
 * 
 * Parameters
 *     Receives the directory name
 *     as a char* parameter.
 * 
 *     directory - Directory from which
 *                 the files will be listed
 * 
 * Return
 *     Returns the list of files in the directory
 * 
 * */

FILE* ReyListFile(const char* directory) {

	return fopen(directory, "r");
}

// **************************
// *** Name - ReyRealPath ***
// *** Date - 21/09/2025  ***
// **************************

/**
 * 
 * Behavior
 *     This function get absolute
 *     path from a file
 * 
 * Parameters
 *     Receives the file and
 *     all path of this
 * 
 *     file - const char *restrict
 * 
 * Return
 *     Returns absolute path from file
 * 
 * */

char* ReyRealPath(const char *restrict file) {

	static char resolved[REY_PATH_LIMIT];

	if (file[255] == -1)
		ReyGetPath(file);
	
	if (REY_GET_PATH(file, resolved))
		return resolved;

	return NULL;
}

// *************************
// *** Name - ReyGetPath ***
// *** Date - 25/09/2025 ***
// *************************

int ReyGetPath(const char* file) {
	return (int) file[0];
}