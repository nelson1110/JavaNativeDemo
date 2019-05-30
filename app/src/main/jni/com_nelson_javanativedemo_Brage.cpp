//
// Created by nelso on 2019/5/28.
//
#include<com_nelson_javanativedemo_Brage.h>

JNIEXPORT jint JNICALL Java_com_nelson_javanativedemo_Brage_doInNative(JNIEnv *evn, jobject obj){
    return 100;
 }

JNIEXPORT void JNICALL Java_com_nelson_javanativedemo_Brage_callbackJava(JNIEnv *env, jclass type, jobject context){
    jclass jclass1 = env -> FindClass("com/nelson/javanativedemo/Brage");
    jmethodID jmethodID1 = env ->GetMethodID(jclass1,"showToast", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject obj1 = env -> AllocObject(jclass1);
    env -> CallVoidMethod(obj1,jmethodID1,context,env -> NewStringUTF("来自native的文字"));
}
