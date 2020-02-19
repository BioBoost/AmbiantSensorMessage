#include "AmbiantSensorMessage.h"

LoRaMessage loRaMessage;

namespace AmbiantSensorMessage {
    void AmbiantSensorMessage::addTemperature(int temperature)
    {
        loRaMessage.addUint16(temperature);
    }

    void AmbiantSensorMessage::addHumidity(int humidity)
    {
        if (humidity < 0) {
            humidity = 0;
        } else if (humidity > 100) {
            humidity = 100;
        }
        loRaMessage.addUint16(humidity);
    }

    void AmbiantSensorMessage::addPressure(int pressure)
    {
        loRaMessage.addUint16(pressure);
    }

    void AmbiantSensorMessage::addPM(int pm)
    {
        loRaMessage.addUint16(pm);
    }
}
