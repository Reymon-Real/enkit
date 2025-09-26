*> SPDX-License-Identifier: AGPL-3-or-later <*

*> ************************************* <*
*> *** Author - Eduardo Pozos Huerta *** <*
*> *** File   - rfs.cob              *** <*
*> *** Date   - 17/09/2025           *** <*
*> ************************************* <*

*> ********************** <*
*> *** Header program *** <*
*> ********************** <*

IDENTIFICATION DIVISION.

program-id. RFS.

author. Eduardo Pozos Huerta.

date-written. 17/09/2025.
date-compiled. 17/09/2025.

*> ***************************
*> *** ENVIROMENT DIVISION ***
*> ***************************

ENVIRONMENT DIVISION.

	input-output section.

		file-control.
			select SubscriptionFile
				assign to "rfs.dat"
				organization is sequential
				access mode is sequential
			file status RFS-STATUS.

*> *********************
*> *** DATA DIVISION ***
*> *********************

DATA DIVISION.

*> ********************
*> *** File Section ***
*> ********************

	file section.
		fd SubscriptionFile
			data record is SubscriptionRecord.

	*> ************************** <*
	*> *** Subscription table *** <*
	*> ************************** <*

		01 SubscriptionRecord.
			05 signature           usage binary-long.
			05 system-time-change  usage binary-long.
			05 last-modified-file  usage binary-long.
		
			05 day-current         usage binary-long.
			05 month-current       usage binary-long.
			05 year-current        usage binary-long.
		
			05 day-start           usage binary-long.
			05 month-start         usage binary-long.
			05 year-start          usage binary-long.
		
			05 day-end             usage binary-long.
			05 month-end           usage binary-long.
			05 year-end            usage binary-long.

*> ***********************
*> *** Working section ***
*> ***********************

	working-storage section.

		01 RFS-STATUS pic xx.

		01 RESULT usage binary-long.

*> ***********************
*> *** Linkage Section ***
*> ***********************

	linkage section.

*> **************************************** <*
*> *** Main entry for the COBOL program *** <*
*> **************************************** <*

PROCEDURE DIVISION.

	stop run. *> The programme is stopped for safety reasons.

*> ***************************
*> *** Name - ReyCreateRFS ***
*> *** Date - 08/09/2025   ***
*> ***************************

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

entry "ReyCreateRFS"
	open output SubscriptionFile
	close SubscriptionFile
	goback.
