#include "Beverage.h"
class Expresso : public Beverage
{

    public:
    std::string getDescription()
    {
        return res;
    }
    int cost()
    {
        return 1;
    }
    private:
    std::string res = "Expresso";
};
