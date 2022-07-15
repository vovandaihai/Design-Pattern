#include <iostream>
#include "IFlyBehavior.h"
using namespace std;

class FlyWithWings : public IFlyBehavior {
public:
	void fly(){
		cout << "I'm flying!!!" << endl;
	};
}; 