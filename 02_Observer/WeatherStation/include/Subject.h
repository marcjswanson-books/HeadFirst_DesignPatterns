#ifndef HEADFIRST_DESIGNPATTERNS_02_OBSERVER_SUBJECT_H_
#define HEADFIRST_DESIGNPATTERNS_02_OBSERVER_SUBJECT_H_

#include <list>

#include "Observer.h"

using std::list;

namespace Observer {
namespace WeatherStation {

class Subject {
 public:
  /**
   * @brief Construct a new Subject object
   */
  Subject();

  /**
   * @brief Destroy the Subject object
   */
  virtual ~Subject();

  /**
   * @brief Subscribe the obeserver to this subject.
   *
   * @param observer The object that will get calledon update()
   */
  void registerObserver(Observer* observer);

  /**
   * @brief  Unsubscrive the observer from this subject.
   *
   * @param observer The observer to be removed.
   */
  void removeObserver(Observer* observer);

 protected:
  void notifyObserver();

 private:
  list<Observer*> _observers;
};

}  // namespace WeatherStation
}  // namespace Observer

#endif  // HEADFIRST_DESIGNPATTERNS_02_OBSERVER_SUBJECT_H_