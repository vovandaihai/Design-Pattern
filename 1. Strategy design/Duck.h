#ifndef _Duck_h_
#define _Duck_h_
#include <iostream>
#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

using namespace std;

class Duck { 

public:
	IFlyBehavior *flyBehavior;
	IQuackBehavior *quackBehavior;
	Duck();

	virtual void display();
	
	void performFly();

	void performQuack();
	
	void swim ();

};
#endif
