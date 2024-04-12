
#ifndef _NEOPIXEL_H_INCLUDED
#define _NEOPIXEL_H_INCLUDED

#include <Arduino.h>


extern __xdata uint16_t PIN_NEO;

#define NEO_PIN  PIN_NEO
#define NEO_init()  PIN_low(PIN_NEO);PIN_output(PIN_NEO)  // init NeoPixels
#define NEO_latch() DLY_us(281)                           // latch colors

void NEO_sendByte(uint8_t data);                          // send a single byte to the pixels
void NEO_writeColor(uint8_t r, uint8_t g, uint8_t b);     // write color to a single pixel
void NEO_writeHue(uint8_t hue, uint8_t bright);           // hue (0..191), brightness (0..2)


#endif
