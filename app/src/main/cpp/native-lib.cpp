#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_swamphacks_jssk_takenotes_Main_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
