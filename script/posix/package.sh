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

mkdir -p	"$ENKIT_LINUX" \
			"$ENKIT_LINUX/lib/raylib" \
			"$ENKIT_LINUX/lib/gnucobol"

cp --preserve=all $BUILD_LINUX/enkit $ENKIT_LINUX

cp -r licenses           "$ENKIT_LINUX"
cp -r lib/linux          "$ENKIT_LINUX/lib"
cp -r lib/raylib/linux   "$ENKIT_LINUX/lib/raylib"
cp -r lib/gnucobol/linux "$ENKIT_LINUX/lib/gnucobol"

rmdir "$ENKIT_LINUX/bin/"

zip enkit_win32.zip "$BUILD_WIN32/enkit.exe"
zip -r enkit_linux.zip "$ENKIT_LINUX"

rm -rf "$ENKIT_LINUX"