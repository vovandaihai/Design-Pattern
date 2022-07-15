#ifndef _Troll_H_
#define _Troll_H_
#include "Character.h"
#include <iostream>
class Troll : public Character
{
private:
    /* data */
public:
    Troll(){
        std::cout << "select Troll!\n";
    };
};
#endif