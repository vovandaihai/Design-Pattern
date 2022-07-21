#include "Decorator.h"
class Milk : public Decorator{
private:
    int milkCost;
    std::string des;
public:
    Milk()
    {
        milkCost = 1;
        des = ", Milk";
    }
    std::string getDescription()
    {
        return beverage->getDescription() + des; 
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