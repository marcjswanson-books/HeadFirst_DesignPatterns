#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYWITHWINGS_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYWITHWINGS_H_

#include "FlyBehavior.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete algorithm for the flying with wings behavior.
 */
class FlyWithWings : public FlyBehavior {
 public:
  /**
   * @brief Construct a new FlyWithWings object
   */
  FlyWithWings();

  /**
   * @brief Destroy the FlyWithWings object
   */
  ~FlyWithWings();

  /**
   * @brief Specific algorithm for the flying with wings behavior.
   *
   * @return unsigned int The number of characters displayed.
   */
  unsigned int fly();
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYWITHWINGS_H_
