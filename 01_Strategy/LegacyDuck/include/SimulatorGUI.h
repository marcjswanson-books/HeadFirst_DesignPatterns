#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_SIMULATORGUI_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_SIMULATORGUI_H_

#include "Duck.h"

class SimulatorGUI {
 public:
  SimulatorGUI();
  ~SimulatorGUI();

  void splashScreen();

  int getDuckCount();
  void allDucksRoster();
  void allDucksQuack();
  void allDucksSwim();

  static const unsigned int MAX_DUCKS = 12;

 private:
  Duck *_ducks[MAX_DUCKS];
};

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_SIMULATORGUI_H_