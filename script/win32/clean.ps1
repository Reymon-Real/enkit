# ************************************************
# *** SPDX-License-Identifier: AGPL-3-or-later ***
# ************************************************

# *************************************
# *** Author - Eduardo Pozos Huerta ***
# *** File   - clean.ps1            ***
# *** Date   - 17/09/2025           ***
# *************************************

# *****************
# *** Variables ***
# *****************

$CORES = [Environment]::ProcessorCount

$BUILD_WIN32 = "build/win32"
$BUILD_LINUX = "build/linux"

# *************
# *** Logic ***
# *************

ninja -v -j $CORES -C "$BUILD_WIN32" -t clean
ninja -v -j $CORES -C "$BUILD_LINUX" -t clean