# ----------------------------
# Makefile Options
# ----------------------------

NAME ?= RNG
ICON ?= icon.png
DESCRIPTION ?= "Random Number Generator"
COMPRESSED ?= NO
ARCHIVED ?= NO

CFLAGS ?= -Wall -Wextra -Oz
CXXFLAGS ?= -Wall -Wextra -Oz

# ----------------------------

ifndef CEDEV
$(error CEDEV environment path variable is not set)
endif

include $(CEDEV)/meta/makefile.mk
