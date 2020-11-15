#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SIMULATORGUI_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SIMULATORGUI_H_

#include <iostream>

#include "Duck.h"

using std::string;

class SimulatorGUI {
 public:
  SimulatorGUI();
  ~SimulatorGUI();

  void splashScreen();
  void run();

  static const unsigned int MAX_DUCKS = 8;
  static const unsigned int CELL_WIDTH = 15;

 private:
  void displayBorder();
  void fillCell(unsigned int length);
  void fillCell(const string& text);

  int getDuckCount();
  void allDucksRoster();
  void allDucksQuack();
  void allDucksSwim();
  void allDucksFly();

  Duck* _ducks[MAX_DUCKS];
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SIMULATORGUI_H_