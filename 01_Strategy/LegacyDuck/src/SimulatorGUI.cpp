#include "SimulatorGUI.h"

#include "MallardDuck.h"
#include "RedHeadDuck.h"

#include "global_includes.h"
#include <cstdlib>

SimulatorGUI::SimulatorGUI()
{
    ::srand( time(NULL) );
    for ( int i=0; i< MAX_DUCKS; i++ )
    {
        int number = ::rand() % 2;

        switch ( number ) 
        {
            case 0:
                _ducks[i] = new MallardDuck();
                break;
            case 1:
                _ducks[i] = new RedHeadDuck();
                break;
            default:
                _ducks[i] = nullptr;
                break;
        }

    }
}

SimulatorGUI::~SimulatorGUI()
{
    for ( int i=0; i < MAX_DUCKS; i++ )
    {
        if ( _ducks[i] != nullptr )
        {
            delete _ducks[i];
        }
    }
}

int 
SimulatorGUI::getDuckCount()
{
    cout << "Current number of ducks: ";
    cout << MAX_DUCKS << endl;

    return MAX_DUCKS;
}

void 
SimulatorGUI::allDucksRoster()
{
    cout << "Current list of all Ducks: " << endl;

    _ducks[0]->display();
    for ( int i = 1; i < MAX_DUCKS; i++ )
    {
        cout << " | ";
        _ducks[i]->display();
    }

    cout << endl;
}

void 
SimulatorGUI::allDucksQuack()
{
    cout << "All Ducks Quack!" << endl;

    _ducks[0]->quack();

    for ( int i=1; i<MAX_DUCKS; i++ )
    {
        cout << ", ";
        _ducks[i]->quack();
    }

    cout << endl;
}

void 
SimulatorGUI::allDucksSwim()
{
    cout << "All Ducks Swim!!" << endl;

    for ( int i=0; i<MAX_DUCKS; i++)
    {
        _ducks[i]->swim();
    }

    cout << endl;
}

void
SimulatorGUI::splashScreen()
{
	cout << "+-----------------------------+" << endl;
	cout << "|     Legacy Duck Simulator   |" << endl;
	cout << "+-----------------------------+" << endl;
}