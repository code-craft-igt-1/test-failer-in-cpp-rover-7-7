#include <cassert>
#include <iostream>
#include "weather_report.h"

using std::string;
using namespace WeatherSpace;

class SensorStub : public IWeatherSensor {
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
class HighPrecipitationLowWindStub : public IWeatherSensor {
 public:
    double TemperatureInC() const override {
        return 26;
    }

    int Precipitation() const override {
        return 70;  
    }

    int Humidity() const override {
        return 72;
    }

    int WindSpeedKMPH() const override {
        return 40; 
    }
};

// Test cases
void TestRainy() {
    SensorStub sensor;
    std::string report = Report(sensor);
    std::cout << "TestRainy: " << report << std::endl;
    assert(report.find("rain") != std::string::npos);
}

void TestHighPrecipitationAndLowWindspeed() {
    HighPrecipitationLowWindStub sensor;
    std::string report = Report(sensor);
    std::cout << "TestHighPrecipitationAndLowWindspeed: " << report << std::endl;
    assert(report.find("rain") != std::string::npos);
}

int main() {
    TestRainy();
    TestHighPrecipitationAndLowWindspeed();
    std::cout << "All tests executed\n";
    return 0;
}
