#ifndef HFDP_01STRATEGY_DUCK_H
#define HFDP_01STRATEGY_DUCK_H

#include <string>

class Duck
{
    public:
        Duck();
        virtual ~Duck();

        virtual void quack() = 0;
        virtual void swim() = 0;
        virtual void display() = 0;
        // other duck-like methods
    protected:
        unsigned int _id;
        std::string _name;

    private:

};

#endif  // HFDP_01STRATEGY_DUCK_H