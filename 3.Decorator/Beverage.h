#ifndef _Beverage_H_
#define _Beverage_H_
#include <iostream>
class Beverage
{
    public:
    void description()
    {
        std::cout << "This is a beberage! \n";
    };
    virtual int cost() = 0;
};
#endif