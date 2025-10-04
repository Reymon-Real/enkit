#!/bin/sh

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

LIB_LINUX="lib/linux"

ENKIT_LINUX="enkit_linux"
ENKIT_WIN32="enkit_windows"

BUILD_WIN32="build/win32"
BUILD_LINUX="build/linux"

# *****************
# *** Libraries ***
# *****************

cp "/lib/x86_64-linux-gnu/libc.so.6"		"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libm.so.6"		"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libz.so.1"		"$LIB_LINUX"

cp "/lib/x86_64-linux-gnu/libdl.so.2"		"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/liblzma.so.5"		"$LIB_LINUX"

cp "/lib/x86_64-linux-gnu/libdb-5.3.so"		"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libgmp.so.10"		"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libxml2.so.2"		"$LIB_LINUX"

cp "/lib/x86_64-linux-gnu/libcjson.so.1"	"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libtinfo.so.6"	"$LIB_LINUX"

cp "/lib/x86_64-linux-gnu/libgcc_s.so.1"	"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libicuuc.so.74"	"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libstdc++.so.6"	"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libpthread.so.0"	"$LIB_LINUX"

cp "/lib/x86_64-linux-gnu/libncursesw.so.6"	"$LIB_LINUX"
cp "/lib/x86_64-linux-gnu/libicudata.so.74"	"$LIB_LINUX"

# *************
# *** Logic ***
# *************

mkdir -p "$ENKIT_WIN32"
mkdir -p "$ENKIT_LINUX"

meson.py setup "$BUILD_WIN32" --wipe --cross-file meson/win32.cross   --prefix $(realpath "$ENKIT_WIN32")
meson.py setup "$BUILD_LINUX" --wipe --native-file meson/linux.native --prefix $(realpath "$ENKIT_LINUX")

rm -rf "$ENKIT_WIN32"
rm -rf "$ENKIT_LINUX"