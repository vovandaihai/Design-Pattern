#ifndef _AxeBehavior_H_
#define _AxeBehavior_H_
#include "IWeaponBehavior.h"
#include <iostream>
class AxeBehavior : public IWeaponBehavior
{
    public:
    void useWeapon()
    {
        std::cout << "chopping with an axe\n";
    };
};
#endif