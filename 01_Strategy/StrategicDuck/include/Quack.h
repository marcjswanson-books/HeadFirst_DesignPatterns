#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACK_H_

#include "QuackBehavior.h"

class Quack : public QuackBehavior {
 public:
  Quack();
  ~Quack();

  unsigned int quack();
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_QUACK_H_