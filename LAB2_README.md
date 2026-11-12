# Cybersecurity: CSN150

## LAB 2 --- ESP32-CAM Camera Web Server

### Purpose

The purpose of this lab is to configure the ESP32-CAM, upload the
CameraWebServer example, connect the board to a 2.4 GHz Wi-Fi network,
and view the live camera stream in a web browser.

### Equipment and Software

-   ESP32-CAM AI Thinker board
-   OV2640 camera module
-   USB-to-Serial programmer or compatible USB adapter
-   USB cable
-   Computer
-   Arduino IDE
-   Wi-Fi network (2.4 GHz)

### Reference Links

-   [ESP32-CAM Getting Started Guide --- Last Minute
    Engineers](https://lastminuteengineers.com/getting-started-with-esp32-cam/)
-   [Instructor's GitHub Documentation
    Template](https://github.com/ereedsanchez/CSN150-Doc-Template)

### Setup and Configuration

1.  Open Arduino IDE.
2.  Install the ESP32 board support package if it is not already
    installed.
3.  Open the `CameraWebServer` example from the ESP32 examples.
4.  In the camera configuration file (commonly `board_config.h` in newer
    examples), enable `CAMERA_MODEL_AI_THINKER` and make sure other
    camera models are disabled.
5.  Enter the 2.4 GHz Wi-Fi network name and password in the example's
    Wi-Fi settings.
6.  Connect the ESP32-CAM to the computer using a compatible
    USB-to-Serial programmer.
7.  Select the AI Thinker ESP32-CAM board and the correct serial port in
    Arduino IDE.
8.  Upload the sketch. If the board remains in the connecting state, use
    the board's BOOT/IO0 upload procedure as required by the programmer
    and board.
9.  After upload completes, reset the board if required.
10. Open Serial Monitor at 115200 baud and find the IP address printed
    by the ESP32-CAM.
11. On a device connected to the same Wi-Fi network, open that IP
    address in a web browser.
12. Open the camera stream and verify that a live image is displayed.

### Configuration Record

Complete this section with the settings actually used in your lab.

  Setting                    Value used
  -------------------------- ------------------------------------------
  Board                      AI Thinker ESP32-CAM
  Arduino IDE serial port    \[Enter your COM port\]
  Serial Monitor baud rate   115200
  Camera model               CAMERA_MODEL_AI_THINKER
  Wi-Fi band                 2.4 GHz
  Camera IP address          \[Enter the IP shown in Serial Monitor\]

**Privacy note:** Do not publish your Wi-Fi password, private
credentials, or other sensitive information in this repository.

### Problems and Solutions

Record only problems that actually occurred during your setup.

  -----------------------------------------------------------------------
  Problem encountered                 Solution tried / result
  ----------------------------------- -----------------------------------
  \[Enter an actual problem, or write \[Describe what resolved it, or
  "No major problems encountered."\]  write "Not applicable."\]

  -----------------------------------------------------------------------

### Evidence

Add your own lab evidence to this repository if requested by the
instructor.

-   `03_Camera_LiveView.png` --- screenshot of the CameraWebServer page
    showing the live camera image.

### Results

\[After completing the lab, describe whether the ESP32-CAM connected to
Wi-Fi, whether an IP address appeared in Serial Monitor, and whether the
live camera stream worked.\]

### Final Report

This lab demonstrates how to configure an ESP32-CAM as a Wi-Fi camera
web server. The setup uses the CameraWebServer example in Arduino IDE.
Successful operation is verified when the board connects to the 2.4 GHz
Wi-Fi network, prints an IP address in Serial Monitor, and displays a
live camera image in a browser on the same network.

------------------------------------------------------------------------

**Student:** \[Enter your name\]\
**Course:** CSN150\
**Lab:** 2 --- ESP32 Camera\
**Repository:** \[Paste the URL of your own GitHub fork\]
