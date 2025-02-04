#ifndef WIFI_ICON_H
#define WIFI_ICON_H

#include <Arduino.h>

// Ikona Wi-Fi (16x14 pikseli)
const unsigned char wifi_icon_bmp [] PROGMEM = {
	0x0f, 0xc0, 0x3f, 0xf0, 0x70, 0x38, 0xc7, 0x8c,
    0x3c, 0xf0, 0x33, 0x30, 0x07, 0x80, 0x0c, 0xc0, 
	0x00, 0x00, 0x03, 0x00, 0x03, 0x00
};

#define WIFI_ICON_WIDTH 14
#define WIFI_ICON_HEIGHT 11

#endif // WIFI_ICON_H
