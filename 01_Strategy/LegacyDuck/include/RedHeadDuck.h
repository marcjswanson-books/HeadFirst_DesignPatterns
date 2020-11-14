#ifndef HFDP_01STRATEGY_REDHEADDUCK_H
#define HFDP_01STRATEGY_REDHEADDUCK_H

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

#endif // HFDP_01STRATEGY_REDHEADDUCK_H