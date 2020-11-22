#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_REDHEADDDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_REDHEADDDUCK_H_

#include "Duck.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete RedHeadDuck
 */
class RedHeadDuck : public Duck {
 public:
  /**
   * @brief Construct a new RedHeadDuck object
   */
  RedHeadDuck();

  /**
   * @brief Destroy the RedHeadDuck object
   */
  ~RedHeadDuck();

 private:
  static unsigned int _newID;
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_REDHEADDDUCK_H_