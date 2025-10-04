*> SPDX-License-Identifier: AGPL-3-or-later <*

*> *************************************
*> *** Author - Eduardo Pozos Huerta ***
*> *** File   - files.env.cpy        ***
*> *** Date   - 03/10/2025           ***
*> *** Update - 03/10/2025           ***
*> *************************************

*> ****************
*> *** RFS-FILE ***
*> ****************

SELECT RFS-FILE
	ASSIGN TO "rfs.dat"
	ORGANIZATION IS SEQUENTIAL
	ACCESS MODE IS SEQUENTIAL
FILE STATUS RFS-STATUS.
