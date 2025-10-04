# ************************************************
# *** SPDX-License-Identifier: AGPL-3-or-later ***
# ************************************************

# *************************************
# *** Author - Eduardo Pozos Huerta ***
# *** File   - setup.sh             ***
# *** Date   - 17/09/2025           ***
# *************************************

# *****************
# *** Variables ***
# *****************

$BUILD_WIN32 = "build/win32"
$BUILD_LINUX = "build/linux"

# *************
# *** Logic ***
# *************

meson.py setup "$BUILD_WIN32" --wipe --cross-file "meson/win32.cross"
meson.py setup "$BUILD_LINUX" --wipe --native-file "meson/linux.native"