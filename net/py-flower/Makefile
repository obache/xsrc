# $NetBSD: Makefile,v 1.2 2021/05/08 06:00:00 adam Exp $

DISTNAME=	flower-0.9.7
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	net python
MASTER_SITES=	${MASTER_SITE_PYPI:=f/flower/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/mher/flower
COMMENT=	Real-time monitor and web admin for Celery task queue
LICENSE=	modified-bsd

# https://github.com/mher/flower/issues/1029
BROKEN=		"Does not work with Celery 5.0"

DEPENDS+=	${PYPKGPREFIX}-celery>=4.3.0:../../net/py-celery
DEPENDS+=	${PYPKGPREFIX}-humanize-[0-9]*:../../textproc/py-humanize
DEPENDS+=	${PYPKGPREFIX}-prometheus_client>=0.8.0:../../net/py-prometheus_client
DEPENDS+=	${PYPKGPREFIX}-pytz-[0-9]*:../../time/py-pytz
DEPENDS+=	${PYPKGPREFIX}-tornado>=5.0.0:../../www/py-tornado
DEPENDS+=	${PYPKGPREFIX}-vine>=1.3.0:../../devel/py-vine
TEST_DEPENDS+=	${PYPKGPREFIX}-mock-[0-9]*:../../devel/py-mock

USE_LANGUAGES=	# none

PYTHON_VERSIONS_INCOMPATIBLE=	27

post-install:
	cd ${DESTDIR}${PREFIX}/bin && \
	${MV} flower flower-${PYVERSSUFFIX} || ${TRUE}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
