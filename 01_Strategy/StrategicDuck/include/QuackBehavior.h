#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACKBEHAVIOR_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACKBEHAVIOR_H_

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Interface for the quacking behavior.
 */
class QuackBehavior {
 public:
  /**
   * @brief Construct a new Quack Behavior object
   */
  QuackBehavior(){};

  /**
   * @brief Destroy the QuackBehavior object
   */
  virtual ~QuackBehavior(){};

  /**
   * @brief Pure virutal for the algorithm for the quacking behavior.
   *
   * @return unsigned int Number of characters displayed.
   */
  virtual unsigned int quack() = 0;
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACKBEHAVIOR_H_