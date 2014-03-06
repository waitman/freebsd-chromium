--- ./chrome/browser/plugins/plugins_resource_service.cc.orig	2014-02-20 21:27:40.000000000 +0100
+++ ./chrome/browser/plugins/plugins_resource_service.cc	2014-02-24 17:23:44.000000000 +0100
@@ -33,7 +33,7 @@
   std::string filename;
 #if defined(OS_WIN)
   filename = "plugins_win.json";
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   filename = "plugins_linux.json";
 #elif defined(OS_MACOSX)
   filename = "plugins_mac.json";
