#include "AmbiantSensorMessage.h"

namespace ParticulaLora {
    void AmbiantSensorMessage::addTemperature(int temperature)
    {
        message.addUint16(temperature);
    }

    void AmbiantSensorMessage::addHumidity(int humidity)
    {
        if (humidity < 0) {
            humidity = 0;
        } else if (humidity > 10000) {
            humidity = 10000;               // 100% with 2 decimal places
        }
        message.addUint16(humidity);
    }

    void AmbiantSensorMessage::addPressure(int pressure)
    {
        message.addUint16(pressure);
    }

    void AmbiantSensorMessage::addPM(int pm)
    {
        message.addUint16(pm);
    }

    uint8_t* AmbiantSensorMessage::getMessage()
    {
        return message.getMessage();
    }

    uint8_t AmbiantSensorMessage::getLength()
    {
        return message.getLength();
    }

    
}
