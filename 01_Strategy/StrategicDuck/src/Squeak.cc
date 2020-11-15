#include "Squeak.h"

#include <iostream>

using std::cout;
using std::string;

Squeak::Squeak() {}

Squeak::~Squeak() {}

unsigned int Squeak::quack() {
  string output = "Squeak";
  cout << output;

  return output.length();
}