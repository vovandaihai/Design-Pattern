#include "Duck.h"

Duck::Duck() {
    cout << "Tao 1 con vit moi" << endl;
}

void Duck::swim(){
    cout << "All ducks float, even decoys" << endl;
}

void Duck::performFly() {
    flyBehavior->fly();
}

void Duck::performQuack() {
    quackBehavior->quack();
}

void Duck::display() {
	cout << "This is a duck" << endl;
}
