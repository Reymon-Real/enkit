*> SPDX-License-Identifier: AGPL-3-or-later <*

*> ************************************* <*
*> *** Author - Eduardo Pozos Huerta *** <*
*> *** File   - rfs.cbl              *** <*
*> *** Date   - 17/09/2025           *** <*
*> *** Update - 03/10/2025           *** <*
*> ************************************* <*

*> ********************** <*
*> *** Header program *** <*
*> ********************** <*

IDENTIFICATION DIVISION.
PROGRAM-ID. ReyCreateRFS.

*> ***************************
*> *** ENVIROMENT DIVISION ***
*> ***************************

ENVIRONMENT DIVISION.
	
	CONFIGURATION SECTION.

		SOURCE-COMPUTER. Linux x86-64.
		OBJECT-COMPUTER. Linux x86-64.


	INPUT-OUTPUT SECTION.

		FILE-CONTROL.
			COPY "files.env.cpy".

*> *********************
*> *** DATA DIVISION ***
*> *********************

DATA DIVISION.

*> ********************
*> *** File Section ***
*> ********************

	FILE SECTION.
		
		COPY "files.fd.cpy".

*> ***********************
*> *** Working section ***
*> ***********************

	WORKING-STORAGE SECTION.

		COPY "files.status.cpy".

*> ***********************
*> *** Linkage Section ***
*> ***********************

	LINKAGE SECTION.

*> **************************************** <*
*> *** Main entry for the COBOL program *** <*
*> **************************************** <*

*>
*> Behaviour:
*>     This function only creates the rfs.dat file,
*>     but care must be taken as it is equivalent
*>     to creating it with the ‘w’ option
*>
*> Parameters:
*>     This function has no parameters
*>
*> Return:
*>     This function does not return any value
*>

PROCEDURE DIVISION.
	
	OPEN OUTPUT RFS-FILE.
	CLOSE RFS-FILE.
	GOBACK.
