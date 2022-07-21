#ifndef _Decorator_H_
#define _Decorator_H_
#include "Beverage.h"

class Decorator : public Beverage 
{
    public:
    Decorator()
    {
        beverage = nullptr;
    }

    Beverage *beverage;   
};
#endif