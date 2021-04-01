#include <iostream>
#include "IFlyBehavior.h"
using namespace std;

class FlyWithWings : public virtual IFlyBehavior {
public:
	void fly();
}; 
