#!/bin/sh
MINGW_DIR=""
TLIB_DIR="lib/"
ENABLE_SHARED="YES"
SHARED_LIBRARY_EXT="so"
DATA_DIR=""
HOST=
HOST_PREF=""
CFLAGS_COMMON="${CFLAGS} -m32"
CFLAGS_SOURCE="-D_M_IX86"
CXXLAGS="${CXXLAGS} -m32"
LDFLAGS="${LDFLAGS} -m32"
COMMAND_ENV="ARCH=i386"
