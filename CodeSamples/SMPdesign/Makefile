# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
#
# Copyright (c) 2008 Paul E. McKenney, IBM Corporation.

PROGS = smpalloc lockdeq lockhdeq locktdeq matmul matmul_block

all: $(PROGS)

include ../Makefile.arch

# GCC_ARGS=-g -O3

# http://www.ibm.com/developerworks/wikis/display/hpccentral/Tuning+options+to+consider+with+gcc#Tuningoptionstoconsiderwithgcc-mcpuandmtune
# GCC_ARGS=-g -O3 -m64 -mcpu=power5 -mtune=power5

smpalloc: smpalloc.c ../api.h
	cc $(GCC_ARGS) -g -o smpalloc -DTEST smpalloc.c -lpthread

lockdeq: lockdeq.c deqtorture.h ../api.h
	cc $(GCC_ARGS) -g -o lockdeq -DTEST lockdeq.c -lpthread

lockhdeq: lockhdeq.c deqtorture.h ../api.h
	cc $(GCC_ARGS) -g -o lockhdeq -DTEST lockhdeq.c -lpthread

locktdeq: locktdeq.c deqtorture.h ../api.h
	cc $(GCC_ARGS) -g -o locktdeq -DTEST locktdeq.c -lpthread

matmul: matmul.c ../api.h
	cc $(GCC_ARGS) -g -o matmul -DTEST matmul.c -lpthread

matmul_block: matmul_block.c ../api.h
	cc $(GCC_ARGS) -g -o matmul_block -DTEST matmul_block.c -lpthread

clean:
	rm $(PROGS)
