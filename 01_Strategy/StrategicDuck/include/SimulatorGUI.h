#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SIMULATORGUI_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SIMULATORGUI_H_

#include <iostream>

#include "Duck.h"

using std::string;

namespace Strategy {
namespace StrategicDuck {

/**
 * @brief Simulator front end for the Strategic Duck Simulator
 *
 */
class SimulatorGUI {
 public:
  /**
   * @brief Construct a new SimulatorGUI object
   */
  SimulatorGUI();

  /**
   * @brief Destroy the SimulatorGUI object
   */
  ~SimulatorGUI();

  /**
   * @brief Display a splash screen for the Strategic Duck Simulator
   */
  void splashScreen();

  /**
   * @brief Start the simulator.
   *
   */
  void run();

  /**
   * @brief Total number of Ducks in the simulator.
   */
  static const unsigned int MAX_DUCKS = 8;

  /**
   * @brief How wide to make the cells in the display.
   */
  static const unsigned int CELL_WIDTH = 15;

 private:
  /**
   * @brief Display a row for the top or bottom border.
   */
  void displayBorder();

  /**
   * @brief Complete filling in a cell with whitespace to fit within the
   * CELL_WIDTH.
   *
   * @param length The length of the text that was previously entered into the
   * cell.
   */
  void fillCell(unsigned int length);

  /**
   * @brief Fill the cell with the string and whitespace.
   *
   * @param text The string that you want inserted into the cell.
   */
  void fillCell(const string& text);

  /**
   * @brief Get the number of Ducks being simulated.
   *
   * @return int The total number of Ducks.
   */
  int getDuckCount();

  /**
   * @brief Print out the list of all the Ducks and their ids.
   */
  void allDucksRoster();

  /**
   * @brief Have all Ducks quack.
   */
  void allDucksQuack();

  /**
   * @brief Have all Ducks swim.
   */
  void allDucksSwim();

  /**
   * @brief Have all Ducks fly.
   */
  void allDucksFly();

  Duck* _ducks[MAX_DUCKS];
};

}  // namespace StrategicDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_STRATEGICDUCK_SIMULATORGUI_H_