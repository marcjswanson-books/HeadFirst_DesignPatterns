#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_STATISTICSDISPLAY_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_STATISTICSDISPLAY_H_

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

namespace Observer {
namespace WeatherStation {

/**
 * @brief Interface Class for StatisticsDisplay functionality.
 */
class StatisticsDisplay : public Observer, DisplayElement {
 public:
  /**
   * @brief Construct a new StatisticsDisplay object
   */
  StatisticsDisplay(WeatherData* pWeatherData);
  /**
   * @brief Destroy the StatisticsDisplay object
   */
  virtual ~StatisticsDisplay();

  /**
   * @brief Update the data required for determining temperature statistics.
   */
  virtual void update();

  /**
   * @brief Display the results
   */
  virtual void display();

 private:
  WeatherData* _pWeatherData;

  double _avgTemperature;
  double _maxTemperature;
  double _minTemperature;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_STATISTICSDISPLAY_H_