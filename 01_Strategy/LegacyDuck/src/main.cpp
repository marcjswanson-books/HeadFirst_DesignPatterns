#include "global_includes.h"
#include "MallardDuck.h"
#include "RedHeadDuck.h"

#include "SimulatorGUI.h"

int main()
{
	SimulatorGUI gui;

	gui.splashScreen();

	gui.allDucksRoster();
	gui.getDuckCount();
	gui.allDucksQuack();
	gui.allDucksSwim();


	return 0;
}
