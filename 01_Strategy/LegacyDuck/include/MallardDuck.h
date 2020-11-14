#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_MALLARDDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_MALLARDDUCK_H_

#include "Duck.h"

class MallardDuck : public Duck {
 public:
  MallardDuck();
  virtual ~MallardDuck();

  virtual void quack();
  virtual void swim();
  virtual void display();
  // other duck-like methods

 private:
  static unsigned int _newID;
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_MALLARDDUCK_H_