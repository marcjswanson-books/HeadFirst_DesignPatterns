
#include "ForcastDisplay.h"

#include <iostream>
using std::cout;
using std::endl;

namespace Observer {
namespace WeatherStation {

ForcastDisplay::ForcastDisplay(WeatherData* pWeatherData)
    : _pWeatherData(pWeatherData), _pressure(0.0) {
  _pWeatherData->registerObserver(this);
}
ForcastDisplay::~ForcastDisplay() { _pWeatherData->removeObserver(this); }

void ForcastDisplay::update() {
  _pressure = _pWeatherData->getPressure();

  display();
}

void ForcastDisplay::display() {
  cout << "Forcast: ";

  if (_pressure < 29.8) {
    cout << "rain";
  } else if (_pressure > 30.2) {
    cout << "fair weather";
  } else {
    cout << "no change";
  }

  cout << endl;
}

}  // namespace WeatherStation
}  // namespace Observer
