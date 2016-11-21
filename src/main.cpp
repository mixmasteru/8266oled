// For a connection via I2C using Wire
//#include "SSD1306.h" // alias for `#include "SSD1306Wire.h"``
// For a connection via I2C using brzo_i2c (must be installed) include
//#include <brzo_i2c.h> // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Brzo.h"

// Include custom images
#include "wifi.h"
#include "img/bat0.h"
#include "img/bat1.h"
#include "img/bat2.h"
#include "img/bat3.h"
#include "img/bat4.h"

// Initialize the OLED display using brzo_i2c
// D3 -> SDA
// D5 -> SCL
SSD1306Brzo display(0x3c, D3, D5);

int demoMode = 0;
int counter = 1;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();


  // Initialising the UI will init the display too.
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
}

void drawImageDemo() {
    //in ubuntu use: mogrify -resize 60x60 +dither -format xbm wifi.png
    display.drawXbm(34, 14, bat0_width, bat0_height, bat0_bits);
}

void loop() {
  // clear the display
  display.clear();
  drawImageDemo();
  display.setTextAlignment(TEXT_ALIGN_RIGHT);
  display.drawString(10, 128, String(millis()));
  // write the buffer to the display
  display.display();
  delay(10);
}
