/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection */

#ifndef _Included_com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection
#define _Included_com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT jint JNICALL
Java_com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection_initialize(JNIEnv *env, jobject instance, jint fd);

/*
 * Class:     com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection
 * Method:    deinitialize
 * Signature: ()V
 */
JNIEXPORT jint JNICALL
Java_com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection_deinitialize(JNIEnv *env, jobject instance);

/*
 * Class:     com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection
 * Method:    isochronousTransfer
 * Signature: (Landroid/hardware/usb/UsbDeviceConnection;Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT jint JNICALL
Java_com_jwoolston_android_uvc_libusb_UsbDeviceIsoConnection_isochronousTransfer(JNIEnv *env, jobject instance,
                                                                                 jobject connection, jobject buffer);

#ifdef __cplusplus
}
#endif
#endif
