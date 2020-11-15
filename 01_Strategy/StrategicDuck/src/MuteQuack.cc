#include "MuteQuack.h"

#include <iostream>

using std::cout;
using std::string;

MuteQuack::MuteQuack() {}

MuteQuack::~MuteQuack() {}

unsigned int MuteQuack::quack() {
  string output = "Silence";
  cout << output;

  return output.length();
}
