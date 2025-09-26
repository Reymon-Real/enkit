/* SPDX-License-Identifies: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - enkit.h              ***
// *** Date   - 08/09/2025           ***
// *************************************

// *****************************************
// ***  This is the main file and where  ***
// *** the most important aspects of the ***
// ***        project are defined        ***
// *****************************************

#ifndef ENKIT_H
#define ENKIT_H 1

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

#include "in.h"
#include "out.h"
#include "init.h"
#include "types.h"
#include "render.h"
#include "destroy.h"
#include "runtime.h"

// *********************************
// *** The most important macros ***
// *********************************

#define REY_FPS 30
#define ENKIT_VERSION "1.0.0" // Define versión of the project
#define REY_OVERFLOW (0xF0 ^ 0xFF)

#define REY_SUCCESS 0x00
#define REY_FAILURE 0x01

#if defined(linux)
#define REY_COBOL_ENV cob_init(argc, argv);
#define REY_PARAMS int argc, char** argv 
#else
#define REY_COBOL_ENV
#define REY_PARAMS void
#endif

// ************************
// *** Global Variables ***
// ************************

extern char* rey_dropped_folder;
extern int rey_global_errno;
extern char rey_global_path_dir[255];

// ************************************
// *** The most important functions ***
// ************************************

extern int ReyInitEnviroment();

#endif /* ENKIT_H */
