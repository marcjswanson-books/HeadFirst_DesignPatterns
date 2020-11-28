#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_HEATINDEXDISPLAY_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_HEATINDEXDISPLAY_H_

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

namespace Observer {
namespace WeatherStation {

/**
 * @brief Interface Class for HeatIndexDisplay functionality.
 */
class HeatIndexDisplay : public Observer, DisplayElement {
 public:
  /**
   * @brief Construct a new HeatIndexDisplay object
   */
  HeatIndexDisplay(WeatherData* pWeatherData);
  /**
   * @brief Destroy the HeatIndexDisplay object
   */
  virtual ~HeatIndexDisplay();

  /**
   * @brief Update the data required for determining the heat index.
   */
  virtual void update();

  /**
   * @brief Display the results
   */
  virtual void display();

 private:
  WeatherData* _pWeatherData;
  double _temperature;
  double _humidity;

  static constexpr double C1 = -42.379;
  static constexpr double C2 = 2.04901523;
  static constexpr double C3 = 10.14333127;
  static constexpr double C4 = -0.22475541;
  static constexpr double C5 = -6.83783E-3;
  static constexpr double C6 = -5.81717E-2;
  static constexpr double C7 = 1.22874E-3;
  static constexpr double C8 = 8.5282E-4;
  static constexpr double C9 = -1.99E-6;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_HEATINDEXDISPLAY_H_