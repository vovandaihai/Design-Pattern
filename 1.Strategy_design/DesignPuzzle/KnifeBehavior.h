#ifndef _KnifeBehavior_H_
#define _KnifeBehavior_H_
#include "IWeaponBehavior.h"
#include <iostream>
class KnifeBehavior : public IWeaponBehavior
{
    public:
    void useWeapon()
    {
        std::cout << "cutting with a knief\n";
    };
};
#endif