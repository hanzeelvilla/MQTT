# MQTT

This library is a wrapper created to manage the connection between `Arduino` devices and an `MQTT` broker over `WiFi`. It simplifies the setup, handles reconnections, and manages incoming messages.
It is based on code provided by my [IoT teacher](https://wokwi.com/projects/355014844404092929)

## Compatible Boards
These boards have built-in WiFi and work out of the box with this library:
- `ESP32`
- `ESP8266` (e.g., NodeMCU, Wemos D1 Mini)

### Compatible with Modifications
These boards can work with the library, but require external WiFi modules and adjustments to the code:
- `Arduino Uno`
- `Arduino Mega`
- `Arduino Nano`

To use them, you’ll need a WiFi module like `ESP-01` or a `WiFi Shield`, and you must adapt the code to use libraries like `WiFiEsp` or `SoftwareSerial` instead of `WiFi.h`.

## Libraries
- [PubSubClient](https://docs.arduino.cc/libraries/pubsubclient/)
- [WiFi](https://docs.arduino.cc/libraries/wifi/)

## Installation & configuration
1. Download the repository as a ZIP file or clone it to your Arduino libraries folder
```bash
git clone https://github.com/hanzeelvilla/MQTT.git
```
2. Place the `MQTT` folder into your **Arduino libraries directory** (typically Documents/Arduino/libraries on most systems).
3. Restart the Arduino IDE if it was open during installation.
4. Rename the `config_template.h` to `config.h`
5. Open `config.h` and enter your WiFi and MQTT credentials.
> [!NOTE]
> The default MQTT port is 1883