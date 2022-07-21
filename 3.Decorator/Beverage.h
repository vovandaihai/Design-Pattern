#ifndef _Beverage_H_
#define _Beverage_H_
#include <iostream>

class Beverage
{
    private:
    std::string des = "Unknow beverage";
    
    public:
    virtual std::string getDescription() = 0;
    virtual int cost() = 0;
};
#endif