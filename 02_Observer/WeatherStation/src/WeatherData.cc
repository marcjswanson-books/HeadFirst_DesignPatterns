#include "WeatherData.h"

namespace Observer {
namespace WeatherStation {

WeatherData::WeatherData()
    : _temperature(0.0), _pressure(0.0), _humidity(0.0) {}

WeatherData::~WeatherData() {}

float WeatherData::getTemperature() { return _temperature; }
float WeatherData::getHumidity() { return _humidity; }
float WeatherData::getPressure() { return _pressure; }

void WeatherData::measurementsChanged() { notifyObserver(); }
void WeatherData::feed(double temp, double pressure, double humidity) {
  _temperature = temp;
  _pressure = pressure;
  _humidity = humidity;

  measurementsChanged();
}

}  // namespace WeatherStation
}  // namespace Observer
