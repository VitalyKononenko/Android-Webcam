package com.jwoolston.android.uvc;

import android.content.Context;
import android.hardware.usb.UsbDevice;
import android.hardware.usb.UsbManager;
import android.net.Uri;
import android.support.annotation.NonNull;

/**
 * @author Jared Woolston (Jared.Woolston@gmail.com)
 */
class WebcamImpl implements Webcam {

    private final Context context;
    private final UsbDevice usbDevice;
    private final WebcamConnection webcamConnection;

    WebcamImpl(Context context, UsbDevice usbDevice) throws UnknownDeviceException {
        this.context = context;
        this.usbDevice = usbDevice;

        final UsbManager usbManager = (UsbManager) context.getSystemService(Context.USB_SERVICE);
        webcamConnection = new WebcamConnection(context.getApplicationContext(), usbManager, usbDevice);
    }

    @NonNull
    @Override
    public UsbDevice getUsbDevice() {
        return usbDevice;
    }

    @Override
    public boolean isConnected() {
        return webcamConnection.isConnected();
    }

    @Override
    public
    @NonNull
    Uri beginStreaming(@NonNull Context context) throws StreamCreationException {
        return webcamConnection.beginConnectionStreaming(context);
    }

    public void terminateStreaming(@NonNull Context context) {
        webcamConnection.terminateConnection(context);
    }
}
