# $NetBSD: Makefile,v 1.10 2021/05/24 19:54:34 wiz Exp $

DISTNAME=	Pod-Coverage-TrustPod-0.100005
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	4
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Pod/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://metacpan.org/release/Pod-Coverage-TrustPod
COMMENT=	Allow a module's pod to contain Pod::Coverage hints
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Pod-Coverage-[0-9]*:../../textproc/p5-Pod-Coverage
DEPENDS+=	p5-Pod-Eventual-[0-9]*:../../textproc/p5-Pod-Eventual

PERL5_PACKLIST=		auto/Pod/Coverage/TrustPod/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
