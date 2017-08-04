#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNIEXPORT void JNICALL
Java_cn_epsit_junimage64_DecodeUtil_convert(JNIEnv *env, jclass type, jstring wltPath_,
jstring bmpPath_) {
const char *wltPath = env->GetStringUTFChars(wltPath_, 0);
const char *bmpPath = env->GetStringUTFChars(bmpPath_, 0);

// TODO

env->ReleaseStringUTFChars(wltPath_, wltPath);
env->ReleaseStringUTFChars(bmpPath_, bmpPath);
}