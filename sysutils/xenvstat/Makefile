# $NetBSD: Makefile,v 1.12 2020/01/18 23:35:22 rillig Exp $

DISTNAME=	xenvstat-20041127
PKGREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	rxg@NetBSD.org
HOMEPAGE=	https://www.NetBSD.org/
COMMENT=	X11-based display environmental sensor readings

ONLY_FOR_PLATFORM=	NetBSD-*-*

NO_CONFIGURE=	yes

LIBS+=		-lXt -lX11 -lm

INSTALLATION_DIRS=	bin lib/X11/app-defaults

do-extract:
	@${CP} -R ${FILESDIR} ${WRKSRC}

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} -o ${WRKSRC}/xenvstat \
		${WRKSRC}/xenvstat.c ${LIBS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xenvstat ${DESTDIR}${PREFIX}/bin/xenvstat
	${INSTALL_DATA} ${WRKSRC}/Xenvstat ${DESTDIR}${PREFIX}/lib/X11/app-defaults

.include "../../x11/libXt/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
