#include "Subject.h"

namespace Observer {
namespace WeatherStation {

Subject::Subject() {}
Subject::~Subject() {}

void Subject::registerObserver(Observer* observer) {
  _observers.push_back(observer);
}

void Subject::removeObserver(Observer* observer) {
  _observers.remove(observer);
}

void Subject::notifyObserver() {
  for (auto pObserver : _observers) {
    pObserver->update();
  }
}

}  // namespace WeatherStation
}  // namespace Observer
