#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_REDHEADDDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_REDHEADDDUCK_H_

#include "Duck.h"

class RedHeadDuck : public Duck {
 public:
  RedHeadDuck();
  ~RedHeadDuck();

  // other duck-like methods

 private:
  static unsigned int _newID;
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_REDHEADDDUCK_H_