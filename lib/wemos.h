 #include <Arduino.h>

 #ifndef WEMOS_H
 #define WEMOS_H

class wemos 
{
    private:
        int temperature;
        int humidity;

    public:

        void setup();
        void lcd();

}

 #endif