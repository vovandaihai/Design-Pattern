#include "Expresso.h"
#include "Milk.h"
#include "Soy.h"
int main()
{
    Expresso *a = new Expresso;
    Milk *m = new Milk;
    Soy *s = new Soy;
    Soy *s2 = new Soy;

    s->beverage = m;
    m->beverage = a;
    s2->beverage = s;
    std::cout << s2->cost();
    
    return 0;
}