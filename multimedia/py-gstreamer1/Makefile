# $NetBSD: Makefile,v 1.18 2020/03/08 16:50:47 wiz Exp $

DISTNAME=	gst-python-1.16.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/gst-python/gstreamer1/}
PKGREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	https://gstreamer.freedesktop.org/src/gst-python/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://gstreamer.freedesktop.org/
COMMENT=	Python bindings for gstreamer1
LICENSE=	gnu-lgpl-v2.1

DEPENDS+=	${PYPKGPREFIX}-gobject3-[0-9]*:../../devel/py-gobject3

USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config gmake
GNU_CONFIGURE=		yes
CONFIGURE_ENV+=		PYTHON=${PYTHONBIN}
CONFIGURE_ENV.SunOS+=	ac_cv_prog_cc_c99=no
PY_PATCHPLIST=		yes
TEST_TARGET=		check

.include "../../devel/py-gobject3-common/buildlink3.mk"
BUILDLINK_API_DEPENDS.gstreamer1+=	gstreamer1>=1.16.2
.include "../../multimedia/gstreamer1/buildlink3.mk"
.include "../../multimedia/gst-plugins1-base/buildlink3.mk"
.include "../../lang/python/extension.mk"
.include "../../mk/bsd.pkg.mk"
