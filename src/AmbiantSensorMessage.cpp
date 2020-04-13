#include "AmbiantSensorMessage.h"

namespace Particula {
    void AmbiantSensorMessage::addTemperature(double value)
    {
        int16_t temperature = (int16_t) (value * 100);
        if (temperature < 0) {
            temperature = ~-temperature;
            temperature = temperature + 1;
        }
        message.addUint16(temperature);
    }

    void AmbiantSensorMessage::addHumidity(double value)
    {
        int16_t humidity = (int16_t) (value * 100);
        if (humidity < 0) {
            humidity = 0;
        } else if (humidity > 10000) {
            humidity = 10000;
        }
        message.addUint16(humidity);
    }

    void AmbiantSensorMessage::addPressure(double value)
    {
        int16_t pressure = (int16_t) (value * 10);
        if (pressure < 0) {
            pressure = 0;
        }
        message.addUint16(pressure);
    }

    void AmbiantSensorMessage::addPM(double value)
    {
        int16_t pm = (int16_t) (value * 10);
        if (pm < 0) {
            pm = 0;
        }
        message.addUint16(pm);
    }

    void AmbiantSensorMessage::addError(int value)
    {
        message.addUint8(value);
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
