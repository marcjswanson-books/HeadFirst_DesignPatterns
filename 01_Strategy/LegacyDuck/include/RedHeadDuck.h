#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_REDHEADDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_REDHEADDUCK_H_

#include "Duck.h"

class RedHeadDuck : public Duck {
 public:
  RedHeadDuck();
  virtual ~RedHeadDuck();

  virtual void quack();
  virtual void swim();
  virtual void display();
  // other duck-like methods

 private:
  static unsigned int _newID;
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_REDHEADDUCK_H_