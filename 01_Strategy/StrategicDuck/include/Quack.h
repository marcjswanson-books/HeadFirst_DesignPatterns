#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACK_H_

#include "QuackBehavior.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete algorithm for the quacking behavior.
 */
class Quack : public QuackBehavior {
 public:
  /**
   * @brief Construct a new Quack object
   */
  Quack();

  /**
   * @brief Destroy the Quack object
   */
  ~Quack();

  /**
   * @brief Specific algorithm for the quack behavior.
   *
   * @return unsigned int The number of characters displayed.
   */
  unsigned int quack();
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACK_H_