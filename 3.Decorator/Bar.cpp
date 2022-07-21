#include "Expresso.h"
#include "Milk.h"
#include "Soy.h"
int main()
{
    Expresso *a = new Expresso(VENTI);
    Milk *m = new Milk(GRANDE);
    Soy *s = new Soy(GRANDE);
    Soy *s2 = new Soy(VENTI);

    s->beverage = m;
    m->beverage = a;
    s2->beverage = s;
    std::cout << s2->cost() << " \n" << s2->getDescription();;
    
    return 0;
}