#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_RUBBERDUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_RUBBERDUCK_H_

#include "Duck.h"

class RubberDuck : public Duck {
 public:
  RubberDuck();
  ~RubberDuck();

  // other duck-like methods

 private:
  static unsigned int _newID;
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_RUBBERDUCK_H_