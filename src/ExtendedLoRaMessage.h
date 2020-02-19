#pragma once

#include "../mbed-lorawan-serialization/src/LoRaMessage.h"
#include "ExtendedLoRaEncoder.h"

class ExtendedLoRaMessage: public LoRaMessage{
    public:
        ExtendedLoRaMessage& addTemperature(double temperature);
        ExtendedLoRaMessage& addHumidity(double humidity);
        ExtendedLoRaMessage& addPressure(double pressure);
        ExtendedLoRaMessage& addPM(uint16_t pm);

        ExtendedLoRaEncoder reallocBuffer2(int delta);
};