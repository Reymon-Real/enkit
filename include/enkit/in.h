/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - in.h                 ***
// *** Date   - 08/09/2025           ***
// *************************************

// *******************************
// *** All input functions are ***
// ***  defined in this file   ***
// *******************************

#ifndef ENKIT_IN_H
#define ENKIT_IN_H 1

// ***************************
// *** Standar C Libraries ***
// ***************************

#include <stdio.h>
#include <stdlib.h>

// ************************
// *** System Libraries ***
// ************************

#include <dirent.h>

#if defined(windows)

#include <direct.h>

#elif defined(linux)

#include <sys/types.h>
#include <unistd.h>
#include <limits.h>

#endif

// **************************
// *** External Libraries ***
// **************************

// **************************
// *** Internal Libraries ***
// **************************

// **************
// *** Macros ***
// **************

#define REY_PATH_LIMIT 0x1000

#if defined(windows)

#define REY_GET_PATH(path, resolved) _fullpath(resolved, path, REY_PATH_LIMIT)
#define REY_OPEN_DIR(dir) opendir(dir)

#elif defined(linux)

#define REY_GET_PATH(path, resolved) realpath(path, resolved)
#define REY_OPEN_DIR(dir) opendir(dir)

#endif

// *****************
// *** Functions ***
// *****************

extern DIR* ReyOpendir(const char*);
extern FILE* ReyListFile(const char*);
extern char* ReyRealPath(const char *restrict);

#endif /* ENKIT_IN_H */
