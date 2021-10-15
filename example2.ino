//#define Software // software if definde or hardware SPI if not

#include <Arduino.h>
#include "MLX90363.h"

Magnet MLX90363;

void setup() {
  MLX90363.begin(16, 14, 15, 10); // MOSI, MISO, SCK, CS
  //MLX90363->begin(PA7, PA6, PA5, PA4); // for Blue Pill
  Serial.begin(9600);
}

void loop() {
  MLX90363.ReadData();
  Serial.println("Angle_(Lsb): " + String(MLX90363.AngleLSB()));
  delay(1000);
}