#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_RUBBERDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_RUBBERDUCK_H_

#include "Duck.h"

class RubberDuck : public Duck {
 public:
  RubberDuck();
  virtual ~RubberDuck();

  virtual void quack();
  virtual void swim();
  virtual void display();
  // other duck-like methods

 private:
  static unsigned int _newID;
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_RUBBERDUCK_H_