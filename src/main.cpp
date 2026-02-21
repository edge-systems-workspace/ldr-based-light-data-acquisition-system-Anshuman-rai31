#include <Arduino.h>
#define ldrpin A0
/*void setup() {
    Serial.begin(9600);
    pinMode (ldrpin, INPUT);
}*/

void loop() {
    int ldrValue = analogRead(ldrpin);
    int lightPercent = map(ldrValue,0,1023,0,100);
    Serial.print("ldrValue:");
    Serial.print(ldrValue);
    Serial.print("  lightPercent:");
    Serial.println(lightPercent);
    delay(300);
}