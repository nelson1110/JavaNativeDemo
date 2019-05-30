//
// Created by nelso on 2019/5/28.
//
#include<com_nelson_javanativedemo_Brage.h>



JNIEXPORT jstring JNICALL Java_com_nelson_javanativedemo_Brage_doInNative(JNIEnv *env, jobject obj){
    return env -> NewStringUTF("Java调用Native返回String");
 }

JNIEXPORT void JNICALL Java_com_nelson_javanativedemo_Brage_callbackJava(JNIEnv *env, jclass type, jobject context){
    jclass jclass1 = env -> FindClass("com/nelson/javanativedemo/Brage");
    jmethodID jmethodID1 = env ->GetMethodID(jclass1,"showToast", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject obj1 = env -> AllocObject(jclass1);
    env -> CallVoidMethod(obj1,jmethodID1,context,env -> NewStringUTF("Java调用Native后native反调用Java"));
}

JNIEXPORT void JNICALL TrendsMethod(JNIEnv *env, jclass type, jobject context){
    jclass jclass1 = env -> FindClass("com/nelson/javanativedemo/Brage");
    jmethodID jmethodID1 = env ->GetMethodID(jclass1,"showToast", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject obj1 = env -> AllocObject(jclass1);
    env -> CallVoidMethod(obj1,jmethodID1,context,env -> NewStringUTF("动态注册native函数"));
}