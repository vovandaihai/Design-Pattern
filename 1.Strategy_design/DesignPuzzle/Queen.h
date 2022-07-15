#ifndef _Queen_H_
#define _Queen_H_
#include "Character.h"
#include <iostream>
class Queen : public Character
{
private:
    /* data */
public:
    Queen(){
        std::cout << "select Queen!\n";
    };
    ~Queen();
};
#endif