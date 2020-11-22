#include "Meow.h"

#include <iostream>

using std::cout;
using std::string;

namespace Strategy {
namespace StrategicDuck {

Meow::Meow() {}

Meow::~Meow() {}

unsigned int Meow::quack() {
  string output = "Meow";
  cout << output;

  return output.length();
}

}  // namespace StrategicDuck
}  // namespace Strategy