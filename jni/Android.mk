LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)   

LOCAL_C_INCLUDES += $(LOCAL_PATH)
LOCAL_LDLIBS     += -llog -ldl
#LOCAL_CPPFLAGS += -fexceptions

LOCAL_MODULE    := test
LOCAL_SRC_FILES := test.cpp
include $(BUILD_SHARED_LIBRARY)

