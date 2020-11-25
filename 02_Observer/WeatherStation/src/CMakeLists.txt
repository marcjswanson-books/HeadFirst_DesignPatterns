cmake_minimum_required(VERSION 3.0.0)

include_directories( ${WeatherStation_SOURCE_DIR}/include)

add_executable( WeatherStation
	main.cc
	Subject.cc
	WeatherData.cc
	CurrentDisplay.cc
	StatisticsDisplay.cc
	ForcastDisplay.cc
	HeatIndexDisplay.cc
)