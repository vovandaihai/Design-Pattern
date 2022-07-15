#include <iostream>
#include "IFlyBehavior.h"

using namespace std;
class FlyNoWay : public IFlyBehavior {
	void fly()
	{
    	cout << "Shit!!! I can't fly" << endl;
	};
};
