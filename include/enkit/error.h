/* SPDX-License-Identifies: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - errno.h              ***
// *** Date   - 08/09/2025           ***
// *************************************

#ifndef ENKIT_ERRNO_H
#define ENKIT_ERRNO_H 1

// ***************************
// *** Standar C Libraries ***
// ***************************

// ************************
// *** System Libraries ***
// ************************

// **************************
// *** External Libraries ***
// **************************

// **************************
// *** Internal Libraries ***
// **************************

// **************
// *** Macros ***
// **************

#define REY_SUCCESS 0x0000
#define REY_FAILURE 0x0001

#define REY_ERGO 0x0100
#define REY_EXIS 0x0101
#define REY_ENDI 0x0102

#define REY_ERROR    0x0200
#define REY_NO_ERROR 0x0201

// ****************************
// *** Enviroment Functions ***
// ****************************

extern void ReyTypeError(void);

#endif /* ENVIROMENT_H */