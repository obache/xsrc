# $NetBSD: Makefile,v 1.13 2021/04/21 11:42:02 adam Exp $

DISTNAME=	fcitx-skk-0.1.4
PKGREVISION=	11
CATEGORIES=	inputmethod
MASTER_SITES=	https://download.fcitx-im.org/fcitx-skk/
EXTRACT_SUFX=	.tar.xz

HOMEPAGE=	http://fcitx-im.org/
COMMENT=	Skk Input Method For Fcitx
LICENSE=	gnu-gpl-v3

USE_CMAKE=	yes
USE_LANGUAGES=	c c++
USE_TOOLS+=	msgfmt pkg-config

CMAKE_ARGS+=	-DSKK_DEFAULT_PATH:PATH=${LOCALBASE}/share/skk/SKK-JISYO.L

BUILDLINK_TRANSFORM+=	rm:-std=c++11

.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../inputmethod/fcitx/buildlink3.mk"
.include "../../inputmethod/fcitx-qt5/buildlink3.mk"
.include "../../inputmethod/libskk/buildlink3.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
