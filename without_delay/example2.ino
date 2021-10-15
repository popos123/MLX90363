//#define Software // software if definde or hardware SPI if not

#include <Arduino.h>
#include "MLX90363.h"

Magnet MLX90363;

uint32_t last_cnt = 0;

void setup() {
  MLX90363.begin(16, 14, 15, 10); // MOSI, MISO, SCK, CS
  //MLX90363->begin(PA7, PA6, PA5, PA4); // for Blue Pill
  Serial.begin(500000); // use 500k and 1M for maximize loop speed
}

void loop() {
  MLX90363.ReadData(); // read data
  // print data
  uint32_t current_cnt = millis();
  if (current_cnt - last_cnt >= 100) { // print every 100ms
    last_cnt = current_cnt;
    Serial.println("Angle_(LSB): " + String(MLX90363.Angle_LSB));
  }
}
