# ----------------------------
# Makefile Options
# ----------------------------

NAME ?= Coin
ICON ?= icon.png
DESCRIPTION ?= "Coin Flip"
COMPRESSED ?= NO
ARCHIVED ?= NO

CFLAGS ?= -Wall -Wextra -Oz
CXXFLAGS ?= -Wall -Wextra -Oz

# ----------------------------

ifndef CEDEV
$(error CEDEV environment path variable is not set)
endif

include $(CEDEV)/meta/makefile.mk
