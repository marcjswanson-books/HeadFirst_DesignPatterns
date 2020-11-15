#include "FlyNoWay.h"

#include <iostream>

using std::cout;
using std::string;

FlyNoWay::FlyNoWay() {}

FlyNoWay::~FlyNoWay() {}

unsigned int FlyNoWay::fly() {
  string output = "Grounded";
  cout << output;

  return output.length();
}