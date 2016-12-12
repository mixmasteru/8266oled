# 8266oled

PlatformIO project for esp8266/nodemcu and OLED display

### Hardware
* OLED Display SSD1306 I2C 128x64
* esp8266

### Dancing Banana
![Dancing Banana](dancing_banana.gif)

### Images
convert images to HEX arrays
in ubuntu you can use:
```
mogrify -resize 60x60 +dither -format xbm wifi.png
```

### install libs:
```
platformio lib install 335
platformio lib install 562
```
### wireing
![oled](8266OLED_I2C.png)
