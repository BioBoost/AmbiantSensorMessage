#include "AmbiantSensorMessage.h"

LoRaMessage loRaMessage;

namespace AmbiantSensorMessage {
    LoRaMessage& AmbiantSensorMessage::addTemperature(int temperature)
    {
        return loRaMessage.addUint16(temperature);
        buffer += 2;
    }

    void AmbiantSensorMessage::addHumidity(int humidity)
    {
        if (humidity < 0) {
            humidity = 0;
        } else if (humidity > 100) {
            humidity = 100;
        }
        loRaMessage.addUint16(humidity);
        buffer += 2;
    }

    void AmbiantSensorMessage::addPressure(int pressure)
    {
        loRaMessage.addUint16(pressure);
        buffer += 2;
    }

    void AmbiantSensorMessage::addPM(int pm)
    {
        loRaMessage.addUint16(pm);
        buffer += 2;
    }

    uint8_t* AmbiantSensorMessage::getMessage()
    {
        return buffer;
    }
    
    uint8_t AmbiantSensorMessage::getLength()
    {
        return size;
    }
}
