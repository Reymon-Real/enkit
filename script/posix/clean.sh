#!/bin/sh

# ************************************************
# *** SPDX-License-Identifier: AGPL-3-or-later ***
# ************************************************

# *************************************
# *** Author - Eduardo Pozos Huerta ***
# *** File   - clean.sh             ***
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

ninja -v -j$(nproc) -C "$BUILD_WIN32" -t clean
ninja -v -j$(nproc) -C "$BUILD_LINUX" -t clean