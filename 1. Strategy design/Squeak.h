#include <iostream>
#include "IQuackBehavior.h"
using namespace std;
class Squeak : public IQuackBehavior {
    void quack();
};
