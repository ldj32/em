/**
 *led.cpp
 */

#include "Arduino.h"
#include "led.h"

LED::LED(byte p, bool state) : pin(p)
{

    pinMode(pin, OUTPUT);
    digitalWrite(pin, state);
}

LED::~LED()
{
    detach();
}

void LED::on()
{
    digitalWrite(pin, HIGH);
}

void LED::off()
{
    digitalWrite(pin, LOW);
}

bool LED::getState()
{
    return digitalRead(pin);
}

void LED::detach() 
{
    digitalWrite(pin, LOW);
    pinMode(pin, INPUT);
}