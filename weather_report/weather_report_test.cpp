#include <cassert>
#include <iostream>
#include <vector>
#include <string>
#include "weather_report/weather_report.h"

using std::string;
using std::vector;

class SensorStub : public WeatherSpace::IWeatherSensor {
 public:
    int Humidity() const override {
        return 72;
    }

    int Precipitation() const override {
        return 70;
    }

    double TemperatureInC() const override {
        return 26;
    }

    int WindSpeedKMPH() const override {
        return 52;
    }
};

// New stub for testing different scenarios
class HighPrecipitationLowWindStub : public WeatherSpace::IWeatherSensor {
 public:
    double TemperatureInC() const override {
        return 26;
    }

    int Precipitation() const override {
        return 70;  // High precipitation
    }

    int Humidity() const override {
        return 72;
    }

    int WindSpeedKMPH() const override {
        return 40;  // Low wind speed
    }
};

// Test cases
void TestRainy() {
    SensorStub sensor;
    string report = WeatherSpace::Report(sensor);
    std::cout << "TestRainy: " << report << std::endl;
    assert(report.find("rain") != string::npos);
}

void TestHighPrecipitationAndLowWindspeed() {
    HighPrecipitationLowWindStub sensor;
    string report = WeatherSpace::Report(sensor);
    std::cout << "TestHighPrecipitationAndLowWindspeed: " << report << std::endl;
    assert(report.find("rain") != string::npos);
}

int main() {
    TestRainy();
    TestHighPrecipitationAndLowWindspeed();
    std::cout << "All tests executed\n";  // newline
    return 0;
}
