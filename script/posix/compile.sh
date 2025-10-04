#!/bin/sh

# ************************************************
# *** SPDX-License-Identifier: AGPL-3-or-later ***
# ************************************************

# *************************************
# *** Author - Eduardo Pozos Huerta ***
# *** File   - compile.sh           ***
# *** Date   - 17/09/2025           ***
# *************************************

# *****************
# *** Variables ***
# *****************

ENKIT_LINUX="enkit_linux"
ENKIT_WIN32="enkit_windows"

BUILD_WIN32="build/win32"
BUILD_LINUX="build/linux"

# *************
# *** Logic ***
# *************

ninja -v -j$(nproc) -C "$BUILD_WIN32"
ninja -v -j$(nproc) -C "$BUILD_LINUX"