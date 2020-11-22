#include <iostream>
using namespace std;

#include "MallardDuck.h"

namespace Strategy {
namespace LegacyDuck {

unsigned int MallardDuck::_newID = 0;

MallardDuck::MallardDuck() { _name = "Mallard(" + to_string(_newID++) + ")"; }

MallardDuck::~MallardDuck() {}

void MallardDuck::quack() {
  cout << "quack";

  return;
}

void MallardDuck::swim() {
  cout << "M";

  return;
}

void MallardDuck::display() {
  cout << _name;

  return;
}

}  // namespace LegacyDuck
}  // namespace Strategy
