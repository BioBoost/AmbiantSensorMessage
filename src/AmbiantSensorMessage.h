#pragma once

#include "LoraMessage.h"

namespace AmbiantSensorMessage {
    class AmbiantSensorMessage
    {
        public:
            AmbiantSensorMessage();

            void addHumidity(int humidity);
            LoRaMessage& addTemperature(int temperature);
            void addPressure(int pressure);
            void addPM(int pm);
    };
}