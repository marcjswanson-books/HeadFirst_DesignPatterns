#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_MALLARDDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_MALLARDDUCK_H_

#include "Duck.h"

namespace Strategy {
namespace LegacyDuck {

/**
 * @brief Concrete MallardDuck class */
class MallardDuck : public Duck {
 public:
  /**
   * @brief Construct a new Mallard Duck object. */
  MallardDuck();

  /**
   * @brief Destroy the Mallard Duck object. */
  virtual ~MallardDuck();

  /**
   * @brief Display the Mallard's quack behavior.  */
  virtual void quack();

  /**
   * @brief Display the Mallard's swim behavior. */
  virtual void swim();

  /**
   * @brief Display the Mallard's type name and id. */
  virtual void display();

 private:
  static unsigned int _newID;
};

}  // namespace LegacyDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_MALLARDDUCK_H_