# $NetBSD: Makefile,v 1.22 2021/02/15 14:52:23 ryoon Exp $

GIT_VERSION=	20200512.caa60026e223fc501e8b337fd5086ece4028b1c6
DIST_VERSION=	0.1
DISTNAME=	gyp-${DIST_VERSION}pre${GIT_VERSION}
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_LOCAL}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://gyp.gsrc.io/
COMMENT=	GYP can Generate Your Projects
LICENSE=	modified-bsd

DEPENDS+=	${PYPKGPREFIX}-setuptools-[0-9]*:../../devel/py-setuptools

EGG_NAME=	gyp-${DIST_VERSION}

# REPLACE_PYTHON settings farmed out due to size...
.include "Makefile.replace-python"

SUBST_CLASSES+=		python
SUBST_STAGE.python=	pre-build
SUBST_MESSAGE.python=	Fix python invocation
SUBST_FILES.python+=	gyp
SUBST_FILES.python+=	test/compiler-override/gyptest-compiler-global-settings.py
SUBST_SED.python+=	-e 's,/usr/bin/python,${PYTHONBIN},g'
SUBST_SED.python+=	-e 's,\([^/]\)python,\1${PYTHONBIN},g'

REPLACE_BASH=		gyp

USE_TOOLS+=	bash:run

# for test
USE_TOOLS+=	gmake
USE_LANGUAGES=	c c++

do-test:
	${RUN}cd ${WRKSRC}; LANG=C ${SETENV} ${TEST_ENV} ${PYTHONBIN} gyptest.py -a -f make --passed

.include "../../lang/python/egg.mk"
.include "../../lang/python/application.mk"
.include "../../lang/python/tool.mk"
.include "../../mk/bsd.pkg.mk"
