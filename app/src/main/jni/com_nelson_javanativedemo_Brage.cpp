//
// Created by nelso on 2019/5/28.
//
#include<com_nelson_javanativedemo_Brage.h>

JNIEXPORT jint JNICALL Java_com_nelson_javanativedemo_Brage_doInNative(JNIEnv *evn, jobject obj){
    return 100;
 }

JNIEXPORT void JNICALL Java_com_nelson_javanativedemo_Brage_callbackJava(JNIEnv *evn, jobject obj){
    jclass jclass1 = evn -> FindClass("com/nelson/javanativedemo/Brage");
    jmethodID jmethodID1 = evn ->GetMethodID(jclass1,"showToast", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject obj1 = evn -> AllocObject(jclass1);
    evn -> CallObjectMethod(obj1,jmethodID1,obj,"来自native的文字");
}

