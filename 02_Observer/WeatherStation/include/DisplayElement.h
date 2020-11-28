#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_DISPLAYELEMENT_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_DISPLAYELEMENT_H_

namespace Observer {
namespace WeatherStation {

/**
 * @brief Interface Class for DisplayElement functionality.
 */
class DisplayElement {
 public:
  /**
   * @brief Construct a new DisplayElement object
   */
  DisplayElement() {}
  /**
   * @brief Destroy the DisplayElement object
   */
  virtual ~DisplayElement() {}

  /**
   * @brief Override with specific display implementations.
   */
  virtual void display() = 0;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_DISPLAYELEMENT_H_