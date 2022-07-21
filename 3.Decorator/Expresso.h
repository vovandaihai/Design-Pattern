#include "Beverage.h"
class Expresso : public Beverage
{

    public:
    void description()
    {
        std::cout << "Price of this Beverage: " << cost() << std::endl;
    }
    int cost()
    {
        return 1;
    }
};
