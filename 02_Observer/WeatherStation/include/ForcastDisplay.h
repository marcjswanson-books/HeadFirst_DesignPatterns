#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_FORCASTDISPLAY_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_FORCASTDISPLAY_H_

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

namespace Observer {
namespace WeatherStation {

/**
 * @brief Interface Class for ForcastDisplay functionality.
 */
class ForcastDisplay : public Observer, DisplayElement {
 public:
  /**
   * @brief Construct a new ForcastDisplay object
   */
  ForcastDisplay(WeatherData* pWeatherData);
  /**
   * @brief Destroy the ForcastDisplay object
   */
  virtual ~ForcastDisplay();

  /**
   * @brief
   */
  virtual void update();

  /**
   * @brief Display the results
   */
  virtual void display();

 private:
  WeatherData* _pWeatherData;
  double _pressure;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_FORCASTDISPLAY_H_