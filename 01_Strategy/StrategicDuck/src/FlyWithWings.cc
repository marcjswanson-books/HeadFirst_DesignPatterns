#include "FlyWithWings.h"

#include <iostream>

using std::cout;
using std::string;

namespace Strategy {
namespace StrategicDuck {

FlyWithWings::FlyWithWings() {}

FlyWithWings::~FlyWithWings() {}

unsigned int FlyWithWings::fly() {
  string output = "Airborne";
  cout << output;

  return output.length();
}

}  // namespace StrategicDuck
}  // namespace Strategy