
#include "StatisticsDisplay.h"

#include <iostream>
using std::cout;
using std::endl;

namespace Observer {
namespace WeatherStation {

StatisticsDisplay::StatisticsDisplay(WeatherData* pWeatherData)
    : _pWeatherData(pWeatherData),
      _avgTemperature(34.0),
      _maxTemperature(34.0),
      _minTemperature(34.0) {
  _pWeatherData->registerObserver(this);
}
StatisticsDisplay::~StatisticsDisplay() { _pWeatherData->removeObserver(this); }

void StatisticsDisplay::update() {
  double temperature = _pWeatherData->getTemperature();

  if (temperature > _maxTemperature) {
    _maxTemperature = temperature;
  }

  if (temperature < _minTemperature) {
    _minTemperature = temperature;
  }

  // a crappy average :)
  _avgTemperature = (_avgTemperature + temperature) / 2;

  display();
}

void StatisticsDisplay::display() {
  cout << "Avg/Max/Min temperature = " << _avgTemperature << "/"
       << _maxTemperature << "/" << _minTemperature << endl;
}

}  // namespace WeatherStation
}  // namespace Observer
