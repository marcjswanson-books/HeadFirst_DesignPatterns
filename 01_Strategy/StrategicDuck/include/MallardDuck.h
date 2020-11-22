#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MALLARDDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MALLARDDUCK_H_

#include "Duck.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete MallardDuck
 */
class MallardDuck : public Duck {
 public:
  /**
   * @brief Construct a new MallardDuck object
   */
  MallardDuck();

  /**
   * @brief Destroy the MallardDuck object
   */
  ~MallardDuck();

 private:
  static unsigned int _newID;
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MALLARDDUCK_H_