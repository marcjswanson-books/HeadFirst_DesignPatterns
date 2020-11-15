#include "Quack.h"

#include <iostream>

using std::cout;
using std::string;

Quack::Quack() {}

Quack::~Quack() {}

unsigned int Quack::quack() {
  string output = "Quack";
  cout << output;

  return output.length();
}