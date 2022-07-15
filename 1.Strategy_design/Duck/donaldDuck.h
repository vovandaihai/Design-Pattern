#ifndef _DONALDDUCK_H_
#define _DONALDDUCK_H_
#include "Duck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"
#include <iostream>

class donaldDuck : public Duck
{
public:
    donaldDuck ()
    {
        std::cout << "generate Donal!!!" << endl;
    };
};
#endif