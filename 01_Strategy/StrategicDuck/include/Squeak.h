#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SQUEAK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SQUEAK_H_

#include "QuackBehavior.h"

class Squeak : public QuackBehavior {
 public:
  Squeak();
  ~Squeak();

  unsigned int quack();
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SQUEAK_H_