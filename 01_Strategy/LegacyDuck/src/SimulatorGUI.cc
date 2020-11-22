#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

#include "MallardDuck.h"
#include "RedHeadDuck.h"
#include "RubberDuck.h"
#include "SimulatorGUI.h"

namespace Strategy {
namespace LegacyDuck {

SimulatorGUI::SimulatorGUI() {
  ::srand(time(NULL));

  for (int i = 0; i < MAX_DUCKS; i++) {
    int number = ::rand() % 3;

    switch (number) {
      case 0:
        _ducks.push_back(new MallardDuck());
        break;
      case 1:
        _ducks.push_back(new RedHeadDuck());
        break;
      case 2:
        _ducks.push_back(new RubberDuck());
        break;
      default:
        _ducks.push_back(nullptr);
        break;
    }
  }
}

SimulatorGUI::~SimulatorGUI() {
  for (auto pDuck : _ducks) {
    if (pDuck != nullptr) {
      delete pDuck;
    }
  }

  _ducks.clear();
}

int SimulatorGUI::getDuckCount() {
  cout << "Current number of ducks: ";
  cout << MAX_DUCKS << endl;

  return MAX_DUCKS;
}

void SimulatorGUI::allDucksRoster() {
  cout << "Current list of all Ducks: " << endl;

  _ducks[0]->display();
  for (int i = 1; i < MAX_DUCKS; i++) {
    cout << " | ";
    _ducks[i]->display();
  }

  cout << endl;
}

void SimulatorGUI::allDucksQuack() {
  cout << "All Ducks Quack!" << endl;

  _ducks[0]->quack();

  for (int i = 1; i < MAX_DUCKS; i++) {
    cout << ", ";
    _ducks[i]->quack();
  }

  cout << endl;
}

void SimulatorGUI::allDucksSwim() {
  cout << "All Ducks Swim!!" << endl;

  for (int i = 0; i < MAX_DUCKS; i++) {
    _ducks[i]->swim();
  }

  cout << endl;
}

void SimulatorGUI::splashScreen() {
  cout << "+-----------------------------+" << endl;
  cout << "|     Legacy Duck Simulator   |" << endl;
  cout << "+-----------------------------+" << endl;
}

}  // namespace LegacyDuck
}  // namespace Strategy