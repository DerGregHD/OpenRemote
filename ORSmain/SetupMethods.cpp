#include "SetupMethods.h"

void SetupMethods::setupAnalogPins() {
  #ifdef ch0_active
    pinMode(pin_ch0, INPUT);
  #endif

  #ifdef ch1_active
    pinMode(pin_ch1, INPUT);
  #endif

  #ifdef ch2_active
    pinMode(pin_ch2, INPUT);
  #endif

  #ifdef ch3_active
    pinMode(pin_ch3, INPUT);
  #endif

  #ifdef ch4_active
    pinMode(pin_ch4, INPUT);
  #endif

  #ifdef ch5_active
    pinMode(pin_ch5, INPUT);
  #endif

  #ifdef ch6_active
    pinMode(pin_ch6, INPUT);
  #endif

  #ifdef ch7_active
    pinMode(pin_ch7, INPUT);
  #endif

  #ifdef ch8_active
    pinMode(pin_ch8, INPUT);
  #endif

  #ifdef ch9_active
    pinMode(pin_ch09, INPUT);
  #endif

  #ifdef ch10_active
    pinMode(pin_ch10, INPUT);
  #endif

  #ifdef ch11_active
    pinMode(pin_ch11, INPUT);
  #endif

  #ifdef ch12_active
    pinMode(pin_ch12, INPUT);
  #endif

  #ifdef ch13_active
    pinMode(pin_ch13, INPUT);
  #endif
}



void SetupMethods::setupDigitalPins() {
  #ifdef ch14_active
    pinMode(pin_ch14, INPUT_PULLUP);
  #endif
  
  #ifdef ch15_active
    pinMode(pin_ch15, INPUT);
  #endif
  
  #ifdef ch16_active
    pinMode(pin_ch16, INPUT);
  #endif
  
  #ifdef ch17_active
    pinMode(pin_ch17, INPUT);
  #endif
  
  #ifdef ch18_active
    pinMode(pin_ch18, INPUT);
  #endif
  
  #ifdef ch19_active
    pinMode(pin_ch19, INPUT);
  #endif
  
  #ifdef ch20_active
    pinMode(pin_ch20, INPUT);
  #endif
  
  #ifdef ch21_active
    pinMode(pin_ch21, INPUT);
  #endif
  
  #ifdef ch22_active
    pinMode(pin_ch22, INPUT);
  #endif
  
  #ifdef ch23_active
    pinMode(pin_ch23, INPUT);
  #endif
  
  #ifdef ch24_active
    pinMode(pin_ch24, INPUT);
  #endif
  
  #ifdef ch25_active
    pinMode(pin_ch25, INPUT);
  #endif
  
  #ifdef ch26_active
    pinMode(pin_ch26, INPUT);
  #endif
  
  #ifdef ch27_active
    pinMode(pin_ch27, INPUT);
  #endif
  
  #ifdef ch28_active
    pinMode(pin_ch28, INPUT);
  #endif
  
  #ifdef ch29_active
    pinMode(pin_ch29, INPUT);
  #endif
}



void SetupMethods::loraSetup() {
  Serial.println("LoRa Sender");
  Serial.println("Starting LoRa");
  LoRa.setPins(rfm95w_cs, rfm95w_reset, rfm95w_dio0);
  if (!LoRa.begin(915E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
  else {
    Serial.println("Starting LoRa successfull!");
  }
  delay(2000);
}