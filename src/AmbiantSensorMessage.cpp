#include "AmbiantSensorMessage.h"

namespace ParticulaLora {
    void AmbiantSensorMessage::addTemperature(double temperature)
    {
        message.addUint16(temperature);
    }

    void AmbiantSensorMessage::addHumidity(double humidity)
    {
        if (humidity < 0) {
            humidity = 0;
        } else if (humidity > 10000) {
            humidity = 10000;               // 100% with 2 decimal places
        }
        message.addUint16(humidity);
    }

    void AmbiantSensorMessage::addPressure(double pressure)
    {
        message.addUint16(pressure);
    }

    void AmbiantSensorMessage::addPM(double pm)
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
