#pragma once

#include "LoraMessage.h"

namespace ParticulaLora {
    class AmbiantSensorMessage
    {
        public:
            void addHumidity(double humidity);
            void addTemperature(double temperature);
            void addPressure(double pressure);
            void addPM(double pm);
            uint8_t* getMessage();
            uint8_t getLength();
        
        private:
            LoRaMessage message;
    };
}