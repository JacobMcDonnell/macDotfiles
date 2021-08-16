# ----------------------------
# Makefile Options
# ----------------------------

NAME ?= TempCalc
ICON ?= icon.png
DESCRIPTION ?= "Temperature Converter"
COMPRESSED ?= NO
ARCHIVED ?= NO

CFLAGS ?= -Wall -Wextra -Oz
CXXFLAGS ?= -Wall -Wextra -Oz

# ----------------------------

ifndef CEDEV
$(error CEDEV environment path variable is not set)
endif

include $(CEDEV)/meta/makefile.mk
