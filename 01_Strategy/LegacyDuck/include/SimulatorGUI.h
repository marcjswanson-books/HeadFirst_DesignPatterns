#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_SIMULATORGUI_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_SIMULATORGUI_H_

#include <vector>

using std::vector;

#include "Duck.h"

namespace Strategy {
namespace LegacyDuck {

/**
 * @brief Simulator Front End
 */
class SimulatorGUI {
 public:
  /**
   * @brief Construct a new SimulatorGUI object. */
  SimulatorGUI();
  /**
   * @brief Destroy the SimulatorGUI object. */
  ~SimulatorGUI();

  /**
   * @brief Display a spash screen for the simulator. */
  void splashScreen();

  /**
   * @brief Get the Duck Count
   * @return int Total number of ducks in the simulation.
   */
  int getDuckCount();

  /**
   * @brief List all of the Duck types and their ids.
   */
  void allDucksRoster();

  /**
   * @brief Have all the Duck's in the simulator quack.
   */
  void allDucksQuack();

  /**
   * @brief Have all the Duck's in the simulator swim.
   */
  void allDucksSwim();

  /**
   * @brief The total number of Ducks in the simulation.
   */
  static const unsigned int MAX_DUCKS = 12;

 private:
  vector<Duck *> _ducks;
};

}  // namespace LegacyDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_SIMULATORGUI_H_