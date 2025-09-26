/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - out.h                ***
// *** Date   - 08/09/2025           ***
// *************************************

// ********************************
// *** All output functions are ***
// ***  defined in this file    ***
// ********************************

#ifndef ENKIT_OUT_H
#define ENKIT_OUT_H 1

// ***************************
// *** Standar C Libraries ***
// ***************************

// **************************
// *** External Libraries ***
// **************************

// **************************
// *** Internal Libraries ***
// **************************

// **************
// *** Macros ***
// **************

#define REY_RENAME_SUCCESS (0x01 ^ 0x01)
#define REY_RENAME_FAILURE (0x00 ^ 0x01)

// *****************
// *** Functions ***
// *****************

int ReyRename(const char*, const char*);

#endif /* ENKIT_IN_H */
