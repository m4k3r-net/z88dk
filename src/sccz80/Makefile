#
# Makefile for sccz80
#
# $Id: Makefile,v 1.17 2016-07-10 16:09:00 dom Exp $
#

INSTALL ?= install

OBJS =	callfunc.o     	\
	codegen.o	\
	const.o		\
	data.o		\
	declinit.o	\
	error.o		\
	expr.o		\
	goto.o		\
	io.o		\
	lex.o		\
	main.o		\
	misc.o		\
	plunge.o	\
	preproc.o	\
	primary.o	\
	stmt.o		\
	sym.o		\
	while.o 	\
	declparse.o

DEPENDS := $(OBJS:.o=.d)

all: sccz80$(EXESUFFIX)

CFLAGS += -MMD -Wall -I../../ext/uthash/src/ -g -pedantic

sccz80$(EXESUFFIX): $(OBJS)
	$(CC) $(LDFLAGS) -o sccz80$(EXESUFFIX) $(OBJS) -lm

install: sccz80$(EXESUFFIX)
	$(INSTALL) -m 755 sccz80$(EXESUFFIX) $(PREFIX)/bin/$(EXEC_PREFIX)sccz80$(EXESUFFIX)

clean :
	$(RM) *.o *~ core sccz80$(EXESUFFIX)
	$(RM) -rf Debug Release
	$(RM) $(DEPENDS)


-include $(DEPENDS)
