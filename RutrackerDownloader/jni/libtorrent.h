#include <jni.h>
#include <android/log.h>

#ifndef __Included_Java_com_softwarrior_libtorrent_LibTorrent__
#define __Included_Java_com_softwarrior_libtorrent_LibTorrent__

#ifdef __cplusplus
extern "C" {
#endif

#define LOG_TAG "Softwarrior"
#define LOG_INFO(...) {__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__);}
#define LOG_ERR(...) {__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__);}

JNIEXPORT jboolean JNICALL Java_com_softwarrior_libtorrent_LibTorrent_StartDownload
	(JNIEnv *, jobject, jstring, jstring, jint, jint, jstring, jint, jstring, jstring);

JNIEXPORT jint JNICALL Java_com_softwarrior_libtorrent_LibTorrent_GetProgress
  (JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL Java_com_softwarrior_libtorrent_LibTorrent_StopDownload
	(JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL Java_com_softwarrior_libtorrent_LibTorrent_PauseDownload
	(JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL Java_com_softwarrior_libtorrent_LibTorrent_ResumeDownload
	(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif

#endif //__Included_Java_com_softwarrior_libtorrent_LibTorrent__
