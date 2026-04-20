ESP32-PS4-Controller-Configuration
A simple and direct guide to pairing a PS4 DualShock controller with an ESP32 via Bluetooth. This method focuses on syncing the Master MAC Address, which is the most reliable way to establish a stable connection for robotics projects.

Overview :
To connect a PS4 controller to an ESP32, you must update the controller's internal "Master MAC Address" to match your ESP32's Bluetooth address. This repository contains the necessary code and steps to achieve this.

How to use :
Get MAC Address: Upload the Get_MAC_Address.ino to your ESP32 and copy the address from the Serial Monitor.

Configure Controller: Use SixaxisPairTool on your PC to write the ESP32 MAC address into your PS4 controller.

Run Test: Upload the PS4_Control_Example.ino and press the PS button to pair.

Requirements :
Hardware: ESP32 Board & PS4 Controller.

Software:
SixaxisPairTool: (https://sixaxispairtool.en.lo4d.com/download/mirror-ls1)
& Arduino IDE.

Library:
PS4 Library: https://github.com/pablomarquez76/PS4_Controller_Host
ESP-32 library: https://github.com/espressif/arduino-esp32

Context
This setup was used to control the Ball Collector project, which won 2nd Place in the IEEE.MNU University Competition.
