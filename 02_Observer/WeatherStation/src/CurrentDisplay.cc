
#include "CurrentDisplay.h"

#include <iostream>
using std::cout;
using std::endl;

namespace Observer {
namespace WeatherStation {

CurrentDisplay::CurrentDisplay(WeatherData* pWeatherData)
    : _pWeatherData(pWeatherData), _temperature(0.0), _humidity(0.0) {
  _pWeatherData->registerObserver(this);
}
CurrentDisplay::~CurrentDisplay() { _pWeatherData->removeObserver(this); }

void CurrentDisplay::update() {
  _temperature = _pWeatherData->getTemperature();
  _humidity = _pWeatherData->getHumidity();

  display();
}

void CurrentDisplay::display() {
  cout << "Current Conditions: " << _temperature << "F degrees and "
       << _humidity << "% humidity." << endl;
}

}  // namespace WeatherStation
}  // namespace Observer
