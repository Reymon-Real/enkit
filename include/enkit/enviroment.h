/* SPDX-License-Identifies: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - errno.h              ***
// *** Date   - 08/09/2025           ***
// *************************************

#ifndef ENKIT_ENVIROMENT_H
#define ENKIT_ENVIROMENT_H 1

// ***************************
// *** Standar C Libraries ***
// ***************************

#include <stdio.h>
#include <stdlib.h>

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

// **************
// *** Macros ***
// **************

#if defined(linux)
#define REY_COBOL_ENV cob_init(argc, argv);
#define REY_MAIN_PARAMS int argc, char** argv 
#else
#define REY_COBOL_ENV
#define REY_MAIN_PARAMS void
#endif

// ************************
// *** Global Variables ***
// ************************

extern int rey_errno;
extern char rey_path_dir[0x1000];
extern char* rey_dropped_folder;

// ****************************
// *** Enviroment Functions ***
// ****************************

extern int ReyInitEnviroment(void);

#endif /* ENKIT_ENVIROMENT_H */