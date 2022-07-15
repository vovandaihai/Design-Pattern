#include <iostream>
#include <vector>
#include <string>
#include "Duck.h"
#include "mallardDuck.h"
#include "donaldDuck.h"
#include "DuckCall.h"

using namespace std; 

int main() {

Duck *duck1 = new MallardDuck();
Duck *duck2 = new donaldDuck();
IQuackBehavior *mute = new MuteQuack();
IQuackBehavior *quack = new Quack();
IFlyBehavior  *fly = new FlyWithWings();
IFlyBehavior *canNotFly = new FlyNoWay();

duck1->setFlyBehavior(fly);
duck1->setQuackBehavior(quack);

duck2->setFlyBehavior(canNotFly);
duck2->setQuackBehavior(quack);

duck1 ->performQuack();
duck1 ->performFly();


duck2->performFly();
duck2->performQuack();

//hunter create new duck call
DuckCall *hunterDuckCall = new DuckCall();
hunterDuckCall->setQuack(quack);
hunterDuckCall->performQuack();
return 0;
}
