#include "FlyWithWings.h"

#include <iostream>

using std::cout;
using std::string;

FlyWithWings::FlyWithWings() {}

FlyWithWings::~FlyWithWings() {}

unsigned int FlyWithWings::fly() {
  string output = "Airborne";
  cout << output;

  return output.length();
}