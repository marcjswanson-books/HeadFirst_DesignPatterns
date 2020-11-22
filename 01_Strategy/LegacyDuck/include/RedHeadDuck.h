#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_REDHEADDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_REDHEADDUCK_H_

#include "Duck.h"

namespace Strategy {
namespace LegacyDuck {

/**
 * @brief Concrete RedHeadDuck class */
class RedHeadDuck : public Duck {
 public:
  /**
   * @brief Construct a new RedHeadDuck object. */
  RedHeadDuck();

  /**
   * @brief Destroy the RedHeadDuck object.  */
  virtual ~RedHeadDuck();

  /**
   * @brief Display the RedHeadDuck's quack behavior. */
  virtual void quack();

  /**
   * @brief Display the ReadHead Duck's swim behavior. */
  virtual void swim();

  /**
   * @brief Display the ReadHead Duck's name and id. */
  virtual void display();

 private:
  static unsigned int _newID;
};

}  // namespace LegacyDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_REDHEADDUCK_H_