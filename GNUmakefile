# Plain `make` from PowerShell / cmd on Windows builds with src/Makefile (MinGW gcc,
# Allegro 4, OpenAL, freealut, zlib), giving b-em.exe in src\. That needs a
# 32-bit (i686) MinGW gcc with Allegro 4 installed into it; see START_HERE.md.
# MINGW_BIN can point at another toolchain: make MINGW_BIN=C:/msys64/ucrt64/bin
ifeq ($(OS),Windows_NT)

MINGW_BIN ?= C:/msys64/mingw32/bin

ifeq ($(wildcard $(MINGW_BIN)/gcc.exe),)
$(error No MinGW gcc at $(MINGW_BIN). b-em needs a 32-bit gcc plus Allegro 4, which MSYS2 does not package; see START_HERE.md)
endif

export PATH := $(subst /,\,$(MINGW_BIN));$(PATH)

.PHONY: all clean
all:
	$(MAKE) -C src
clean:
	$(MAKE) -C src clean

endif
