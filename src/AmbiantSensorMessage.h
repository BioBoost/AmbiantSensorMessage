#pragma once

#include "LoRaMessage.h"

namespace ParticulaLora {
    class AmbiantSensorMessage
    {
        public:
            void addHumidity(double);
            void addTemperature(double);
            void addPressure(double);
            void addPM(double);
            void addError(int);
            uint8_t* getMessage();
            uint8_t getLength();
        
        private:
            LoRaMessage message;
    };
}