#include "Squeak.h"

#include <iostream>

using std::cout;
using std::string;

namespace Strategy {
namespace StrategicDuck {

Squeak::Squeak() {}

Squeak::~Squeak() {}

unsigned int Squeak::quack() {
  string output = "Squeak";
  cout << output;

  return output.length();
}

}  // namespace StrategicDuck
}  // namespace Strategy
