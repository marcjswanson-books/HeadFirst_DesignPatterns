#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MEOW_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MEOW_H_

#include "QuackBehavior.h"

class Meow : public QuackBehavior {
 public:
  Meow();
  ~Meow();

  unsigned int quack();
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MEOW_H_