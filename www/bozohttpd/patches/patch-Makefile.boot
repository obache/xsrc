$NetBSD: patch-Makefile.boot,v 1.2 2021/03/03 10:09:13 mrg Exp $

--- Makefile.boot.orig	2021-02-28 02:39:40.000000000 +0000
+++ Makefile.boot	2021-02-28 03:21:41.172077662 +0000
@@ -5,7 +5,9 @@
 
 CC=	cc
 OPT=	-O
+OPT=
 LARGE_CFLAGS=	-D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64
+LARGE_CFLAGS=
 LOCAL_CFLAGS=	-DNO_LUA_SUPPORT -DNO_BLOCKLIST_SUPPORT -D_GNU_SOURCE -D_DEFAULT_SOURCE
 CFLAGS=	$(OPT) $(LARGE_CFLAGS) $(LOCAL_CFLAGS)
 
