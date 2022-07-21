#include "Beverage.h"
class Expresso : public Beverage
{

    public:
    Expresso()
    {
        setSize(TALL);
    }
    Expresso(int s)
    {
        setSize(s);
    }
    std::string getDescription()
    {
        return res;
    }
    int cost()
    {
        return 1 + getSize();
    }
    private:
    std::string res = "Expresso";
};
