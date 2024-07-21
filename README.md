# ESP8266-Blynk-App-Project

This project demonstrates how to use an ESP8266 with Blynk to control a digital output.

## Hardware Required
- ESP8266 module
- LED or any digital output device connected to GPIO D4

## Getting Started

### Prerequisites
- Arduino IDE
- ESP8266 Board Package installed in Arduino IDE
- Blynk Library installed in Arduino IDE

### Installation
1. Clone this repository:
   ```sh
   git clone https://github.com/your-username/ESP8266-Blynk-Project.git
   cd ESP8266-Blynk-Project
2. Open ESP8266_Blynk.ino in Arduino IDE.
3. Update the following lines with your Blynk authentication token, Wi-Fi SSID, and password:
#define BLYNK_AUTH_TOKEN "VH6p0vG2zupo5r6puK-0nsxkEOthGCZl" //update here
const char ssid[] = "your wifi ssid here";
const char pass[] = "password here";
4. Upload the code to your ESP8266 module.

