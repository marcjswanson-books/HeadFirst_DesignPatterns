#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MEOW_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MEOW_H_

#include "QuackBehavior.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete algorithm for meow behavior.
 */
class Meow : public QuackBehavior {
 public:
  /**
   * @brief Construct a new Meow object
   */
  Meow();

  /**
   * @brief Destroy the Meow object
   */
  ~Meow();

  /**
   * @brief Specfic algorithm for the Meow behavior.
   *
   * @return unsigned int The number of characters displayed.
   */
  unsigned int quack();
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MEOW_H_