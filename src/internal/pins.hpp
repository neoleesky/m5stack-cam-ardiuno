#ifndef ESP32CAM_PINS_HPP
#define ESP32CAM_PINS_HPP

namespace esp32cam {

/** \brief Camera pins definition.
 */
struct Pins
{
  int D0;
  int D1;
  int D2;
  int D3;
  int D4;
  int D5;
  int D6;
  int D7;
  int XCLK;
  int PCLK;
  int VSYNC;
  int HREF;
  int SDA;
  int SCL;
  int RESET;
};

namespace pins {

constexpr Pins M5camera{
  D0: 32, D1: 35, D2: 34, D3: 5, D4: 39, D5: 18, D6: 36, D7: 19,
  XCLK: 27, PCLK: 21, VSYNC: 25, HREF: 26, SDA: 22, SCL: 23, RESET: 15, 
};

} // namespace pins
} // namespace esp32cam

#endif // ESP32CAM_PINS_HPP
