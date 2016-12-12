// For a connection via I2C using Wire
//#include "SSD1306.h" // alias for `#include "SSD1306Wire.h"``
// For a connection via I2C using brzo_i2c (must be installed) include
//#include <brzo_i2c.h> // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Brzo.h"

// Include custom images
#include "img/wifi.h"
#include "img/banana.h"

// Initialize the OLED display using brzo_i2c
// D3 -> SDA
// D5 -> SCL
SSD1306Brzo display(0x3c, D3, D5);

#define FRAME_DURATION 100
int frame = 0;
int frameLength = 8;
long timeSinceLastFrame = 0;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();


  // Initialising the UI will init the display too.
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
}

void drawImageDemo(int index) {
    //in ubuntu use: mogrify -resize 60x60 +dither -format xbm wifi.png
    display.drawXbm(34, 14, banana_width, banana_height, banana_bits[index]);
}

void loop() {
  // clear the display
  display.clear();
  drawImageDemo(frame);
  display.setTextAlignment(TEXT_ALIGN_RIGHT);
  display.drawString(10, 10, String(frame));
  // write the buffer to the display
  display.display();

  if (millis() - timeSinceLastFrame > FRAME_DURATION) {
    frame = (frame + 1)  % frameLength;
    timeSinceLastFrame = millis();
  }
  delay(10);
}
