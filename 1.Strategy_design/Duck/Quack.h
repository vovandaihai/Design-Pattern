#include <iostream>
#include "IQuackBehavior.h"

using namespace std;

class Quack : public IQuackBehavior {
	void quack()
	{
		cout << "Quack! Quack! Quack!" << endl;
	};
};
