#pragma once

#include "LoraMessage.h"

namespace AmbiantSensorMessage {
    class AmbiantSensorMessage
    {
        public:
            AmbiantSensorMessage();

            void addHumidity(int humidity);
            void addTemperature(int temperature);
            void addPressure(int pressure);
            void addPM(int pm);
            uint8_t* getMessage();
            uint8_t getLength();
        
        private:
            LoRaMessage message;
    };
}