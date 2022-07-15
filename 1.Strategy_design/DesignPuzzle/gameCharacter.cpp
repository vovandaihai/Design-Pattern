#include "King.h"
#include "BowAndArrowBehavior.h"
#include "KnifeBehavior.h"
int main()
{
    std::cout << "Start game";
    Character *gamer = new King;
    IWeaponBehavior *gamerWeapon = new KnifeBehavior;
    gamer->setWeapon(gamerWeapon);
    gamer->fight();

    IWeaponBehavior *newWeapon = new BowAndArrowBehavior;
    gamer->setWeapon(newWeapon);
    gamer->fight();
    return 0;
}