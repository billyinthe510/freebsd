#	$NetBSD: Makefile.inc,v 1.7 2005/09/17 11:49:39 tsutsui Exp $
# $FreeBSD$

.if ${MACHINE_ARCH:Mmips*hf} == ""
CFLAGS+=-DSOFTFLOAT
.endif

MDSRCS+= machdep_ldisd.c
SYM_MAPS+= ${LIBC_SRCTOP}/mips/Symbol.map
