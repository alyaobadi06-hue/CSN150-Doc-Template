# Cybersecurity: CSN150

**Project: ESP32-CAM Wi-Fi Access Point and Camera Web Server**

Student: Alya Obadi 
Instructor: Edwin Reed-Sanchez
Date: Nov 15, 2026

## Purpose

The purpose of this project was to configure an ESP32-CAM as a standalone Wi-Fi access point and access its camera web server from a connected device. The project demonstrates how an ESP32-CAM can create its own wireless network and provide a local web page for viewing the camera.

## Equipment

> Keep only the equipment you actually used and replace the bracketed details.

- ESP32-CAM board: [Exact model printed on the board]
- USB programmer: [ESP32-CAM-MB / FTDI adapter / other]
- USB cable: [USB type]
- Jumper wires: [Yes / No; describe if used]
- Computer: [Computer type and operating system]
- Phone or second computer used for testing: [Device]
- Power source: [Describe what you used]

## Links to documentation and tools

##### Video 1:
[Paste the instructor's tutorial/video link here, if one was assigned.]

##### Other Links:

- [Instructor's CSN150 documentation template](https://github.com/ereedsanchez/CSN150-Doc-Template)
- [ESP32-CAM Access Point Web Server tutorial](https://randomnerdtutorials.com/esp32-cam-access-point-ap-web-server/)
- [Arduino IDE download](https://www.arduino.cc/en/software)
- [Official Espressif Arduino-ESP32 installation guide](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html)

##### AI GPTs used

ChatGPT was used to help organize the project requirements, understand the ESP32-CAM access point setup, and prepare the documentation. The hardware setup, upload, and testing results reported here must be based on my own work and observations.

## Steps I followed

> Edit these steps so they accurately describe what you personally did. Remove any step you did not complete.

1. I created a fork of the instructor's CSN150 documentation template on my GitHub account.
2. I installed Arduino IDE on my computer.
3. I installed ESP32 board support in Arduino IDE by following the official Espressif instructions.
4. I identified my ESP32-CAM board model and connected it using [the programmer or USB-to-serial adapter actually used].
5. I selected the appropriate ESP32 board and serial port in Arduino IDE.
6. I opened the CameraWebServer example and selected the camera model that matched my board: [camera model].
7. I configured the access point network name (SSID) and a test password in the sketch. I did not use a personal or account password.
8. I configured the ESP32-CAM to create its own Wi-Fi access point using `WiFi.softAP()`.
9. I uploaded the sketch to the ESP32-CAM and restarted the board.
10. I checked the startup messages in the Arduino IDE Serial Monitor at [baud rate] baud.
11. I connected my [phone/computer] to the ESP32-CAM Wi-Fi network.
12. I opened `http://192.168.4.1` in the connected device's browser.
13. [Describe what happened when you opened the camera page and tested the live stream.]

## Problems and Solutions

> Record only problems you actually experienced. Do not copy the example camera error from the instructor's template unless that exact error happened to you.

**Problem 1:** [Describe the actual error or symptom. If you had no problems, write: "No significant problems were encountered during the setup."]

**Cause:** [Explain the cause you identified, or write "Not applicable" if there was no problem.]

**Solution:** [Explain the fix that worked, or write "Not applicable" if there was no problem.]

**Additional problems (if any):**
- Problem: [Actual problem]
- Solution: [Actual solution]

## Final Report

> Complete the bracketed parts after testing the physical board.

The project [was successful / was partially successful / was not successful]. The ESP32-CAM [created / did not create] its own Wi-Fi access point. I tested the connection using [phone or computer]. The device [connected / did not connect] to the ESP32-CAM network. The camera web page at `http://192.168.4.1` [opened / did not open], and the live camera stream [worked / did not work].

This project helped me understand how an ESP32-CAM can operate as a standalone wireless access point and host a local camera web server. I also learned about configuring an ESP32 board, uploading a sketch, monitoring serial output, and testing a device over a direct Wi-Fi connection.

## Security and Privacy Notes

- I used a test Wi-Fi password rather than a personal password.
- I did not publish the Wi-Fi password in this repository.
- I tested only my own board and devices or equipment I was authorized to use.
- I checked the board and programmer pinouts before connecting hardware.

