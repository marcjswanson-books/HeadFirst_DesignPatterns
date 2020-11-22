#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_RUBBERDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_RUBBERDUCK_H_

#include "Duck.h"

namespace Strategy {
namespace LegacyDuck {

/**
 * @brief Concrete RubberDuck class */
class RubberDuck : public Duck {
 public:
  /**
   * @brief Construct a new RubberDuck object. */
  RubberDuck();

  /**
   * @brief Destroy the RubberDuck object. */
  virtual ~RubberDuck();

  /**
   * @brief Display the RubberDuck's quack behavior. */
  virtual void quack();

  /**
   * @brief Dislay the RubberDuck's swim behavior. */
  virtual void swim();

  /**
   * @brief Display the RubberDuck's type and id. */
  virtual void display();

 private:
  static unsigned int _newID;
};
}  // namespace LegacyDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_RUBBERDUCK_H_