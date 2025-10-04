/* SPDX-License-Identifier: AGPL-3-or-later */

// *************************************
// *** Author - Eduardo Pozos Huerta ***
// *** File   - reysub.h             ***
// *** Date   - 17/09/2025           ***
// *************************************

#ifndef REYSUB_H
#define REYSUB_H 1

// ***************************
// *** Standar C Libraries ***
// ***************************

// **************************
// *** Internal libraries ***
// **************************

#include "types.h"

// **************
// *** Macros ***
// **************

#define REY_EXIST      0
#define REY_NOT_EXIST -1

#define REY_URL "https://buy.stripe.com/28EdRa4yz50S8hi92m4Ni00"

#if defined(windows)
#define REY_DONATION system("start " REY_URL)
#elif defined(linux)
#define REY_DONATION system("xdg-open " REY_URL)
#elif defined(darwin)
#define REY_DONATION system("exit 0");
#endif

// *****************
// *** Variables ***
// *****************

extern ReySub reysub;

// *********************
// *** RFS Functions ***
// *********************

/* RFS stands for Reymon File Subscription. */

extern int ReyExistRFS(void);	// Verifie if the file "rfs.dat" exist

extern void ReyCreateRFS(void); // Create the file "rfs.dat"

// **************************
// *** Donation functions ***
// **************************

extern void ReyDonation(void);

#endif /* REYSUB_H */