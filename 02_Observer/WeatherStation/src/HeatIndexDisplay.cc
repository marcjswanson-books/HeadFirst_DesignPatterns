
#include "HeatIndexDisplay.h"

#include <iostream>
using std::cout;
using std::endl;

namespace Observer {
namespace WeatherStation {

HeatIndexDisplay::HeatIndexDisplay(WeatherData* pWeatherData)
    : _pWeatherData(pWeatherData), _temperature(0.0), _humidity(0.0) {
  _pWeatherData->registerObserver(this);
}
HeatIndexDisplay::~HeatIndexDisplay() { _pWeatherData->removeObserver(this); }

void HeatIndexDisplay::update() {
  _temperature = _pWeatherData->getTemperature();
  _humidity = _pWeatherData->getHumidity();

  display();
}

void HeatIndexDisplay::display() {
  double heatIndex = 0.0;
  double humidity = _humidity / 100;
  double tempSqr = _temperature * _temperature;
  double humidSqr = humidity * humidity;

  heatIndex = C1 + C2 * _temperature + C3 * humidity +
              C4 * _temperature * humidity + C5 * tempSqr + C6 * humidSqr +
              C7 * tempSqr * humidity + C8 * _temperature * humidSqr +
              C9 * tempSqr * humidSqr;

  cout << "Heat index is " << heatIndex << endl;
}

}  // namespace WeatherStation
}  // namespace Observer
