# ************************************************
# *** SPDX-License-Identifier: AGPL-3-or-later ***
# ************************************************

# *************************************
# *** Author - Eduardo Pozos Huerta ***
# *** File   - delete.sh            ***
# *** Date   - 17/09/2025           ***
# *************************************

# *****************
# *** Variables ***
# *****************

BUILD_WIN32="build/win32"
BUILD_LINUX="build/linux"

# *************
# *** Logic ***
# *************

Remove-Item -Path "$BUILD_WIN32" -Recursive -Force
Remove-Item -Path "$BUILD_LINUX" -Recursive -Force