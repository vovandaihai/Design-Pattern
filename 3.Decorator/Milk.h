#include "Decorator.h"
class Milk : public Decorator{
private:
    
    std::string des;
public:
    Milk(int s)
    {
        setSize(s);
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
            return beverage->cost() + getSize(); 
        }
        return getSize();
    }
};