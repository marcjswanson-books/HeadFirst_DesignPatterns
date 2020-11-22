#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYBEHAVIOR_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYBEHAVIOR_H_

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Inteface for the flying behavior.
 */
class FlyBehavior {
 public:
  /**
   * @brief Construct a new FlyBehavior object
   */
  FlyBehavior(){};

  /**
   * @brief Destroy the FlyBehavior object
   */
  virtual ~FlyBehavior(){};

  /**
   * @brief Pure virtual for the flying algorithm.
   *
   * @return unsigned int The number of characters displayed.
   */
  virtual unsigned int fly() = 0;
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_FLYBEHAVIOR_H_