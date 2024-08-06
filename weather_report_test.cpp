#include <cassert>
#include <iostream>
#include "weather_report.h"

using namespace std;
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
    std::string report = Report(sensor);
    cout << "TestRainy: " << report << endl;
    assert(report.find("rain") != std::string::npos);
}

void TestHighPrecipitationAndLowWindspeed() {
    HighPrecipitationLowWindStub sensor;
    std::string report = Report(sensor);
    cout << "TestHighPrecipitationAndLowWindspeed: " << report << endl;
    assert(report.find("rain") != std::string::npos);
}

int main() {
    TestRainy();
    TestHighPrecipitationAndLowWindspeed();
    cout << "All tests executed\n";
    return 0;
}
