package com.nelson.javanativedemo;

import android.content.Context;
import android.widget.Toast;

public class Brage {


    static {
        System.loadLibrary("NativeMethods");
    }

    static native int doInNative();
    static native void callbackJava(Context context);

    public void showToast(Context context, String msg){
        Toast.makeText(context, msg,Toast.LENGTH_SHORT).show();
    }

}
