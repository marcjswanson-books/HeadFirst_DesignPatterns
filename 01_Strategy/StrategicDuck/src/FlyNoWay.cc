#include "FlyNoWay.h"

#include <iostream>

using std::cout;
using std::string;

namespace Strategy {
namespace StrategicDuck {

FlyNoWay::FlyNoWay() {}

FlyNoWay::~FlyNoWay() {}

unsigned int FlyNoWay::fly() {
  string output = "Grounded";
  cout << output;

  return output.length();
}

}  // namespace StrategicDuck
}  // namespace Strategy