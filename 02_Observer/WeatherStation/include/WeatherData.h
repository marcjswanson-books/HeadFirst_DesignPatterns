#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_WEATHERDATA_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_WEATHERDATA_H_

#include "Subject.h"

namespace Observer {
namespace WeatherStation {

class WeatherData : public Subject {
 public:
  /**
   * @brief Construct a new Weather Data object
   */
  WeatherData();
  /**
   * @brief Destroy the Weather Data object
   */
  virtual ~WeatherData();

  /**
   * @brief Get the Temperature object
   * @return float
   */
  float getTemperature();
  /**
   * @brief Get the Humidity object
   * @return float
   */
  float getHumidity();
  /**
   * @brief Get the Pressure object
   * @return float
   */
  float getPressure();
  /**
   * @brief Called to indicate that the measurments have changed.
   */
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