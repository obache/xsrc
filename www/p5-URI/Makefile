# $NetBSD: Makefile,v 1.75 2021/05/24 19:55:53 wiz Exp $

DISTNAME=	URI-5.09
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	www net perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=URI/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://metacpan.org/release/URI
COMMENT=	Perl5 Uniform Resource Identifiers class (URI, RFC 2396)
LICENSE=	${PERL5_LICENSE}

TEST_DEPENDS+=	p5-Test-Needs-[0-9]*:../../devel/p5-Test-Needs

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/URI/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
