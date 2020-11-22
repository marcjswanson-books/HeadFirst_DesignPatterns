#ifndef HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_DUCK_H_
#define HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_DUCK_H_

#include <string>

namespace Strategy {
namespace LegacyDuck {

/**
 * @brief Abstract Duck class */
class Duck {
 public:
  /**
   * @brief Construct a new Duck object  */
  Duck();

  /**
   * @brief Destroy the Duck object */
  virtual ~Duck(); /*! Destructor */

  /**
   * @brief Pure virtual to display the Duck's quacking behavior */
  virtual void quack() = 0;

  /**
   * @brief Pure virtual to display the Duck's swimming behavior */
  virtual void swim() = 0;

  /**
   * @brief  Pure Virtual to display the type and id of the Duck */
  virtual void display() = 0;

 protected:
  /**
   * @brief Unique id specific to the concrete Duck types */
  unsigned int _id;

  /**
   * @brief  Duck's Type */
  std::string _name;

 private:
};

}  // namespace LegacyDuck
}  // namespace Strategy

#endif  // HEADFIRST_DESIGNPATTERNS_01_STRATEGY_LEGACYDUCK_DUCK_H_