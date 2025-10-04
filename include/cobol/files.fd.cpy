*> SPDX-License-Identifier: AGPL-3-or-later <*

*> *************************************
*> *** Author - Eduardo Pozos Huerta ***
*> *** File   - files.data.cpy       ***
*> *** Date   - 03/10/2025           ***
*> *** Update - 03/10/2025           ***
*> *************************************

*> ****************
*> *** RFS-FILE ***
*> ****************
FD RFS-FILE
	DATA RECORD IS RFS-RECORD.

*> ************************** <*
*> *** Subscription table *** <*
*> ************************** <*

01 RFS-RECORD.
	05 signature           USAGE BINARY-LONG.
	05 system-time-change  USAGE BINARY-LONG.
	05 last-modified-file  USAGE BINARY-LONG.

	05 day-current         USAGE BINARY-LONG.
	05 month-current       USAGE BINARY-LONG.
	05 year-current        USAGE BINARY-LONG.

	05 day-start           USAGE BINARY-LONG.
	05 month-start         USAGE BINARY-LONG.
	05 year-start          USAGE BINARY-LONG.

	05 day-end             USAGE BINARY-LONG.
	05 month-end           USAGE BINARY-LONG.
	05 year-end            USAGE BINARY-LONG.
