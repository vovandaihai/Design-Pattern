#ifndef _King_H_
#define _King_H_
#include "Character.h"
#include <iostream>
class King : public Character
{
private:
    /* data */
public:
    King(){
        std::cout << "select King!\n";
    };
    
};
#endif