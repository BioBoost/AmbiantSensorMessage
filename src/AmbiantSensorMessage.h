#pragma once

#include "LoraMessage.h"

namespace AmbiantSensorMessage {
    class AmbiantSensorMessage
    {
        public:
            AmbiantSensorMessage();

            void addHumidity(int humidity);
            AmbiantSensorMessage& addTemperature(int temperature);
            void addPressure(int pressure);
            void addPM(int pm);

            uint8_t* getMessage();
            uint8_t getLength();
        
        private:
            uint8_t* buffer = 0;
            uint8_t size = 0;
    };
}