cmake_minimum_required(VERSION 3.0.0)
project( 01_Strategy VERSION 0.1.0)

message( STATUS "CMake: ${PROJECT_NAME}" )

add_subdirectory( LegacyDuck )
add_subdirectory( StrategicDuck )

