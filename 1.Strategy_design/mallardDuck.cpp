#include "mallardDuck.h"

MallardDuck::MallardDuck (){
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

void MallardDuck::display(){
    cout << "I'm a real Mallard duck" << endl; 
}
