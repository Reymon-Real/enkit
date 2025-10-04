/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - file_output.c        ***
// *** Date   - 08/09/2025           ***
// *************************************

// ***************************
// *** Standar C Libraries ***
// ***************************

#include <stdio.h>
#include <errno.h>
#include <stdint.h>
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

// ************************
// *** Static functions ***
// ************************

static void ReyConcat(char*, size_t, const char*, const char*, const char*);

// *****************************
// *** No sé que hace aún :v *** 
// *****************************

int ReyFileOut() {
	return 0;	
}

// *************************
// *** Name - ReyRename  ***
// *** Date - 08/09/2025 ***
// *************************

/**
 * 
 * Behavior
 *     This function renames a file
 *     in the current directory
 * 
 * Parameters
 *     It receives two constant pointers of type char as parameters.
 *     The first indicating the name of the current file
 *     and the second indicating the new name
 * 
 *     name     - Current Name
 *     new_name - New File Name
 * 
 * Return
 *     Returns REY_RENAME_SUCCESS if the operation was successful
 *     Returns REY_RENAME_FAILURE if the operation failed
 * 
 * */

int ReyRename(const char* old_name, const char* new_name) {
	
	char name[REY_PATH_LIMIT];
	char* path;
	char* extension;

	if (!old_name || !new_name) return REY_RENAME_FAILURE;

	extension = strrchr(old_name, '.');

	if (!extension) extension = "";

	path = ReyRealPath(old_name);

	ReyConcat(name, REY_PATH_LIMIT, path, new_name, extension);

	if (rename(old_name, name) != 0)
		return REY_RENAME_FAILURE;

	return REY_RENAME_SUCCESS;
}

// **************************
// *** Nanme - ReyConcat  ***
// *** Date  - 08/09/2025 *** 
// **************************

static void ReyConcat(char* buffer, size_t size, const char* path, const char* new_name, const char* extension) {
	#if defined(windows_legacy)
	snprintf(buffer, size, "%s%s%s", path, new_name, extension);
	#else
	snprintf(buffer, size, "%s%s%s", path, new_name, extension);
	#endif
}