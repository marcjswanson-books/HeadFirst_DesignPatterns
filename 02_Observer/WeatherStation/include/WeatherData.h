#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_WEATHERDATA_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_WEATHERDATA_H_

#include "Subject.h"

namespace Observer {
namespace WeatherStation {

class WeatherData : public Subject {
 public:
  WeatherData();
  virtual ~WeatherData();

  float getTemperature();
  float getHumidity();
  float getPressure();
  void measurementsChanged();

  /**
   * @brief Simulates a serial feed of data
   *
   * @param temp  current temperature in Celsius
   * @param pressure current pressure in millibars
   * @param humidity current  humidity
   */
  void feed(double temp, double pressure, double humidity);

 private:
  double _temperature;
  double _pressure;
  double _humidity;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_WEATHERDATA_H_