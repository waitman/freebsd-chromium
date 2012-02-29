--- third_party/WebKit/Source/WebCore/config.h.orig	2012-02-15 03:05:44.000000000 +0100
+++ third_party/WebKit/Source/WebCore/config.h	2012-02-27 23:06:55.000000000 +0100
@@ -164,6 +164,11 @@
 #define WTF_USE_NEW_THEME 1
 #endif // PLATFORM(MAC)
 
+#ifdef NO_LOG2
+#define log2(x) (log(x) / M_LN2)
+#define log2f(x) (logf(x) / (float)M_LN2)
+#endif
+
 #if OS(UNIX) || OS(WINDOWS)
 #define WTF_USE_OS_RANDOMNESS 1
 #endif
