cmake_minimum_required(VERSION 3.0.0)

include_directories( ${StrategicDuck_SOURCE_DIR}/include)

add_executable( StrategicDuckSimulator
	main.cc
	SimulatorGUI.cc
	FlyWithWings.cc
	FlyNoWay.cc
	Quack.cc
	Squeak.cc
	MuteQuack.cc
	Duck.cc
	MallardDuck.cc
)