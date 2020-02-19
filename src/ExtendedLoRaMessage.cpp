#include "ExtendedLoRaMessage.h"

ExtendedLoRaMessage& ExtendedLoRaMessage::addTemperature(double temperature)
{
    reallocBuffer2(2).writeTemperature(temperature);
    return *this;
}

ExtendedLoRaMessage& ExtendedLoRaMessage::addHumidity(double humidity)
{
    if (humidity < 0) {
        humidity = 0;
    } else if (humidity > 100) {
        humidity = 100;
    }
    reallocBuffer2(2).writeHumidity(humidity);
    return *this;
}

ExtendedLoRaMessage& ExtendedLoRaMessage::addPressure(double pressure)
{
    reallocBuffer2(2).writePressure(pressure);
    return *this;
}

ExtendedLoRaMessage& ExtendedLoRaMessage::addPM(uint16_t pm)
{
  reallocBuffer2(2).writePM(pm);
  return *this;
}