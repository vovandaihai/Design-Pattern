#ifndef _Duck_h_
#define _Duck_h_
#include <iostream>
#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

using namespace std;

class Duck { 

public:
	
	Duck() {
    	cout << "Generate new Duck" << endl;
	};

	virtual void display()	
	{
		cout << "This is a duck from Duck class" << endl;
	};

	void setFlyBehavior(IFlyBehavior *flyBehavior)
	{
		this->flyBehavior = flyBehavior;
	} 
	void setQuackBehavior(IQuackBehavior *quackBehavior)
	{
		this->quackBehavior = quackBehavior;
	} 
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
private:
	IFlyBehavior *flyBehavior;
	IQuackBehavior *quackBehavior;
};
#endif
