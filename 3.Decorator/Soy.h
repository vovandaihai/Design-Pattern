#include "Decorator.h"

class Soy : public Decorator
{
    private:
    int soyCost;
    std::string des;
    public:
    Soy() {
        soyCost = 2;
        des = ", soy";
    }
    std::string getDescription()
    {
        return beverage->getDescription() + des;
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