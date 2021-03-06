$NetBSD: patch-Lib_distutils_command_install.py,v 1.2 2018/06/17 19:21:22 adam Exp $

Conditionally install Python eggs.

--- Lib/distutils/command/install.py.orig	2016-12-23 02:21:19.000000000 +0000
+++ Lib/distutils/command/install.py
@@ -652,5 +652,6 @@ class install(Command):
                     ('install_headers', has_headers),
                     ('install_scripts', has_scripts),
                     ('install_data',    has_data),
-                    ('install_egg_info', lambda self:True),
                    ]
+    if not os.environ.get('PKGSRC_PYTHON_NO_EGG'):
+        sub_commands += [('install_egg_info', lambda self:True),]
