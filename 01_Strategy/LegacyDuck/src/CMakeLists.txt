cmake_minimum_required(VERSION 3.0.0)

include_directories( ${LegacyDuck_SOURCE_DIR}/include)

add_executable( LegacyDuckSimulator
	main.cc
	SimulatorGUI.cc
	Duck.cc
	MallardDuck.cc
	RedHeadDuck.cc
	RubberDuck.cc
)