#include "Quack.h"

#include <iostream>

using std::cout;
using std::string;

namespace Strategy {
namespace StrategicDuck {

Quack::Quack() {}

Quack::~Quack() {}

unsigned int Quack::quack() {
  string output = "Quack";
  cout << output;

  return output.length();
}

}  // namespace StrategicDuck
}  // namespace Strategy