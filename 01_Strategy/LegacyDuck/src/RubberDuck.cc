#include <iostream>
#include <string>

using std::cout;
using std::to_string;

#include "RubberDuck.h"

namespace Strategy {
namespace LegacyDuck {

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
}  // namespace LegacyDuck
}  // namespace Strategy