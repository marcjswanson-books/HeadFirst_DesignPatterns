#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_CURRENTDISPLAY_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_CURRENTDISPLAY_H_

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

namespace Observer {
namespace WeatherStation {

/**
 * @brief Interface Class for CurrentDisplay functionality.
 */
class CurrentDisplay : public Observer, DisplayElement {
 public:
  /**
   * @brief Construct a new CurrentDisplay object
   */
  CurrentDisplay(WeatherData* pWeatherData);
  /**
   * @brief Destroy the CurrentDisplay object
   */
  virtual ~CurrentDisplay();

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

  double _temperature;
  double _humidity;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_CURRENTDISPLAY_H_