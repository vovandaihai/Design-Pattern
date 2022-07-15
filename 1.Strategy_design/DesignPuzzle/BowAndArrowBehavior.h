#ifndef _BowAndArrowBehavior_H_
#define _BowAndArrowBehavior_H_
#include "IWeaponBehavior.h"
#include <iostream>
class BowAndArrowBehavior : public IWeaponBehavior
{
    public:
    void useWeapon()
    {
        std::cout << "Shoot arrow with a bow\n";
    };
};

#endif