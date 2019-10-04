# esp32cam: OV2640 camera on ESP32-CAM
For M5Camera, please change pins definition in /src/internal/pins.hpp by 
<img src="https://m5stack.oss-cn-shenzhen.aliyuncs.com/image/m5-docs_table/camera_comparison/CameraPinComparison_en.png">


This library wraps [esp32-camera library](https://github.com/espressif/esp32-camera) in object oriented API.
It has been tested with M5Camera [ESP32-CAM](https://github.com/m5stack/m5stack-cam-psram) board and OV2640 camera.

In ESP32 Arduino, the board type should be set to "ESP32 WROVER" to enable 4MB external PSRAM.
Otherwise, internal RAM is insufficient to support high resolution.
