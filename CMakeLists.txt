cmake_minimum_required(VERSION 3.0.0) 
project(HFDP VERSION 1.0.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message( STATUS "+---------------------------------------+" )
message( STATUS "|   CMake: Head First: Design Patterns  +" )
message( STATUS "+---------------------------------------+" )

add_subdirectory( 01_Strategy )
add_subdirectory( 02_Observer )
add_subdirectory( 03_Decorator )
add_subdirectory( 04_Factory )
add_subdirectory( 05_Singleton )
add_subdirectory( 06_Command )
add_subdirectory( 07_AdapterFacade )
add_subdirectory( 08_TemplateMethod )
add_subdirectory( 09_IteratorComposite )
add_subdirectory( 10_State )
add_subdirectory( 11_Proxy )
add_subdirectory( 12_Compound )
add_subdirectory( 13_BetterLiving )
add_subdirectory( Appendices )

install( TARGETS RUNTIME
    DESTINATION "bin" )