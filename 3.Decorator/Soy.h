#include "Decorator.h"

class Soy : public Decorator
{
    private:
    int soyCost;
    public:
    Soy() {
        soyCost = 2;
    }

    int cost ()
    {
        if (beverage != nullptr)
        {
            return beverage->cost() + soyCost;
        }
        return soyCost;
    }
    
};