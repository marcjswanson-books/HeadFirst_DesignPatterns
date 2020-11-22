#include "Duck.h"

#include <iostream>

using std::cout;
using std::string;
using std::to_string;

namespace Strategy {
namespace StrategicDuck {

Duck::Duck(){};

Duck::~Duck() {
  if (_quackBehavior != nullptr) {
    delete _quackBehavior;
  }

  if (_flyBehavior != nullptr) {
    delete _flyBehavior;
  }
}

unsigned int Duck::quack() { return _quackBehavior->quack(); }

unsigned int Duck::fly() { return _flyBehavior->fly(); }

unsigned int Duck::swim() {
  string output = "All Swim!";
  cout << output;

  return output.length();
}

unsigned int Duck::display() {
  string output = _name + "(" + to_string(_id) + ")";
  cout << output;

  return output.length();
}

}  // namespace StrategicDuck
}  // namespace Strategy
