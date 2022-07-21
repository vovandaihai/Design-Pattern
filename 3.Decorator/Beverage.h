#ifndef _Beverage_H_
#define _Beverage_H_
#include <iostream>
enum {
    TALL = 0,
    GRANDE,
    VENTI
};
class Beverage
{
    private:
    std::string des = "Unknow beverage";
    int size;
    public:
    int getSize()
    {
        return size;
    }
    void setSize(int s)
    {
        size = s;
    }
    virtual std::string getDescription() = 0;
    virtual int cost() = 0;
};
#endif