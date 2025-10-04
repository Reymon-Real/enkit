#!/bin/sh

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

rm -rf "$BUILD_WIN32"
rm -rf "$BUILD_LINUX"