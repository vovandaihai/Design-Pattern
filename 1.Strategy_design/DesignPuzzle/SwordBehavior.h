#ifndef _SwordBehavior_H_
#define _SwordBehavior_H_
#include "IWeaponBehavior.h"
#include <iostream>
class SwordBehavior : public IWeaponBehavior
{
    public:
    void useWeapon()
    {
        std::cout << "swinging a sword\n";
    };
};
#endif