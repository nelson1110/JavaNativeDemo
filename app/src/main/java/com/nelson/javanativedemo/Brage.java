package com.nelson.javanativedemo;

public class Brage {

    static {
        System.loadLibrary("NativeMethods");
    }

    native int doInNative();

}
