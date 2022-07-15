#include "IQuackBehavior.h"
#include <iostream>
class DuckCall 
{
public:
    DuckCall()
    {
        std::cout << "create new Duck Call\n";
    };
    void setQuack(IQuackBehavior *quackBehavior)
    {
        this->quackBehavior = quackBehavior;
    };
    void performQuack()
    {
        this->quackBehavior->quack();
    }
private:
    IQuackBehavior *quackBehavior;

};