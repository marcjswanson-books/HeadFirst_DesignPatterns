#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MUTEQUACK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MUTEQUACK_H_

#include "QuackBehavior.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete strategy for the MuteQuack (silent) behavior.
 */
class MuteQuack : public QuackBehavior {
 public:
  /**
   * @brief Construct a new MuteQuack object
   */
  MuteQuack();
  /**
   * @brief Destroy the MuteQuack object
   */
  ~MuteQuack();

  /**
   * @brief Specific algorithm for the MuteQuack (silent) behavior.
   *
   * @return unsigned int
   */
  unsigned int quack();
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MUTEQUACK_H_