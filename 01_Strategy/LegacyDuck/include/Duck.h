#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_DUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_DUCK_H_

#include <string>

class Duck {
 public:
  Duck();
  virtual ~Duck();

  virtual void quack() = 0;
  virtual void swim() = 0;
  virtual void display() = 0;
  // other duck-like methods
 protected:
  unsigned int _id;
  std::string _name;

 private:
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_DUCK_H_