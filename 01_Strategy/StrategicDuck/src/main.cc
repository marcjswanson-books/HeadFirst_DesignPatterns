#include <iostream>

#include "SimulatorGUI.h"

int main() {
  Strategy::StrategicDuck::SimulatorGUI gui;

  gui.splashScreen();

  gui.run();

  return 0;
}
