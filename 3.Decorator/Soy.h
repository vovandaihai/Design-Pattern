#include "Decorator.h"

class Soy : public Decorator
{
    private:

    std::string des;
    public:
    Soy(int s) {
        setSize(s);
        
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
            return beverage->cost() + getSize();
        }
        return getSize();
    }
    
};