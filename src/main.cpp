#include <Arduino.h>
#include "wemos.h"

wemos esp;

void setup(){
    Serial.begin(9600);
}
void loop(){
    esp.oledbegin();
}