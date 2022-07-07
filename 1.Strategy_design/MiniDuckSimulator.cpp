#include <iostream>
#include <vector>
#include <string>
#include "Duck.h"
#include "mallardDuck.h"

using namespace std; 

int main() {

Duck *duck1 = new MallardDuck();
duck1 ->performQuack();
return 0;
}
