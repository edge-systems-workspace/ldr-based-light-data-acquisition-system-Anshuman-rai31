/**
 * @file main.cpp
 * @brief LDR-based light data acquisition for Arduino (Doxygen documentation).
 *
 * Reads the analog value from an LDR connected to analog pin A0 and
 * converts it to a 0-100% light intensity value. Both the raw ADC value
 * and the calculated percentage are printed to the Serial monitor every
 * 300 ms.
 *
 * Hardware:
 *  - LDR connected as part of a voltage divider to analog pin A0 (ldrpin)
 *
 * @author Anshuman Rai
 * @date 2026-02-21
 * @version 1.0
 */

#include <Arduino.h>
#define ldrpin A0
void setup() {
    Serial.begin(9600);
    pinMode (ldrpin, INPUT);
}

void loop() {
    int ldrValue = analogRead(ldrpin);
    int lightPercent = map(ldrValue,0,1023,0,100);
    Serial.print("ldrValue:");
    Serial.print(ldrValue);
    Serial.print("  lightPercent:");
    Serial.println(lightPercent);
    delay(300);
}