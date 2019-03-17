#include <jni.h>
#include <string>
//==================================================================================================
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "func_types.h"
//==================================================================================================
#include "func.h"
//#include "func_terminate.h"
#include "func_initialize.h"
//==================================================================================================
extern "C" JNIEXPORT jstring JNICALL
Java_com_josh_as_110_1android_1import_1matlab_1source_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */)
{
    func_initialize();
    //func_terminate();


    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
//==================================================================================================
