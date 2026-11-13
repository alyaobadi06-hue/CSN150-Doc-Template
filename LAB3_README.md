# Cybersecurity: CSN150

# LAB 3 — ESP32-CAM Web Server

## Purpose

The purpose of this lab is to configure the ESP32-CAM as a simple web server using the HelloServer example in Arduino IDE. The server connects to a Wi-Fi network and displays a personalized message in a web browser using its local IP address.

## Learning Objectives

- Understand how to create a web server using ESP32.
- Learn how to connect ESP32 to a Wi-Fi network.
- Modify an existing Arduino example.
- Understand IP addresses and local networks.
- Access a web server through a browser.

## Equipment and Software

- ESP32-CAM AI Thinker board
- USB cable
- Computer
- Arduino IDE
- ESP32 Board Support Package
- Wi-Fi network (2.4 GHz)
- Web browser

## Reference Links

- [Arduino ESP32 Documentation](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
- [Instructor's GitHub Documentation Template](https://github.com/ereedsanchez/CSN150-Doc-Template)

## Setup and Configuration

1. Connect the ESP32-CAM to the computer using a USB cable.
2. Open Arduino IDE.
3. Select AI Thinker ESP32-CAM under Tools → Board.
4. Select the correct COM port.
5. Open File → Examples → WebServer → HelloServer.
6. Enter the Wi-Fi network name and password in the sketch.
7. Make sure the network uses the 2.4 GHz band.
8. Find the `handleRoot()` function.
9. Modify the welcome message to:

   `Hello Alya from ESP32`

10. Verify the code using the Verify button.
11. Upload the modified sketch to the ESP32-CAM.
12. Open Serial Monitor and set the baud rate to 115200.
13. Press RESET if necessary.
14. Wait for the Wi-Fi connection message and IP address.
15. Open a web browser on a device connected to the same Wi-Fi network.
16. Enter the ESP32 IP address in the browser.
17. Verify that the personalized message appears successfully.

## Configuration Record

| Setting | Value Used |
|---|---|
| Board | AI Thinker ESP32-CAM |
| Serial Port | [Enter actual COM port] |
| Serial Monitor Baud Rate | 115200 |
| Wi-Fi Band | 2.4 GHz |
| Server Port | 80 |
| Personalized Message | Hello Alya from ESP32 |
| Server IP Address | [Enter actual IP address] |

**Privacy Note:** Do not publish your Wi-Fi password or private credentials in this repository.

## Problems and Solutions

Record any problems that actually occurred during the lab.

| Problem Encountered | Solution / Result |
|---|---|
| [Enter actual problem or Not applicable] | [Describe the solution or result] |

## Evidence

The following screenshots and photo document the successful completion of the lab.

| Filename | Required Evidence |
|---|---|
| `04_Server_Browser.png` | Browser showing the personalized message and IP address in the address bar. |
| `05_Server_SerialMonitor.png` | Serial Monitor showing Wi-Fi connection status and the assigned IP address. |
| `06_Server_BoardConnected.jpg` | ESP32-CAM connected to the computer using a USB cable. |

## Results

[Complete this section after testing.]

The ESP32-CAM was configured as a web server using the HelloServer example. The board connected to the Wi-Fi network and received an IP address. The personalized message appeared successfully in the web browser.

## Lab Questions and Answers

**1. What is the IP address assigned to your ESP32 server?**

The IP address assigned to my ESP32 server was [Enter your actual IP address].

**2. What Wi-Fi network did you connect your ESP32 to?**

I connected my ESP32 to [Enter your actual Wi-Fi network name].

**3. What port number does the web server use?**

The web server uses port 80, which is the standard port for HTTP communication.

**4. Why must your computer and ESP32 be on the same Wi-Fi network?**

Both devices need to be on the same local network so the computer can communicate with the ESP32 using its local IP address.

**5. What does HTTP status code 200 mean?**

HTTP status code 200 means OK. It indicates that the request was successful and the server returned the requested response.

**6. What is the difference between 2.4 GHz and 5 GHz Wi-Fi, and why does it matter for ESP32?**

2.4 GHz Wi-Fi generally provides longer range and better coverage, while 5 GHz Wi-Fi usually offers higher speeds over shorter distances. The ESP32-CAM supports 2.4 GHz Wi-Fi but does not support 5 GHz networks.

**7. Can someone on a different Wi-Fi network access your ESP32 server? Why or why not?**

Generally, no. The ESP32 server uses a private local IP address, so devices on a different network cannot directly access it without additional network configuration, such as port forwarding or a VPN.

**8. What happens if you change the Wi-Fi password after your ESP32 is already connected?**

The ESP32 will lose its connection when it needs to reconnect using the old password. I must update the password in the Arduino sketch and upload the modified code to reconnect successfully.

## Final Report

This lab demonstrates how to create a basic web server using the ESP32-CAM. The HelloServer example was modified to display a personalized message. The ESP32 connects to a 2.4 GHz Wi-Fi network and provides an IP address that allows other devices on the same local network to access the webpage.

This exercise helped demonstrate basic web server programming, Wi-Fi communication, HTTP responses, and local network connectivity.

---

**Student:** Alya Obadi  
**Course:** CSN150  
**Lab:** 3 — ESP32 Server  
**Repository:** https://github.com/alyaobadi06-hue/CSN150-Doc-Template
