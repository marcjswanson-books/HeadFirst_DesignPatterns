#include "Meow.h"

#include <iostream>

using std::cout;
using std::string;

Meow::Meow() {}

Meow::~Meow() {}

unsigned int Meow::quack() {
  string output = "Meow";
  cout << output;

  return output.length();
}