#include "./weatherreportn.h"
#include <string>

namespace WeatherSpace {

std::string Report(const IWeatherSensor& sensor) {
    double temperature = sensor.TemperatureInC();
    int precipitation = sensor.Precipitation();
    int windSpeed = sensor.WindSpeedKMPH();
    if (precipitation >= 60) {
        return "Heavy rain";
    }
    if (temperature > 25) {
        if (precipitation >= 20) {
            return "Partly cloudy";
        }
        if (windSpeed > 50) {
            return "Alert, Stormy with heavy rain";
        }
    }
    return "Sunny day";
}
}  // namespace WeatherSpace
