#include "./weatherreportn.h"
#include <string>
namespace WeatherSpace {

std::string Report(const IWeatherSensor& sensor) {
    int precipitation = sensor.Precipitation();
    std::string report = "Sunny day";

    if (sensor.TemperatureInC() > 25) {
        if (precipitation >= 20 && precipitation < 60)
            report = "Partly cloudy";
        else if (sensor.WindSpeedKMPH() > 50)
            report = "Alert, Stormy with heavy rain";
    }
    return report;
}

}  // namespace WeatherSpace
