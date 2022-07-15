#ifndef _Knight_H_
#define _Knight_H_
#include "Character.h"
#include <iostream>
class Knight : public Character
{
private:
    /* data */
public:
    Knight(){
        std::cout << "select Knight!\n";
    };
};
#endif