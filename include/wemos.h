 #include <Arduino.h>

 #ifndef WEMOS_H
 #define WEMOS_H

class wemos 
{
    private:
        int temperature;
        int humidity;

    public:

        wemos(){

        };

        ~wemos(){

        };

        void setup();
        void oled();

};

 #endif