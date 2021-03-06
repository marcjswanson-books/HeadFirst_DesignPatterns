#include "SimulatorGUI.h"

#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include "MallardDuck.h"
#include "RedHeadDuck.h"
#include "RubberDuck.h"

namespace Strategy {
namespace StrategicDuck {

SimulatorGUI::SimulatorGUI() {
  ::srand(time(NULL));
  for (int i = 0; i < MAX_DUCKS; i++) {
    int number = -1;

    number = ::rand() % 3;
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

void SimulatorGUI::run() {
  getDuckCount();

  displayBorder();
  allDucksRoster();
  displayBorder();
  allDucksQuack();
  displayBorder();
  allDucksSwim();
  displayBorder();
  allDucksFly();
  displayBorder();
}

void SimulatorGUI::displayBorder() {
  cout << "+";

  for (int i = 0; i < MAX_DUCKS; i++) {
    for (int j = 0; j < CELL_WIDTH; j++) {
      cout << "-";
    }
    cout << "+";
  }

  cout << endl;
}

void SimulatorGUI::fillCell(const string& text) {
  cout << text;
  fillCell(text.length());
}

void SimulatorGUI::fillCell(unsigned int length) {
  int pad = CELL_WIDTH - length - 2;

  if (pad > 0) {
    cout << string(pad, ' ');
  }

  cout << " | ";
}

int SimulatorGUI::getDuckCount() {
  cout << "Current number of ducks: ";
  cout << MAX_DUCKS << endl;

  return MAX_DUCKS;
}

void SimulatorGUI::allDucksRoster() {
  cout << "| ";

  for (int i = 0; i < MAX_DUCKS; i++) {
    if (_ducks[i] != nullptr) {
      fillCell(_ducks[i]->display());
    } else {
      fillCell("NULL");
    }
  }

  cout << endl;
}

void SimulatorGUI::allDucksQuack() {
  cout << "| ";

  for (int i = 0; i < MAX_DUCKS; i++) {
    if (_ducks[i] != nullptr) {
      fillCell(_ducks[i]->quack());
    } else {
      fillCell("NULL");
    }
  }

  cout << endl;
}

void SimulatorGUI::allDucksSwim() {
  cout << "| ";

  for (int i = 0; i < MAX_DUCKS; i++) {
    if (_ducks[i] != nullptr) {
      fillCell(_ducks[i]->swim());
    } else {
      fillCell("NULL");
    }
  }

  cout << endl;
}

void SimulatorGUI::allDucksFly() {
  cout << "| ";

  for (int i = 0; i < MAX_DUCKS; i++) {
    if (_ducks[i] != nullptr) {
      fillCell(_ducks[i]->fly());
    } else {
      fillCell("NULL");
    }
  }

  cout << endl;
}

void SimulatorGUI::splashScreen() {
  cout << "+-------------------------------+" << endl;
  cout << "|    Strategic Duck Simulator   |" << endl;
  cout << "+-------------------------------+" << endl;
}

}  // namespace StrategicDuck
}  // namespace Strategy
