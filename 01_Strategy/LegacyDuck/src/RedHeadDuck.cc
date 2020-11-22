#include <iostream>
#include <string>

using std::cout;
using std::to_string;

#include "RedHeadDuck.h"

namespace Strategy {
namespace LegacyDuck {

unsigned int RedHeadDuck::_newID = 0;

RedHeadDuck::RedHeadDuck() {
  _name = "RedHeadDuck(" + to_string(_newID++) + ")";
}

RedHeadDuck::~RedHeadDuck() {}

void RedHeadDuck::quack() {
  cout << "whee-ough";

  return;
}

void RedHeadDuck::swim() {
  cout << "R";

  return;
}

void RedHeadDuck::display() {
  cout << _name;

  return;
}

}  // namespace LegacyDuck
}  // namespace Strategy