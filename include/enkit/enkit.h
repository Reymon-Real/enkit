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
#include "error.h"
#include "render.h"
#include "destroy.h"
#include "runtime.h"
#include "enviroment.h"

// *********************************
// *** The most important macros ***
// *********************************

#define REY_FPS 30
#define ENKIT_VERSION "1.0.0" // Define versión of the project
#define REY_OVERFLOW (0xF0 ^ 0xFF)

// ************************************
// *** The most important functions ***
// ************************************

extern int ergo(void);

#endif /* ENKIT_H */
