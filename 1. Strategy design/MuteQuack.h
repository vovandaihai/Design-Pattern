#include <iostream>
#include "IQuackBehavior.h"

using namespace std;
class MuteQuack : public IQuackBehavior {
public:
	void quack();
};
