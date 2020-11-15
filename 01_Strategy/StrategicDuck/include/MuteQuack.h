#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MUTEQUACK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MUTEQUACK_H_

#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior {
 public:
  MuteQuack();
  ~MuteQuack();

  unsigned int quack();
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_MUTEQUACK_H_