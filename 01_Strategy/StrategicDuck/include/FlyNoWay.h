#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYNOWAY_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYNOWAY_H_

#include "FlyBehavior.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete algorithm for the non flying behavior.
 */
class FlyNoWay : public FlyBehavior {
 public:
  /**
   * @brief Construct a new FlyNoWay object
   */
  FlyNoWay();

  /**
   * @brief Destroy the FlyNoWay object
   */
  ~FlyNoWay();

  /**
   * @brief Specific algorithm for the none flying behavior.
   *
   * @return unsigned int The number of characters displayed.
   */
  unsigned int fly();
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYNOWAY_H_
