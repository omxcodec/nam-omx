
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

include $(LOCAL_PATH)/../../../../Config.mk

LOCAL_MODULE_TAGS := optional

ifeq ($(ARCH_ARM_HAVE_NEON),true)
LOCAL_SRC_FILES := \
	csc_yuv420_nv12t_y_neon.s \
	csc_yuv420_nv12t_uv_neon.s \
	csc_nv12t_yuv420_y_neon.s \
	csc_nv12t_yuv420_uv_neon.s \
	csc_interleave_memcpy.s \
	csc_deinterleave_memcpy.s

else
LOCAL_SRC_FILES := \
	color_space_convertor.c

endif

LOCAL_MODULE := libnamcsc

LOCAL_CFLAGS :=

LOCAL_ARM_MODE := arm

LOCAL_STATIC_LIBRARIES :=

LOCAL_SHARED_LIBRARIES := liblog

LOCAL_C_INCLUDES := \
	$(NAM_CODECS)/video/dm3730/include

include $(BUILD_STATIC_LIBRARY)

