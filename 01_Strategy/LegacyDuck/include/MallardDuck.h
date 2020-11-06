#ifndef HFDP_01STRATEGY_MALLARDDUCK_H
#define HFDP_01STRATEGY_MALLARDDUCK_H 

#include "Duck.h"

class MallardDuck : public Duck {
    public:
        MallardDuck();
        virtual ~MallardDuck();

        virtual void quack();
        virtual void swim();
        virtual void display();
        // other duck-like methods

        private:
            static unsigned int _newID;
};

#endif  // HFDP_01STRATEGY_MALLARDDUCK_H