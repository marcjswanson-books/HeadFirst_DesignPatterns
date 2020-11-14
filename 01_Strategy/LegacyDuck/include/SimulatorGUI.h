#ifndef HFDP_01STRATEGY_SIMULATORGUI_H
#define HFDP_01STRATEGY_SIMULATORGUI_H

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

#endif // HFDP_01STRATEGY_SIMULATORGUI_H