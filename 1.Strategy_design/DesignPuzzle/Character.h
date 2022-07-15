#ifndef _Character_H_
#define _Character_H_
#include "IWeaponBehavior.h"
class Character
{
    public:
    void setWeapon(IWeaponBehavior *wep)
    {
        weapon = wep;
    };
    void fight()
    {
        weapon->useWeapon();
    }
    private:
    IWeaponBehavior *weapon;

};
#endif