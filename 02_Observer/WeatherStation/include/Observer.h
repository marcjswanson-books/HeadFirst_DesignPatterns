#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_OBSERVER_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_OBSERVER_H_

namespace Observer {
namespace WeatherStation {

/**
 * @brief Interface Class for Observer functionality.
 */
class Observer {
 public:
  /**
   * @brief Construct a new Observer object
   */
  Observer() {}
  /**
   * @brief Destroy the Observer object
   */
  virtual ~Observer() {}

  /**
   * @brief Pure virtual
   */
  virtual void update() = 0;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_OBSERVER_H_