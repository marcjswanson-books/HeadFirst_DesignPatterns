#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_DUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_DUCK_H_

#include <string>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck {
 public:
  Duck();
  virtual ~Duck();

  virtual unsigned int fly();
  virtual unsigned int quack();
  virtual unsigned int swim();
  virtual unsigned int display();

  // other duck-like methods

 protected:
  FlyBehavior* _flyBehavior;
  QuackBehavior* _quackBehavior;

  unsigned int _id;
  std::string _name;
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_DUCK_H_