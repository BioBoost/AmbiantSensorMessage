#pragma once

#include "LoRaMessage.h"

namespace Particula {
    class AmbiantSensorMessage
    {
        public:
            void addHumidity(double);
            void addTemperature(double);
            void addPressure(double);
            void addPM(double);
            void addStatus(int);
            void addVersionNumber(double);
            uint8_t* getMessage();
            uint8_t getLength();
        
        private:
            LoRaMessage message;
    };
}