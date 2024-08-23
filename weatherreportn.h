#ifndef WEATHERREPORTN_H
#define WEATHERREPORTN_H

#include <string>

namespace WeatherSpace {

class IWeatherSensor {
 public:
    virtual double TemperatureInC() const = 0;
    virtual int Precipitation() const = 0;
    virtual int Humidity() const = 0;
    virtual int WindSpeedKMPH() const = 0;
};

// Function to generate a weather report based on sensor data
std::string Report(const IWeatherSensor& sensor);

}  // namespace WeatherSpace

#endif
