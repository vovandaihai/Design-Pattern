#include "Decorator.h"
class Milk : public Decorator{
private:
    int milkCost;
public:
    Milk()
    {
        milkCost = 1;
    }
    int cost()
    {
        if (beverage != nullptr)
        {
            return beverage->cost() + milkCost; 
        }
        return milkCost;
    }
};