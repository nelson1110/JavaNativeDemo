LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := NativeMethods

LOCAL_SRC_FILES := com_nelson_javanativedemo_Brage.cpp

include $(BUILD_SHARED_LIBRARY)