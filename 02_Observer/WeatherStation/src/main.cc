#include "CurrentDisplay.h"
#include "ForcastDisplay.h"
#include "HeatIndexDisplay.h"
#include "StatisticsDisplay.h"
#include "WeatherData.h"

// using Observer::WeatherStation::CurrentDisplay;
using Observer::WeatherStation::CurrentDisplay;
using Observer::WeatherStation::ForcastDisplay;
using Observer::WeatherStation::HeatIndexDisplay;
using Observer::WeatherStation::StatisticsDisplay;
using Observer::WeatherStation::WeatherData;

int main() {
  WeatherData weatherData;

  CurrentDisplay currDisplay(&weatherData);
  StatisticsDisplay statsDisplay(&weatherData);
  ForcastDisplay forcastDisplay(&weatherData);
  HeatIndexDisplay heatIndexDisplay(&weatherData);

  weatherData.feed(37.0, 29.88, 73.0);
  weatherData.feed(36.0, 29.88, 75.0);
  weatherData.feed(35.0, 29.88, 78.0);
  weatherData.feed(34.0, 29.88, 75.0);

  return 0;
}
