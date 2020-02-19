#include "ExtendedLoRaMessage.h"

namespace ExtendedLoRaMessage {
    ExtendedLoRaMessage& ExtendedLoRaMessage::addTemperature(double temperature)
    {
        reallocBuffer(2).writeTemperature(temperature);
        return *this;
    }

    ExtendedLoRaMessage& ExtendedLoRaMessage::addHumidity(double humidity)
    {
        if (humidity < 0) {
            humidity = 0;
        } else if (humidity > 100) {
            humidity = 100;
        }
        reallocBuffer(2).writeHumidity(humidity);
        return *this;
    }

    ExtendedLoRaMessage& ExtendedLoRaMessage::addPressure(double pressure)
    {
        reallocBuffer(2).writePressure(pressure);
        return *this;
    }

    ExtendedLoRaMessage& ExtendedLoRaMessage::addPM(uint16_t pm)
    {
    reallocBuffer(2).writePM(pm);
    return *this;
    }
}
