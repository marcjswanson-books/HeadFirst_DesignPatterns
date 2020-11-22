
#include "RubberDuck.h"

#include <iostream>

#include "FlyNoWay.h"
#include "Squeak.h"

using std::cout;
using std::string;

namespace Strategy {
namespace StrategicDuck {

unsigned int RubberDuck::_newID = 0;

RubberDuck::RubberDuck() {
  _name = "Rubber";
  _id = _newID++;
  _quackBehavior = new Squeak();
  _flyBehavior = new FlyNoWay();
}

RubberDuck::~RubberDuck() {}

}  // namespace StrategicDuck
}  // namespace Strategy