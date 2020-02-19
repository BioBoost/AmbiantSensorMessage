#pragma once

#include "../mbed-lorawan-serialization/src/LoRaEncoder.h"

class ExtendedLoRaEncoder: public LoRaEncoder
{
    public:
        ExtendedLoRaEncoder();
        void writeTemperature(double temperature);
        void writeHumidity(double humidity);
        void writePressure(double pressure);
        void writePM(uint16_t pm);

};