#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_DUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_DUCK_H_

#include <string>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

namespace Strategy {
namespace StrategicDuck {

/** @brief Base class for specific types of Ducks */
class Duck {
 public:
  /** @brief Destroy the Duck object  */
  virtual ~Duck();

  /**
   * @brief Display's the Duck's flying behavior
   *
   * @return unsigned int  The number of characters displayed
   */
  virtual unsigned int fly();

  /**
   * @brief Display's the Duck's quacking behavior
   *
   * @return unsigned int The number of characters displayed
   */
  virtual unsigned int quack();

  /**
   * @brief Display's the Duck's swimming behavior.
   *
   * @return unsigned int The number of characters displayed
   */
  virtual unsigned int swim();

  /**
   * @brief Display the Duck's type and id
   *
   * @return unsigned int The number of characters displayed
   */
  virtual unsigned int display();

 protected:
  /**
   * @brief Construct a new Duck object
   *
   */
  Duck();

  /**
   * @brief The fly behavior algorithm for a particular Duck type
   *
   */
  FlyBehavior* _flyBehavior;

  /**
   * @brief The quack behavior algorithm for a particular Duck type
   *
   */
  QuackBehavior* _quackBehavior;

  /**
   * @brief The unique id for the instance within the scope of the type
   *
   */
  unsigned int _id;

  /**
   * @brief The type and id of the Duck
   *
   */
  std::string _name;
};
}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_DUCK_H_