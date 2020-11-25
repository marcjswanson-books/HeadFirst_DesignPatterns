#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_SUBJECT_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_SUBJECT_H_

#include <list>

#include "Observer.h"

using std::list;

namespace Observer {
namespace WeatherStation {

class Subject {
 public:
  Subject();
  virtual ~Subject();

  void registerObserver(Observer* observer);
  void removeObserver(Observer* observer);

 protected:
  void notifyObserver();

 private:
  list<Observer*> _observers;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_SUBJECT_H_