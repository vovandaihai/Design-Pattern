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
	Duck() {
    	cout << "Generate new Duck" << endl;
	};

	virtual void display()	
	{
		cout << "This is a duck from Duck class" << endl;
	};

	void performFly() {
    	flyBehavior->fly();
	};

	void performQuack()
	{
    	quackBehavior->quack();
	};

	void swim ()
	{
    	cout << "All ducks float, even decoys" << endl;
	};
};
#endif
