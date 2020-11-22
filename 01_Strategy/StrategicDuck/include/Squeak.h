#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SQUEAK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SQUEAK_H_

#include "QuackBehavior.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete algorithm for the squeak behavior.
 */
class Squeak : public QuackBehavior {
 public:
  Squeak();
  ~Squeak();

  /**
   * @brief Specific algorithm for the quacking behavior.
   *
   * @return unsigned int The total number of characters displayed.
   */
  unsigned int quack();
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SQUEAK_H_