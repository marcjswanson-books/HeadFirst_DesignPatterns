
#include "MallardDuck.h"

#include <iostream>

#include "FlyWithWings.h"
#include "Quack.h"

using std::cout;
using std::string;

unsigned int MallardDuck::_newID = 0;

MallardDuck::MallardDuck() {
  _name = "Mallard";
  _id = _newID++;
  _quackBehavior = new Quack();
  _flyBehavior = new FlyWithWings();
}

MallardDuck::~MallardDuck() {}
