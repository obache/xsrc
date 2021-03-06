$NetBSD: patch-src_libspf2_spf__dns__resolv.c,v 1.2 2018/12/17 19:24:44 schmonz Exp $

* from upstream fix

OpenBSD's libc resolver provides res_init() but not res_close().

--- src/libspf2/spf_dns_resolv.c.orig	2012-01-28 08:24:47.000000000 +0000
+++ src/libspf2/spf_dns_resolv.c
@@ -179,14 +179,15 @@ SPF_dns_resolv_debug(SPF_dns_server_t *s
 				SPF_debugf("MX: %d %s", prio, name_buf);
 			break;
 
+		case ns_t_spf:
 		case ns_t_txt:
 			if (rdlen < 1) {
-				SPF_debugf("TXT: rdlen too short: %lu", (unsigned long)rdlen);
+				SPF_debugf(ns_rr_type(rr) == ns_t_txt ? "TXT" : "SPF" ": rdlen too short: %lu", (unsigned long)rdlen);
 				break;
 			}
 			/* XXX I think this is wrong/unsafe. Shevek. */
 			/* XXX doesn't parse the different TXT "sections" */
-			SPF_debugf("TXT: (%lu) \"%.*s\"",
+			SPF_debugf(ns_rr_type(rr) == ns_t_txt ? "TXT" : "SPF" ": (%lu) \"%.*s\"",
 					(unsigned long)rdlen, (int)rdlen - 1, rdata + 1);
 			break;
 
@@ -510,6 +511,7 @@ SPF_dns_resolv_lookup(SPF_dns_server_t *
 					cnt++;
 					break;
 
+				case ns_t_spf:
 				case ns_t_txt:
 					if (rdlen > 1) {
 						u_char *src, *dst;
@@ -606,7 +606,7 @@ SPF_dns_resolv_free(SPF_dns_server_t *sp
 {
 	SPF_ASSERT_NOTNULL(spf_dns_server);
 
-#if ! HAVE_DECL_RES_NINIT
+#if HAVE_DECL_RES_CLOSE
 	res_close();
 #endif
 
