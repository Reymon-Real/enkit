/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - types.h              ***
// *** Date   - 16/09/2025           ***
// *************************************

#ifndef ENKIT_TYPES_H
#define ENKIT_TYPES_H 1

// ***************************
// *** Standar C Libraries ***
// ***************************

#include <time.h>
#include <stdint.h>

// **************************
// *** External Libraries ***
// **************************

#include <raylib/raylib.h>

// **************************
// *** Internal Libraries ***
// **************************

// **************
// *** Macros ***
// **************

// ***********************
// *** Primary Aliases ***
// ***********************

// *************************
// *** Reymon Structures ***
// *************************

typedef struct {

	int width;
	int height;
	char* title;

} ReyScreen;

typedef struct {

	Rectangle rectangle;
	Color color;

} ReyButton;

typedef struct {

	uint64_t signature;
	time_t system_time_change;
	time_t last_modified_file;
	
	time_t day_current;
	time_t month_current;
	time_t year_current;
	
	time_t day_start;
	time_t month_start;
	time_t year_start;
	
	time_t day_end;
	time_t month_end;
	time_t year_end;

} ReySub;

// *************************
// *** Secondary Aliases ***
// *************************

#endif /* ENKIT_TYPES_H */
