#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_RUBBERDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_RUBBERDUCK_H_

#include "Duck.h"

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Concrete RubberDuck
 *
 */
class RubberDuck : public Duck {
 public:
  /**
   * @brief Construct a new RubberDuck object
   */
  RubberDuck();

  /**
   * @brief Destroy the RubberDuck object
   */
  ~RubberDuck();

 private:
  static unsigned int _newID;
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_RUBBERDUCK_H_