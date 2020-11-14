
#include "RubberDuck.h"

#include "global_includes.h"

unsigned int RubberDuck::_newID = 0;

RubberDuck::RubberDuck() { _name = "Mallard(" + to_string(_newID++) + ")"; }

RubberDuck::~RubberDuck() {}

void RubberDuck::quack() {
  cout << "Squeak";

  return;
}

void RubberDuck::swim() {
  cout << "R";

  return;
}

void RubberDuck::display() {
  cout << _name;

  return;
}